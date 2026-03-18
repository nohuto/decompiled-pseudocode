/*
 * XREFs of PpCheckInDriverDatabase @ 0x1405FBC08
 * Callers:
 *     PnpPrepareDriverLoading @ 0x1405FB610 (PnpPrepareDriverLoading.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     McTemplateK0j @ 0x14023B648 (McTemplateK0j.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopBuildFullDriverPath @ 0x1405FB6D4 (IopBuildFullDriverPath.c)
 *     PiLookupInDDBCache @ 0x1405FBB38 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x14072767C (PnpLogEvent.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(UNICODE_STRING *a1, void *a2, void *a3, unsigned int a4, int a5, _OWORD *a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  UNICODE_STRING v15; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( InitIsWinPEMode )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, &v15);
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
    v10 = PiLookupInDDBCache((__int64)&v15, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB(&v15, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v15.Buffer, 0);
  }
  if ( (unsigned int)(v10 + 1073740949) <= 1 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x20000) != 0 )
      McTemplateK0j(v9, v8, v11, (__int64)a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
