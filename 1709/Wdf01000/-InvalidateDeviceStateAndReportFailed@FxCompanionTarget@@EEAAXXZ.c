/*
 * XREFs of ?InvalidateDeviceStateAndReportFailed@FxCompanionTarget@@EEAAXXZ @ 0x1C0074880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C009E298 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 */

void __fastcall FxCompanionTarget::InvalidateDeviceStateAndReportFailed(FxCompanionTarget *this)
{
  _LIST_ENTRY *Flink; // rcx
  const void *_a1; // rdx
  __int16 v4; // ax
  _FX_DRIVER_GLOBALS *v5; // rcx

  Flink = this->m_ChildListHead.Flink;
  _a1 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
  v4 = WORD1(Flink->Blink);
  v5 = (_FX_DRIVER_GLOBALS *)Flink[1].Flink;
  if ( !v4 )
    _a1 = 0LL;
  WPP_IFR_SF_q(v5, 2u, 0xCu, 0xAu, WPP_FxCompanionTarget_cpp_Traceguids, _a1);
  FxPkgPnp::SetDeviceFailed(
    (FxPkgPnp *)this->m_ChildListHead.Flink[40].Blink,
    (_FX_DRIVER_GLOBALS *)this->m_ChildListHead.Flink[1].Flink,
    WdfDeviceFailedNoRestart);
}
