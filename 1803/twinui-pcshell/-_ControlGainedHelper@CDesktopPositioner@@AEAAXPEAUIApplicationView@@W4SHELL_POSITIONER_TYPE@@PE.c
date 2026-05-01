/*
 * XREFs of ?_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1802C0ADC
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180021C40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802BEF00 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022050 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ConfigureChromeForOperation @ 0x180089368 (ConfigureChromeForOperation.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E830 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     wil::ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87___ @ 0x1802BE548 (wil--ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 CDesktopPositioner::_ControlGainedHelper(__int64 a1, struct IApplicationView *a2, int a3, ...)
{
  const char *v4; // r9
  IUnknown *v5; // rcx
  ApplicationViewOperation *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  ApplicationViewOperation *v10; // rcx
  int v11; // [rsp+20h] [rbp-50h] BYREF
  ApplicationViewOperation *v12; // [rsp+28h] [rbp-48h] BYREF
  struct IApplicationViewTitlebarConfiguration *v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h]
  ApplicationViewOperation **v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct IApplicationView *v18; // [rsp+88h] [rbp+18h] BYREF
  int v19; // [rsp+90h] [rbp+20h] BYREF
  __int64 v20; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  va_list va1; // [rsp+A0h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v19 = a3;
  v18 = a2;
  v13[1] = (struct IApplicationViewTitlebarConfiguration *)-2LL;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>((__int64 *)&v12);
  if ( !v12 )
    wil::details::in1diag3::_Log_NullAlloc(
      retaddr,
      1977LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      v4);
  v13[0] = 0LL;
  if ( v12 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
    if ( (int)CDesktopPositioner::_CreateTitlebarConfiguration(v5, v18, v13) >= 0 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v12 + 22, (__int64)v13[0]);
      ConfigureChromeForOperation(v12);
      memset_0(v14, 0, 0x28uLL);
      v15 = 0uLL;
      LODWORD(v16) = 3;
      v6 = v12;
      *((_OWORD *)v12 + 8) = 0LL;
      *((_OWORD *)v6 + 9) = v15;
      *((_QWORD *)v6 + 20) = v16;
      *((_BYTE *)v6 + 124) = 1;
      if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v18 + 216LL))(v18, &v11) >= 0 && v11 )
      {
        wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v7, 0, v8);
        *((_WORD *)v12 + 56) = 257;
      }
      v14[0] = a1;
      v14[1] = &v18;
      va_copy((va_list)v15, va);
      *((_QWORD *)&v15 + 1) = &v19;
      v16 = &v12;
      wil::ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87___((__int64)v14);
      (*(void (__fastcall **)(struct IApplicationView *, ApplicationViewOperation *))(*(_QWORD *)v18 + 320LL))(v18, v12);
    }
  }
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release((__int64)v10);
  }
  return result;
}
