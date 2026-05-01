/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$1 @ 0x1800B1B78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 152));
}
