/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70__&___ptr64_1__1_::Invoke @ 0x180044E30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18003C980 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180040140 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCall.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_178a6b1a2555130ff361828fdaa91009__&___ptr64_ @ 0x180043EB4 (Microsoft--WRL--Callback_IAsyncCallback__lambda_178a6b1a2555130ff361828fdaa91009__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70______ptr64_1__1_::Invoke(
        __int64 a1)
{
  HWND v2; // r12
  __int64 v3; // rcx
  int v4; // esi
  int v5; // eax
  __int64 v6; // rcx
  HWND v7; // r15
  int v8; // eax
  HWND v9; // rbx
  struct IAsyncCallback *v10; // rdi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  HWND v15; // [rsp+38h] [rbp-18h] BYREF
  struct IAsyncCallback *v16; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+40h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v18; // [rsp+A0h] [rbp+50h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v19; // [rsp+A8h] [rbp+58h] BYREF

  v18 = 0LL;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v3 + 48LL))(
         v3,
         &v18);
  if ( v4 >= 0 )
  {
    v14 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v18)(
           v18,
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           &v14);
    if ( v4 >= 0 )
    {
      v5 = WindowFromViewWrapper(v18, &v15);
      v2 = v15;
      v4 = v5;
    }
    v6 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v19 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(**(_QWORD **)(a1 + 24) + 56LL))(
           *(_QWORD *)(a1 + 24),
           &v19);
    if ( v4 >= 0 )
    {
      v8 = WindowFromViewWrapper(v19, &v15);
      v7 = v15;
      v4 = v8;
    }
  }
  v17 = 0;
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 64LL))(
               *(_QWORD *)(a1 + 24),
               &v17),
        v4 < 0) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24), (unsigned int)v4);
  }
  else
  {
    v9 = *(HWND *)(a1 + 24);
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v9 + 8LL))(v9);
    Microsoft::WRL::Callback_IAsyncCallback__lambda_178a6b1a2555130ff361828fdaa91009______ptr64_(&v16);
    v10 = v16;
    v4 = CAppViewManager::_SwitchAsyncWorker(*(CAppViewManager **)(a1 + 16), (__int64)v2, (__int64)v7, v17, v16);
    if ( v10 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v11 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v4 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v4);
  return (unsigned int)v4;
}
