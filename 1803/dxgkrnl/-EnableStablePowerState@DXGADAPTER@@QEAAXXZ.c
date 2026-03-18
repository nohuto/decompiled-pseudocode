/*
 * XREFs of ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C0148FE8
 * Callers:
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C019E33C (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00269A0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003376C (-EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0158B94 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::EnableStablePowerState(ADAPTER_RENDER **this)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  ADAPTER_RENDER *v5; // rdi

  for ( i = 0; i < *((_DWORD *)this + 660); ++i )
  {
    v3 = 520LL * i;
    if ( !*(_DWORD *)((char *)this[312] + v3 + 208) )
    {
      DXGADAPTER::SetPowerComponentActiveCBInternal((DXGADAPTER *)this, i, 1u, 0);
      v4 = *(_QWORD *)((char *)this[312] + v3 + 512);
      if ( v4 )
        DXGPOWERSTATISTICSTRANSITIONENGINE::EnableStablePState((KSPIN_LOCK *)(v4 + 136));
    }
  }
  v5 = this[308];
  *((_BYTE *)this + 2935) = 1;
  if ( v5 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v5 + 1480, 0LL);
    *((_QWORD *)v5 + 186) = KeGetCurrentThread();
    ADAPTER_RENDER::AddStablePowerReference(v5);
    *((_QWORD *)v5 + 186) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v5 + 1480, 0LL);
    KeLeaveCriticalRegion();
  }
}
