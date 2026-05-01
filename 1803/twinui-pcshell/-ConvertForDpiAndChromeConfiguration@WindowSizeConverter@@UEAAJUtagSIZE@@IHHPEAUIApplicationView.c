/*
 * XREFs of ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1802B6350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x1802B6B30 (-GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForDpiAndChromeConfiguration(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagSIZE *a7)
{
  int MonitorForDpi; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IImmersiveMonitor *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  MonitorForDpi = WindowSizeConverter::GetMonitorForDpi((WindowSizeConverter *)((char *)this - 88), a3, &v16);
  v12 = MonitorForDpi;
  if ( MonitorForDpi >= 0 )
  {
    MonitorForDpi = (*(__int64 (__fastcall **)(WindowSizeConverter *, struct tagSIZE, struct IImmersiveMonitor *, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, struct tagSIZE *))(*(_QWORD *)this + 48LL))(
                      this,
                      a2,
                      v16,
                      a4,
                      a5,
                      a6,
                      a7);
    v12 = MonitorForDpi;
    if ( MonitorForDpi >= 0 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    v13 = 331LL;
  }
  else
  {
    v13 = 330LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)MonitorForDpi);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  return v12;
}
