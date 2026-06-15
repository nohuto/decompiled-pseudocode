/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_c1574d5d7a8b6f670ac925b0b327d44d__void_ @ 0x180091928
 * Callers:
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800945F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_c1574d5d7a8b6f670ac925b0b327d44d__void_(
        _QWORD *a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rcx
  volatile signed __int32 *v4; // rcx
  void (*v5)(void); // rax

  a1[7] = 0LL;
  *a1 = off_1800F4398;
  v3 = (volatile signed __int32 **)(a1 + 1);
  *v3 = 0LL;
  if ( v3 != a2 )
  {
    *v3 = *a2;
    *a2 = 0LL;
  }
  a1[7] = a1;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v4);
    else
      v5();
  }
  return a1;
}
