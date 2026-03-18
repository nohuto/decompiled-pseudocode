/*
 * XREFs of ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173460
 * Callers:
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C016DF08 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C01A32E0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C0178BF4 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::AddStablePowerReference(ADAPTER_RENDER *this)
{
  if ( !*((_DWORD *)this + 276) && *(_QWORD *)(*((_QWORD *)this + 2) + 880LL) )
    ADAPTER_RENDER::DdiSetStablePowerState(this, 1);
  ++*((_DWORD *)this + 276);
}
