/*
 * XREFs of _FrameWrapper::SetHostedPos_::_1_::dtor$1 @ 0x180133E2D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FrameWrapper::SetHostedPos_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationViewPosition>::~ComPtr<IApplicationViewPosition>((__int64 *)(a2 + 40));
}
