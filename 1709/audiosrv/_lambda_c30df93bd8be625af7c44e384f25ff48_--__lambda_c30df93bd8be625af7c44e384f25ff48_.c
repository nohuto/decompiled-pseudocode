/*
 * XREFs of _lambda_c30df93bd8be625af7c44e384f25ff48_::__lambda_c30df93bd8be625af7c44e384f25ff48_ @ 0x180098890
 * Callers:
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1122b30b9c622c6c9bea198871386fcb____::_1_::dtor$0 @ 0x18009827A (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c30df93bd8be625af7c44e384f25ff48____::_1_::dtor$0 @ 0x18009866A (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18009866A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c30df93bd8be625af7c44e384f25ff48_::__lambda_c30df93bd8be625af7c44e384f25ff48_(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
