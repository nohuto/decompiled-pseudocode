/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_::_Delete_this @ 0x1800CB300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x18uLL);
}
