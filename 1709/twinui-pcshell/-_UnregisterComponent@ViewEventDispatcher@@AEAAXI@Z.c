/*
 * XREFs of ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1801209C0
 * Callers:
 *     ?UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x180120A80 (-UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?DisconnectComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x180120B20 (-DisconnectComponent@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180123FF4 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::_UnregisterComponent(ViewEventDispatcher *this, unsigned int a2)
{
  struct IViewWrapperInternal *v3; // rcx
  struct IViewWrapperInternal *v4; // [rsp+50h] [rbp+18h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF
  int v6; // [rsp+5Ch] [rbp+24h]

  v4 = 0LL;
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(this, a2, &v4) >= 0 )
  {
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v4 + 736LL))(v4, 0LL);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v4 + 760LL))(v4, 4LL);
    v5 = 0;
    v6 = 0;
    (*(void (__fastcall **)(struct IViewWrapperInternal *, int *))(*(_QWORD *)v4 + 768LL))(v4, &v5);
    ViewEventDispatcher::_HostChanged(this, v4);
  }
  v3 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
