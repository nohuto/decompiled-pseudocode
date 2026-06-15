/*
 * XREFs of _lambda_d62dc145dcfedba70546eeba8120cc1b_::__lambda_d62dc145dcfedba70546eeba8120cc1b_ @ 0x1800A9FCC
 * Callers:
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a8f25a95310c8cd7d1346145f2777f26____::_1_::dtor$0 @ 0x1800A9D83 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800A9D83.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d62dc145dcfedba70546eeba8120cc1b____::_1_::dtor$0 @ 0x1800A9E03 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800A9E03.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d62dc145dcfedba70546eeba8120cc1b_::__lambda_d62dc145dcfedba70546eeba8120cc1b_(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
