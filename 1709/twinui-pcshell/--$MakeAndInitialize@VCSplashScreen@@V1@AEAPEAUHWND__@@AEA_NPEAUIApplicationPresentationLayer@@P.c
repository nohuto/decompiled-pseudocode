/*
 * XREFs of ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18005E0D8
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180059F38 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x180071CA0 (--0CSplashScreen@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Z @ 0x180071E7C (-RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
        volatile signed __int64 **a1,
        HWND *a2,
        bool *a3,
        struct IApplicationPresentationLayer **a4,
        struct IInspectable **a5)
{
  volatile signed __int64 *v7; // rcx
  CSplashScreen *v10; // rax
  int v11; // esi
  volatile signed __int64 *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  v7 = *a1;
  if ( v7 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v7);
  }
  *a1 = 0LL;
  v10 = (CSplashScreen *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = (volatile signed __int64 *)CSplashScreen::CSplashScreen(v10);
    v11 = CSplashScreen::RuntimeClassInitialize((CSplashScreen *)v12, *a2, *a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      if ( v12 )
      {
        v13 = *((_QWORD *)v12 + 9);
        while ( v13 >= 0 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v12 + 9, v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_13;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
      }
LABEL_13:
      *a1 = v12;
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v12);
      return 0;
    }
    else if ( v12 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v12);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
