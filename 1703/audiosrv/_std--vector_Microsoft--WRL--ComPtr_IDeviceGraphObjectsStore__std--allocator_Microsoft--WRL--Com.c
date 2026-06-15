/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore_____::emplace_back_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__const_&___ptr64__::_1_::catch$73 @ 0x1800A81C1
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore_____::emplace_back_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__const_____ptr64__::_1_::catch_73(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v3 = (_QWORD *)a2[16];
  v4 = a2[17];
  v5 = v3[v4];
  if ( v5 )
  {
    v3[v4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
