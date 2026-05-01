/*
 * XREFs of ??1RecoveredViewInfo@@QEAA@XZ @ 0x1800FAF60
 * Callers:
 *     _ViewWrapperBase::ApproveWinRtActivation_::_1_::dtor$3 @ 0x1800B4720 (_ViewWrapperBase--ApproveWinRtActivation_--_1_--dtor$3.c)
 *     _CreateWrapperForRecoveredView_::_1_::dtor$0 @ 0x1801CA37A (_CreateWrapperForRecoveredView_--_1_--dtor$0.c)
 *     _ViewManagerBridge::OnConnected_::_1_::dtor$3 @ 0x1801DD8AD (_ViewManagerBridge--OnConnected_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RecoveredViewInfo::~RecoveredViewInfo(CWinRTApplicationView **this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this);
}
