/*
 * XREFs of ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0098D30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006353C (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C00A2BD4 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedPowerPolicyRemoved(FxPkgPnp *This, unsigned __int8 a2)
{
  unsigned int v3; // edx

  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  LOBYTE(v3) = This->m_FailedAction;
  if ( ((_BYTE)v3 == 1 && !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(This->m_Globals, v3, 0x17u)
     || !(_BYTE)v3 && This->m_InternalFailure)
    && FxPkgPnp::PnpCheckAndIncrementRestartCount(This) )
  {
    This->AskParentToRemoveAndReenumerate(This);
  }
  if ( This->m_FailedAction || This->m_InternalFailure )
    IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  return 302LL;
}
