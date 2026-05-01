/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView_::_1_::dtor$1 @ 0x1800F432E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 96));
}
