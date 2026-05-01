/*
 * XREFs of ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x18028C770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18030535C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

void __fastcall CMultitaskingViewControllerBase::CloseSwitchItem(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  _QWORD *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  CWinRTApplicationView *v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v4 = (**(__int64 (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         &v10);
  if ( v4 >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v5, 3u, v6);
    v7 = *((_QWORD *)this + 5);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v10 + 24LL))(v10, &v11);
    ApplicationViewHelpers::CloseView(*v8, v7, 7LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      116LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
