/*
 * XREFs of _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x180095F59
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::GetPeakValue_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)(a2 + 104));
}
