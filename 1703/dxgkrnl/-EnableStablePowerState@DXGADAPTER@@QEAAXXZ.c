/*
 * XREFs of ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C016DF08
 * Callers:
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C01956AC (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0022264 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C00389F8 (-EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173460 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::EnableStablePowerState(ADAPTER_RENDER **this)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  ADAPTER_RENDER *v5; // rdi

  for ( i = 0; i < *((_DWORD *)this + 616); ++i )
  {
    v3 = 520LL * i;
    if ( !*(_DWORD *)((char *)this[290] + v3 + 208) )
    {
      DXGADAPTER::SetPowerComponentActiveCBInternal((DXGADAPTER *)this, i, 1u, 0);
      v4 = *(_QWORD *)((char *)this[290] + v3 + 512);
      if ( v4 )
        DXGPOWERSTATISTICSTRANSITIONENGINE::EnableStablePState((KSPIN_LOCK *)(v4 + 136));
    }
  }
  v5 = this[286];
  *((_BYTE *)this + 2759) = 1;
  if ( v5 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v5 + 1112, 0LL);
    *((_QWORD *)v5 + 140) = KeGetCurrentThread();
    ADAPTER_RENDER::AddStablePowerReference(v5);
    *((_QWORD *)v5 + 140) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v5 + 1112, 0LL);
    KeLeaveCriticalRegion();
  }
}
