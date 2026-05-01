/*
 * XREFs of ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x18009FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x18009044C (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18009052C (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8454 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?PurloinForeground@HolographicPositionerTelemetry@@SAXXZ @ 0x1801B4350 (-PurloinForeground@HolographicPositionerTelemetry@@SAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801B43C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicForegroundAssistant::PurloinForeground(HolographicForegroundAssistant *this)
{
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v2; // rdx
  enum Windows::Internal::Shell::Holographic::UserInputContext *v3; // rdx
  int UserDisplayContext; // ebx
  __int64 v5; // rdx
  bool v7; // si
  HWND ForegroundWindow; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  CWinRTApplicationView *v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v17; // [rsp+78h] [rbp+38h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF

  v15[1] = -2LL;
  HolographicPositionerTelemetry::PurloinForeground();
  v17 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v17,
                         v2);
  if ( UserDisplayContext < 0 )
  {
    v5 = 96LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicforegroundassistant.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  v18 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                         (Windows::Internal::Shell::Holographic *)&v18,
                         v3);
  if ( UserDisplayContext < 0 )
  {
    v5 = 99LL;
    goto LABEL_3;
  }
  if ( !v17 && !v18 )
  {
    v7 = 0;
    ForegroundWindow = GetForegroundWindow();
    v14 = 0LL;
    v9 = *((_QWORD *)this + 8);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
    if ( (*(int (__fastcall **)(__int64, HWND, CWinRTApplicationView **))(*(_QWORD *)v9 + 48LL))(
           v9,
           ForegroundWindow,
           &v14) >= 0 )
    {
      v13 = 0LL;
      v15[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v14, v15) >= 0 )
      {
        v10 = v15[0];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v13) >= 0 )
        {
          v19 = 0;
          v11 = v13;
          wil::Feature<__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp>::ReportUsageToService();
          if ( (*(int (__fastcall **)(__int64, const wchar_t *, int *))(*(_QWORD *)v11 + 88LL))(
                 v11,
                 L"Microsoft.Windows.HolographicFirstRun_cw5n1h2txyewy!App",
                 &v19) >= 0 )
            v7 = v19 != 0;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
    if ( !v7 )
    {
      UserDisplayContext = -2147024891;
      v5 = 125LL;
      goto LABEL_3;
    }
  }
  v12 = *((_QWORD *)this + 9);
  if ( !v12 )
  {
    UserDisplayContext = -2147467261;
    v5 = 129LL;
    goto LABEL_3;
  }
  UserDisplayContext = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  if ( UserDisplayContext < 0 )
  {
    v5 = 130LL;
    goto LABEL_3;
  }
  return 0LL;
}
