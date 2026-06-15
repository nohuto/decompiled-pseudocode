/*
 * XREFs of std::_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std::allocator_int__void_::_Delete_this @ 0x1800A7530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std::allocator_int__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  *a1 = off_1800DE2C0;
  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
