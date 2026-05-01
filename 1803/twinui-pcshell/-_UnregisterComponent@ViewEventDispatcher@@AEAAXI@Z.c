/*
 * XREFs of ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1800347FC
 * Callers:
 *     ?UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x180034760 (-UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?DisconnectComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x1801CA480 (-DisconnectComponent@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::_UnregisterComponent(ViewEventDispatcher *this, int a2)
{
  struct IViewWrapperInternal *v4; // [rsp+50h] [rbp+18h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF
  int v6; // [rsp+5Ch] [rbp+24h]

  v4 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v4);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(this, a2, &v4) >= 0 )
  {
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v4 + 768LL))(v4, 0LL);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v4 + 792LL))(v4, 4LL);
    v5 = 0;
    v6 = 0;
    (*(void (__fastcall **)(struct IViewWrapperInternal *, int *))(*(_QWORD *)v4 + 800LL))(v4, &v5);
    ViewEventDispatcher::_HostChanged(this, v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v4);
}
