/*
 * XREFs of IoConfigureCrashDump @ 0x140159F78
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PoShutdownBugCheck @ 0x1406C9EC0 (PoShutdownBugCheck.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     IopInitDumpCapsuleSupport @ 0x140159548 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14015A054 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x14015A28C (IopReadDumpRegistry.c)
 *     IopDisableCrashDump @ 0x14015A360 (IopDisableCrashDump.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopInitializeCrashDump @ 0x1405BA68C (IopInitializeCrashDump.c)
 *     RtlGetHostNtSystemRoot @ 0x1405D64E4 (RtlGetHostNtSystemRoot.c)
 *     MmGetPageFileForCrashDump @ 0x1406B7E48 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(int a1, char a2)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  int v6; // ebx
  void *PageFileForCrashDump; // rdi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING v11; // [rsp+30h] [rbp-68h]
  WCHAR SourceString[32]; // [rsp+40h] [rbp-58h] BYREF

  wcscpy(SourceString, L"C:\\pagefile.sys");
  memset(&SourceString[16], 0, 0x20uLL);
  if ( !a2 )
    IopReadDumpRegistry(v4, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v6 = -1073741808;
      goto LABEL_7;
    }
    if ( ForceDumpDisabled )
    {
      v6 = -1073741637;
      goto LABEL_7;
    }
    PageFileForCrashDump = (void *)MmGetPageFileForCrashDump();
    if ( !PageFileForCrashDump )
    {
      v6 = -1073741772;
      goto LABEL_7;
    }
    ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
    v6 = IopDisableCrashDump();
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      HostNtSystemRoot = RtlGetHostNtSystemRoot();
      v11 = DestinationString;
      *DestinationString.Buffer = **(_WORD **)(HostNtSystemRoot + 8);
      if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
      {
        IopRemoveDumpCapsuleSupport();
        v6 = 0;
      }
      else
      {
        if ( CapsuleDumpAllowed )
          IopInitDumpCapsuleSupport();
        v6 = -1073741823;
      }
    }
  }
  else
  {
    if ( !ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    {
      v6 = -1073741823;
      goto LABEL_7;
    }
    v6 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
LABEL_7:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v6;
}
