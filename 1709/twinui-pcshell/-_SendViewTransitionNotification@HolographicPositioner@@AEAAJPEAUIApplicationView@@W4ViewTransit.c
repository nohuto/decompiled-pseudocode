/*
 * XREFs of ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x180100950
 * Callers:
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFBF8 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFED0 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002564C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4262453b2a750cdf384f2747cf54dd98___ @ 0x180103C9C (Windows--Internal--ComTaskPool--QueueTask__lambda_4262453b2a750cdf384f2747cf54dd98___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_SendViewTransitionNotification(__int64 a1, __int64 a2, int a3)
{
  int CallbackArray; // eax
  struct IObjectArray *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct IObjectArray *v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+48h] [rbp-8h]
  int v15; // [rsp+80h] [rbp+30h] BYREF
  struct IObjectArray *v16; // [rsp+98h] [rbp+48h] BYREF

  v16 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 392), &v16);
  v7 = v16;
  if ( CallbackArray >= 0
    && ((int (__fastcall *)(struct IObjectArray *, int *))v16->lpVtbl->GetCount)(v16, &v15) >= 0
    && v15 )
  {
    if ( a1 )
      v8 = a1 + 120;
    else
      v8 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v12 = v7;
    ((void (__fastcall *)(struct IObjectArray *))v7->lpVtbl->AddRef)(v7);
    v13 = a2;
    v14 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_4262453b2a750cdf384f2747cf54dd98___(
      v10,
      v9,
      *(unsigned int *)(a1 + 432),
      &v12,
      v8,
      0LL,
      -2LL);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      ((void (__fastcall *)(struct IObjectArray *))v12->lpVtbl->Release)(v12);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 )
    ((void (__fastcall *)(struct IObjectArray *))v7->lpVtbl->Release)(v7);
  return 0LL;
}
