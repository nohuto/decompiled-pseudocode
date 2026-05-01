/*
 * XREFs of ??1?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F90E8
 * Callers:
 *     _CAppViewManager::_QueueOperation_::_1_::dtor$2 @ 0x1800B0F18 (_CAppViewManager--_QueueOperation_--_1_--dtor$2.c)
 *     _CAppViewManager::_QueueOperation_::_1_::dtor$3 @ 0x1800B0F24 (_CAppViewManager--_QueueOperation_--_1_--dtor$3.c)
 *     _CAppViewManager::ShowAsStandalone_::_1_::dtor$0 @ 0x1800B11AC (_CAppViewManager--ShowAsStandalone_--_1_--dtor$0.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$1 @ 0x18011EC02 (_CAppViewManager--ConsolidateView_--_1_--dtor$1.c)
 *     _CAppViewManager::PrepareToSwitch_::_1_::dtor$0 @ 0x18012157D (_CAppViewManager--PrepareToSwitch_--_1_--dtor$0.c)
 *     _CAppViewManager::ShowAsViewMode_::_1_::dtor$0 @ 0x180121A1C (_CAppViewManager--ShowAsViewMode_--_1_--dtor$0.c)
 *     _CAppViewManager::ShowView_::_1_::dtor$0 @ 0x180121B33 (_CAppViewManager--ShowView_--_1_--dtor$0.c)
 *     _CAppViewManager::Switch_::_1_::dtor$0 @ 0x180125549 (_CAppViewManager--Switch_--_1_--dtor$0.c)
 *     _CAppViewManager::SwitchViews_::_1_::dtor$0 @ 0x18012566D (_CAppViewManager--SwitchViews_--_1_--dtor$0.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180125720 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$2 @ 0x180127BE9 (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CAppViewManager>::~ComPtr<CAppViewManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(a1);
}
