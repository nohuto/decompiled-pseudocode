/*
 * XREFs of ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x1802B6440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x1802B6B30 (-GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForDpiAndView(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        unsigned int a3,
        struct IApplicationView *a4,
        struct tagSIZE *a5)
{
  int MonitorForDpi; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v14);
  MonitorForDpi = WindowSizeConverter::GetMonitorForDpi((WindowSizeConverter *)((char *)this - 88), a3, &v14);
  v10 = MonitorForDpi;
  if ( MonitorForDpi >= 0 )
  {
    MonitorForDpi = (*(__int64 (__fastcall **)(WindowSizeConverter *, struct tagSIZE, struct IImmersiveMonitor *, struct IApplicationView *, struct tagSIZE *))(*(_QWORD *)this + 32LL))(
                      this,
                      a2,
                      v14,
                      a4,
                      a5);
    v10 = MonitorForDpi;
    if ( MonitorForDpi >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v11 = 301LL;
  }
  else
  {
    v11 = 300LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)MonitorForDpi);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v14);
  return v10;
}
