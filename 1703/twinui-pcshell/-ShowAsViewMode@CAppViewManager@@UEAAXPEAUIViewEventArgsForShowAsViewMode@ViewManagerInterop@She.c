/*
 * XREFs of ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003D650
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180043150 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___ @ 0x180043F2C (Microsoft--WRL--Callback_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAppViewManager::ShowAsViewMode(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2)
{
  CAppViewManager *v3; // rbx
  struct IAsyncCallback *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  CAppViewManager *v7; // [rsp+28h] [rbp-30h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v8; // [rsp+30h] [rbp-28h]
  struct IAsyncCallback *v9; // [rsp+60h] [rbp+8h] BYREF
  char *v10; // [rsp+68h] [rbp+10h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v11; // [rsp+70h] [rbp+18h]

  v3 = (CAppViewManager *)((char *)this - 24);
  v10 = (char *)this - 24;
  if ( this != (CAppViewManager *)24 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))((char *)this - 24);
  v11 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = v3;
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v3 + 8LL))(v3);
  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___(&v9, &v7);
  if ( v8 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 16LL))(v7);
  v4 = v9;
  v5 = CAppViewManager::_QueueOperation(v3, v9);
  v6 = (unsigned int)v5;
  if ( v5 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      (unsigned int)v5);
  if ( v4 )
    (*(void (__fastcall **)(struct IAsyncCallback *, __int64))(*(_QWORD *)v4 + 16LL))(v4, v6);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 16LL))(
      a2,
      v6);
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *, __int64))(*(_QWORD *)v3 + 16LL))(v3, v6);
}
