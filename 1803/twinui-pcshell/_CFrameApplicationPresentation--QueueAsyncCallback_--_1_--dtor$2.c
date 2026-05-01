/*
 * XREFs of _CFrameApplicationPresentation::QueueAsyncCallback_::_1_::dtor$2 @ 0x1800B159C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::QueueAsyncCallback_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>(*(_QWORD *)(a2 + 144));
}
