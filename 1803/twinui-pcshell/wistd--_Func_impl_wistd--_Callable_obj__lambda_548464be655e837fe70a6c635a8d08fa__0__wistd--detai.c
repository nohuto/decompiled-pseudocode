/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180095700
 * Callers:
 *     ?OnMessage@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAJI_K_J@Z @ 0x1800956A0 (-OnMessage@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x180066C00 (-_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        unsigned int *a2,
        CortanaSharedExperienceManager **a3,
        __int64 *a4)
{
  __int64 v4; // rsi
  CortanaSharedExperienceManager *v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned int v8; // ebx
  CortanaSharedExperienceManager *v9; // rcx
  __int64 (__fastcall *v10)(CortanaSharedExperienceManager *, int, CortanaSharedExperienceManager *, int); // rax
  unsigned int v11; // eax
  struct IInspectable *v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a4;
  v5 = *a3;
  v6 = *a2;
  v7 = a1 + 8;
  v8 = 0;
  v13 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::Details::WeakReferenceImpl **)(a1 + 8), &v13) >= 0 )
  {
    v9 = (CortanaSharedExperienceManager *)(*(_QWORD *)(v7 + 8) + *(int *)(v7 + 24));
    v10 = *(__int64 (__fastcall **)(CortanaSharedExperienceManager *, int, CortanaSharedExperienceManager *, int))(v7 + 16);
    if ( v10 == CortanaSharedExperienceManager::_OnMessageHandler )
      v11 = CortanaSharedExperienceManager::_OnMessageHandler(v9, v6, v5, v4);
    else
      v11 = v10(v9, v6, v5, v4);
    v8 = v11;
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v13);
  return v8;
}
