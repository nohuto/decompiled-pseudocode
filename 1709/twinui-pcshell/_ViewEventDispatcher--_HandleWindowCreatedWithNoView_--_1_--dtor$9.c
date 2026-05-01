/*
 * XREFs of _ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor$9 @ 0x1801EEA45
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<LegacyViewWrapper>::~ComPtr<LegacyViewWrapper>((volatile signed __int64 **)(a2 + 64));
}
