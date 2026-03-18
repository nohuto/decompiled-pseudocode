/*
 * XREFs of PpCheckInDriverDatabase @ 0x1404B3D84
 * Callers:
 *     PnpPrepareDriverLoading @ 0x1404B3CA8 (PnpPrepareDriverLoading.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     Template_j @ 0x1401F8DC8 (Template_j.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiLookupInDDBCache @ 0x1404B3E70 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 *     IopBuildFullDriverPath @ 0x1404D9704 (IopBuildFullDriverPath.c)
 *     PnpLogEvent @ 0x140695B4C (PnpLogEvent.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, ULONGLONG a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  _BYTE v15[8]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( InitIsWinPEMode )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, v15);
  if ( v10 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      RtlInitUnicodeString(&DestinationString, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v10 = PiLookupInDDBCache(v15, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB(v15, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(P, 0);
  }
  if ( (unsigned int)(v10 + 1073740949) <= 1 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x20000) != 0 )
      Template_j(v9, v8, v11, a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
