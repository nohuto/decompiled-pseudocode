/*
 * XREFs of ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1802B71E4
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1802B7324 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1802B73CC (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x1802B59F4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SizeConversionViewInfo::GetPositionerDataForView(
        SizeConversionViewInfo *this,
        struct IUnknown *a2,
        struct IApplicationView *a3)
{
  int v6; // ebx
  SizeConversionViewInfo *v8; // [rsp+28h] [rbp-20h] BYREF
  CWinRTApplicationView *v9[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CWinRTApplicationView *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a3;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v11);
  v8 = this;
  v9[0] = a3;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)v9);
  v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___(
         a2,
         (__int64)a3,
         (__int64)&v8);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  return (unsigned int)v6;
}
