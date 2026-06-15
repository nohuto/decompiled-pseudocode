/*
 * XREFs of std::_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std::allocator_int__void_::_Delete_this @ 0x180095250
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std::allocator_int__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 (__fastcall *v5)(volatile signed __int32 *); // rax

  *a1 = off_1800F43F8;
  v4 = (volatile signed __int32 *)a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    v5 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v4);
    else
      v5(v4);
  }
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
