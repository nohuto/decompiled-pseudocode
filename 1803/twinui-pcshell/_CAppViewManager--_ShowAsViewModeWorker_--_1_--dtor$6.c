/*
 * XREFs of _CAppViewManager::_ShowAsViewModeWorker_::_1_::dtor$6 @ 0x1801278C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_ShowAsViewModeWorker_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 80));
}
