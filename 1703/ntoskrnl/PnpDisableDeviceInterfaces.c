/*
 * XREFs of PnpDisableDeviceInterfaces @ 0x14056E2A4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoSetDeviceInterfaceState @ 0x140461410 (IoSetDeviceInterfaceState.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404E3388 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

__int64 __fastcall PnpDisableDeviceInterfaces(unsigned __int16 *a1)
{
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int MatchingFilteredDeviceInterfaceList; // edi
  unsigned int v5; // esi
  const WCHAR *i; // rsi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+88h] [rbp+10h] BYREF
  void *v10; // [rsp+90h] [rbp+18h] BYREF

  v10 = 0LL;
  PoolWithTag = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v10, 0LL, a1);
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    v9 = 4096;
    MatchingFilteredDeviceInterfaceList = -1073741789;
    v5 = 0;
    while ( v5 < 5 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v9, 0x20207050u);
      if ( !PoolWithTag )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        break;
      }
      ++v5;
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              0LL,
                                              (__int64)v10,
                                              1,
                                              0LL,
                                              0LL,
                                              (__int64)PoolWithTag,
                                              v9,
                                              (__int64)&v9,
                                              0);
      if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
        break;
    }
    if ( MatchingFilteredDeviceInterfaceList >= 0 )
    {
      for ( i = (const WCHAR *)PoolWithTag; *i; i += ((unsigned __int64)DestinationString.Length + 2) >> 1 )
      {
        MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, i);
        if ( MatchingFilteredDeviceInterfaceList >= 0 )
          IoSetDeviceInterfaceState(&DestinationString, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  PnpUnicodeStringToWstrFree(v10, (__int64)a1);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
