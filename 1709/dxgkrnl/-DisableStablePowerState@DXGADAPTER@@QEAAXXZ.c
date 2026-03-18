/*
 * XREFs of ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01713EC
 * Callers:
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C01A9F70 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001F6B8 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C001FE24 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0028B90 (-DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::DisableStablePowerState(DXGADAPTER *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  ADAPTER_RENDER *v6; // rcx

  if ( *((_BYTE *)this + 2783) )
  {
    for ( i = 0; i < *((_DWORD *)this + 622); ++i )
    {
      v3 = 520LL * i;
      v4 = *((_QWORD *)this + 293);
      if ( !*(_DWORD *)(v3 + v4 + 208) )
      {
        v5 = *(_QWORD *)(v3 + v4 + 512);
        if ( v5 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::DisableStablePState((KSPIN_LOCK *)(v5 + 136));
        DXGADAPTER::SetPowerComponentIdleCBInternal(this, i, 0);
      }
    }
    v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 289);
    if ( v6 )
      ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(v6);
    *((_BYTE *)this + 2783) = 0;
  }
}
