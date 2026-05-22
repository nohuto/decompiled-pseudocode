/*
 * XREFs of _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$0 @ 0x1800E80D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AnimationDataProvider::AnimationDataProvider_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::~ComPtr<AnimationDataProviderConnection>(*(_QWORD **)(a2 + 128));
}
