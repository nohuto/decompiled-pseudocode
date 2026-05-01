/*
 * XREFs of ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1800DBFD8
 * Callers:
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB438 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB6D4 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180024D24 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_327db8a5b4a16058445ac484f290cbe9___ @ 0x1800DFD94 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_327db8a5b4a16058445ac484f290cbe9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_SendViewTransitionNotification(__int64 a1, __int64 a2, int a3)
{
  int CallbackArray; // eax
  struct IObjectArray *v7; // rdi
  __int64 v8; // rbx
  int v9; // esi
  IUnknown **v10; // rax
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  struct IObjectArray *v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+A0h] [rbp+30h] BYREF
  struct IObjectArray *v20; // [rsp+B8h] [rbp+48h] BYREF

  v15 = -2LL;
  v20 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 336), &v20);
  v7 = v20;
  if ( CallbackArray >= 0
    && ((int (__fastcall *)(struct IObjectArray *, int *))v20->lpVtbl->GetCount)(v20, &v19) >= 0
    && v19 )
  {
    if ( a1 )
      v8 = a1 + 96;
    else
      v8 = 0LL;
    v13[1] = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v14 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v16 = v7;
    ((void (__fastcall *)(struct IObjectArray *))v7->lpVtbl->AddRef)(v7);
    v17 = a2;
    v14 = 0LL;
    v18 = a3;
    v9 = *(_DWORD *)(a1 + 376);
    v10 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_327db8a5b4a16058445ac484f290cbe9___(
                         v13,
                         &v16);
    Windows::Internal::ComTaskPool::RunTask(0, 2u, v9, 0, *v10, 0LL);
    v11 = v13[0];
    if ( v13[0] )
    {
      v13[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v16 )
      ((void (__fastcall *)(struct IObjectArray *))v16->lpVtbl->Release)(v16);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 )
    ((void (__fastcall *)(struct IObjectArray *))v7->lpVtbl->Release)(v7);
  return 0LL;
}
