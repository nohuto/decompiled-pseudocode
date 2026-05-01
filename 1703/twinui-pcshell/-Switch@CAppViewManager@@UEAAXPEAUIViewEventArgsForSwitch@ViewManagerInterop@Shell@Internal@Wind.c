/*
 * XREFs of ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003D520
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180043150 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70__&___ptr64_ @ 0x180043EF0 (Microsoft--WRL--Callback_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::Switch(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *a2)
{
  CAppViewManager *v3; // rbx
  struct IAsyncCallback *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF
  struct IAsyncCallback *v8; // [rsp+60h] [rbp+8h] BYREF
  char *v9; // [rsp+68h] [rbp+10h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *v10; // [rsp+70h] [rbp+18h]

  v3 = (CAppViewManager *)((char *)this - 24);
  v9 = (char *)this - 24;
  if ( this != (CAppViewManager *)24 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))((char *)this - 24);
  v10 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *))(*(_QWORD *)a2 + 8LL))(a2);
  v7[0] = v3;
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v3 + 8LL))(v3);
  v7[1] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *))(*(_QWORD *)a2 + 8LL))(a2);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70______ptr64_(&v8, v7);
  v4 = v8;
  v5 = CAppViewManager::_QueueOperation(v3, v8);
  v6 = (unsigned int)v5;
  if ( v5 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, _QWORD))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)v5);
  if ( v4 )
    (*(void (__fastcall **)(struct IAsyncCallback *, __int64))(*(_QWORD *)v4 + 16LL))(v4, v6);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, __int64))(*(_QWORD *)a2 + 16LL))(
      a2,
      v6);
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *, __int64))(*(_QWORD *)v3 + 16LL))(v3, v6);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, __int64))(*(_QWORD *)a2 + 16LL))(
      a2,
      v6);
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *, __int64))(*(_QWORD *)v3 + 16LL))(v3, v6);
}
