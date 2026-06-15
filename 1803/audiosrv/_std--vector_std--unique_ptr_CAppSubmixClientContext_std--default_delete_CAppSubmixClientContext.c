/*
 * XREFs of _std::vector_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext_______::emplace_back_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext______::_1_::catch$102 @ 0x1800D6136
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 *     ??_GCAppSubmixClientContext@@QEAAPEAXI@Z @ 0x1800D65BC (--_GCAppSubmixClientContext@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext_______::emplace_back_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext______::_1_::catch_102(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx
  CAppSubmixClientContext *v4; // rcx

  v3 = (_QWORD *)a2[16];
  v4 = (CAppSubmixClientContext *)v3[a2[17]];
  if ( v4 )
    CAppSubmixClientContext::`scalar deleting destructor'(v4, (unsigned int)a2);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
