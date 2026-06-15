/*
 * XREFs of ??1?$CAutoPtr@_N@ATL@@QEAA@XZ @ 0x1800E8DE0
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87____::_1_::dtor$1 @ 0x1800E7D8C (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994_ea_1800E7D8C.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<bool>::~CAutoPtr<bool>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)1);
  *a1 = 0LL;
}
