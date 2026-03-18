/*
 * XREFs of ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0022BE4
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0021090 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqdq @ 0x1C0020EDC (WPP_IFR_SF_qqdq.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C002B1E0 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 */

void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int PnpDeviceState; // r8d
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a3; // r10
  _FX_DRIVER_GLOBALS *v8; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  PnpDeviceState = FxPkgPnp::HandleQueryPnpDeviceState(this, Irp->m_Irp->IoStatus.Information);
  Irp->m_Irp->IoStatus.Information = PnpDeviceState;
  m_DeviceBase = this->m_DeviceBase;
  _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    _a3 = 0LL;
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    (unsigned __int8)m_DeviceBase,
    PnpDeviceState,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    m_DeviceBase->m_DeviceObject.m_DeviceObject,
    PnpDeviceState,
    Irp->m_Irp);
  v8 = this->m_Globals;
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_(v8, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}
