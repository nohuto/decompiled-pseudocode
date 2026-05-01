/*
 * XREFs of ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1802876F8
 * Callers:
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x18028DD7C (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchItemTelemetry::ExtractAppId(
        SwitchItemTelemetry *this,
        struct ISwitchItem *a2,
        unsigned __int16 **a3)
{
  int v5; // eax
  int v6; // ebx
  _QWORD *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  CWinRTApplicationView *v10; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+48h] [rbp+28h] BYREF
  CWinRTApplicationView *v12; // [rsp+50h] [rbp+30h] BYREF

  *(_QWORD *)a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v5 = (**(__int64 (__fastcall ***)(SwitchItemTelemetry *, GUID *, __int64 *))this)(
         this,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v10 = 0LL;
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v11 + 24LL))(v11, &v12);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
    v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, CWinRTApplicationView **))*v7)(
           *v7,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v10);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, struct ISwitchItem *))(*(_QWORD *)v10 + 136LL))(v10, a2);
      if ( v6 >= 0 )
        v6 = 0;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemtelemetry.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v6;
}
