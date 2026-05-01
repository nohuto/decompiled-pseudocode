/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$7 @ 0x1800B1B9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(*(CWinRTApplicationView ***)(a2 + 72));
}
