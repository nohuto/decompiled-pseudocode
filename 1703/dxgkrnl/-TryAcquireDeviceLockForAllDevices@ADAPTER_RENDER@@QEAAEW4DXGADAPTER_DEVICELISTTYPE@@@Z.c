/*
 * XREFs of ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C0174704
 * Callers:
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C016D4B4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 **v4; // rsi
  __int64 v5; // rbx
  __int64 **i; // rbx

  if ( a2 == 1 )
  {
    v2 = 40LL;
    v3 = 136LL;
  }
  else
  {
    v2 = 24LL;
    v3 = 120LL;
  }
  v4 = (__int64 **)(v3 + a1);
  v5 = v2 + a1;
  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    for ( i = (__int64 **)*v4; i != v4 && i; i = (__int64 **)*i )
    {
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)i[13], 0) )
        goto LABEL_12;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(i + 14, 0LL) )
        goto LABEL_12;
      i[15] = (__int64 *)KeGetCurrentThread();
    }
    return 1;
  }
  else
  {
LABEL_12:
    KeLeaveCriticalRegion();
    return 0;
  }
}
