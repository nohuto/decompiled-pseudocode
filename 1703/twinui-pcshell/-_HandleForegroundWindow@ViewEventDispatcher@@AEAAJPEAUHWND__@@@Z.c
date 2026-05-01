/*
 * XREFs of ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F819C
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x1800F4FC0 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4FRAMED_VIEW_FLAGS@@@Z @ 0x180116DD0 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4FRAMED_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x1800F8390 (-_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleForegroundWindow(
        struct IViewWrapperInternal **this,
        struct IViewWrapperInternal *a2)
{
  __int64 v4; // rdx
  struct IViewWrapperInternal *v5; // rcx
  struct IViewWrapperInternal *v6; // rcx
  struct IViewWrapperInternal *v7; // r8
  struct IViewWrapperInternal *v8; // rsi
  struct IViewWrapperInternal *v9; // rcx
  struct IViewWrapperInternal *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    ViewEventDispatcher::_ViewFromFrameOrWindow((ViewEventDispatcher *)this, (HWND)a2, &v11);
  }
  v6 = this[31];
  v7 = v11;
  if ( v6 != v11 )
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v6 + 720LL))(v6, 0LL);
      v7 = v11;
    }
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v7 + 720LL))(v7, 1LL);
      v7 = v11;
    }
  }
  if ( this[31] != v7 )
  {
    v8 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = v11;
    }
    v9 = this[31];
    this[31] = v8;
    if ( v9 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64, struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(
        v9,
        v4,
        v7);
      v7 = v11;
    }
  }
  this[30] = a2;
  if ( v7 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
