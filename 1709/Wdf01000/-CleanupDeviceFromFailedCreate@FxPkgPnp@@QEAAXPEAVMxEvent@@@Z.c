/*
 * XREFs of ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C009CBA0
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C007D5AC (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0027E80 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::CleanupDeviceFromFailedCreate(FxPkgPnp *this, MxEvent *WaitEvent)
{
  unsigned __int8 v4; // r8
  FxPkgPnp_vtbl *v5; // rax

  KeGetCurrentIrql();
  KeClearEvent(&WaitEvent->m_Event);
  FxObject::AddRef(this, WaitEvent, 2292, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  this->m_DeviceRemoveProcessed = WaitEvent;
  FxPkgPnp::PnpProcessEvent(this, PnpEventRemove, v4);
  KeWaitForSingleObject(WaitEvent, Executive, 0, 0, 0LL);
  v5 = this->__vftable;
  this->m_DeviceRemoveProcessed = 0LL;
  v5->Release(this, WaitEvent, 2310, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
}
