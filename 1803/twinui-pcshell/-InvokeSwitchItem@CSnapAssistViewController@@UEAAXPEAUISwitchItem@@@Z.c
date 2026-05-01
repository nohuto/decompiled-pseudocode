/*
 * XREFs of ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x180284AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x180284DAC (-_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x18028DD7C (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 */

void __fastcall CSnapAssistViewController::InvokeSwitchItem(CSnapAssistViewController *this, struct ISwitchItem *a2)
{
  struct IApplicationView **v4; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  CWinRTApplicationView *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  if ( (**(int (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         &v5) >= 0 )
  {
    v4 = (struct IApplicationView **)(*(__int64 (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v5 + 24LL))(
                                       v5,
                                       &v6);
    CSnapAssistViewController::_OnItemInvoked((CSnapAssistViewController *)((char *)this - 16), *v4);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v6);
    ViewHostTelemetry::SendAppSwitchTelemetry(a2, 7LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
