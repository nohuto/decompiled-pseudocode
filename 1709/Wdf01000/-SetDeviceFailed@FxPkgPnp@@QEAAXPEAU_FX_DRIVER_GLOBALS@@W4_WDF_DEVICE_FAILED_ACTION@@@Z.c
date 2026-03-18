/*
 * XREFs of ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C009E298
 * Callers:
 *     ?InvalidateDeviceStateAndReportFailed@FxCompanionTarget@@EEAAXXZ @ 0x1C0074880 (-InvalidateDeviceStateAndReportFailed@FxCompanionTarget@@EEAAXXZ.c)
 *     imp_WdfDeviceSetFailed @ 0x1C0077370 (imp_WdfDeviceSetFailed.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001D59C (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C00A2BD4 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 */

void __fastcall FxPkgPnp::SetDeviceFailed(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *CallerFxDriverGlobals,
        _WDF_DEVICE_FAILED_ACTION FailedAction)
{
  bool IsVersionGreaterThanOrEqualTo; // al
  int v5; // r9d
  _DEVICE_OBJECT *SafePhysicalDevice; // rax

  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    CallerFxDriverGlobals,
                                    (unsigned int)CallerFxDriverGlobals,
                                    0x17u);
  this->m_FailedAction = v5;
  this->m_Failed = 1;
  if ( v5 != 1
    || IsVersionGreaterThanOrEqualTo && !FxPkgPnp::PnpCheckAndIncrementRestartCount(this)
    || this->AskParentToRemoveAndReenumerate(this) < 0 )
  {
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
    if ( SafePhysicalDevice )
      IoInvalidateDeviceState(SafePhysicalDevice);
  }
}
