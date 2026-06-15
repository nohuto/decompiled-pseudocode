/*
 * XREFs of std::_Func_impl_no_alloc__lambda_26d6b4fcc784cd5ce99dbb722cb42eb2__void_::_Delete_this @ 0x1800CB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_26d6b4fcc784cd5ce99dbb722cb42eb2__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
