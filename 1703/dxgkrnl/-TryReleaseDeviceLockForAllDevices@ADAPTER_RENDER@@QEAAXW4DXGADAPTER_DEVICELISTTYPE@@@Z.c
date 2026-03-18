/*
 * XREFs of ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01747C0
 * Callers:
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C016EBAC (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 **v5; // rsi
  __int64 *i; // rbx

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
  v4 = v2 + a1;
  v5 = (__int64 **)(v3 + a1);
  if ( *(struct _KTHREAD **)(v2 + a1 + 8) == KeGetCurrentThread()
    || DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    for ( i = *v5;
          i != (__int64 *)v5 && i && (*((_DWORD *)i + 18) || ExIsResourceAcquiredExclusiveLite((PERESOURCE)i[13]));
          i = (__int64 *)*i )
    {
      ExReleaseResourceLite((PERESOURCE)i[13]);
      KeLeaveCriticalRegion();
      if ( (struct _KTHREAD *)i[15] != KeGetCurrentThread() )
        break;
      i[15] = 0LL;
      ExReleasePushLockExclusiveEx(i + 14, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( *(struct _KTHREAD **)(v4 + 8) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
