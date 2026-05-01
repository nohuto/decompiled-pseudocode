/*
 * XREFs of ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18007D820
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x18007D8B8 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall NotificationDispatcher::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile signed __int32 *v5; // rbx
  LONG_PTR v7; // [rsp+20h] [rbp-18h]

  if ( a2 != 1025 )
    return DefWindowProcW(a1, a2, a3, a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v5 = (volatile signed __int32 *)WindowLongPtrW;
  v7 = WindowLongPtrW;
  if ( WindowLongPtrW )
  {
    _InterlockedIncrement((volatile signed __int32 *)(WindowLongPtrW + 44));
    v5 = (volatile signed __int32 *)WindowLongPtrW;
  }
  if ( v5 )
  {
    NotificationDispatcher::DispatchNotifications((NotificationDispatcher *)v5);
    if ( _InterlockedExchangeAdd(v5 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
