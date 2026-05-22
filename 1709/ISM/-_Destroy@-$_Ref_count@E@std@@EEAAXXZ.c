/*
 * XREFs of ?_Destroy@?$_Ref_count@E@std@@EEAAXXZ @ 0x180029380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count<unsigned char>::_Destroy(__int64 a1)
{
  operator delete(*(void **)(a1 + 16));
}
