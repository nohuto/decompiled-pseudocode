/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@XZ @ 0x18014F8C8
 * Callers:
 *     _HolographicPositioner::ControlGained_::_1_::dtor$1 @ 0x1801ADB1B (_HolographicPositioner--ControlGained_--_1_--dtor$1.c)
 *     _HolographicPositioner::ControlGained_::_1_::dtor$2 @ 0x1801ADB27 (_HolographicPositioner--ControlGained_--_1_--dtor$2.c)
 *     _HolographicPositioner::ControlLost_::_1_::dtor$1 @ 0x1801AE08D (_HolographicPositioner--ControlLost_--_1_--dtor$1.c)
 *     _HolographicPositioner::ControlLost_::_1_::dtor$2 @ 0x1801AE099 (_HolographicPositioner--ControlLost_--_1_--dtor$2.c)
 *     _HolographicPositioner::GetLastActiveItem_::_1_::dtor$4 @ 0x1801AEB28 (_HolographicPositioner--GetLastActiveItem_--_1_--dtor$4.c)
 *     _HolographicPositioner::GetLastActiveItem_::_1_::dtor$5 @ 0x1801AEB34 (_HolographicPositioner--GetLastActiveItem_--_1_--dtor$5.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$2 @ 0x1802368C0 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$2.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$3 @ 0x1802368CC (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$3.c)
 *     _SizeConversionViewInfo::GetPositionerDataForView_::_1_::dtor$1 @ 0x1802B728D (_SizeConversionViewInfo--GetPositionerDataForView_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ObjectArrayAdapter<IApplicationView>::Iterator::~Iterator(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)(a1 + 8));
}
