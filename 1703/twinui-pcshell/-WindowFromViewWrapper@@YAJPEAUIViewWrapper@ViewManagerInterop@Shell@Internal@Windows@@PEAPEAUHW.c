/*
 * XREFs of ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18003C980
 * Callers:
 *     _lambda_2e7b32d2edc288bf881b316e628c52db_::operator() @ 0x18003D170 (_lambda_2e7b32d2edc288bf881b316e628c52db_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800405FC (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70__&___ptr64_1__1_::Invoke @ 0x180044E30 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70__-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowFromViewWrapper(
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a1,
        HWND *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a1)(
         a1,
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v7);
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v6);
    if ( v3 >= 0 )
      *a2 = (HWND)v6;
  }
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)v3;
}
