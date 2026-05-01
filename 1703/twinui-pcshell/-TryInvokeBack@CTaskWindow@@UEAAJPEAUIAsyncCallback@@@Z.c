/*
 * XREFs of ?TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1800639C0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___ @ 0x180065044 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--ViewM.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::TryInvokeBack(CTaskWindow *this, struct IAsyncCallback *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct IAsyncCallback *v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *((_QWORD *)this + 6) == 0LL ? 0x80004001 : 0;
  if ( *((_QWORD *)this + 6) )
  {
    v5 = 0LL;
    v11 = 0LL;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = a2;
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (__int64 *)Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___(
                        &v9,
                        &v10);
      if ( &v11 != v6 )
      {
        v5 = *v6;
        *v6 = 0LL;
      }
      v11 = v5;
      v7 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( v10 )
        (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 400LL))(*((_QWORD *)this + 6), v5);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
