/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4
 * Callers:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180039780 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18004D6B4 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x180052794 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800539C0 (-GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180067DA4 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180085270 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800897F4 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18008A7FC (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008ACEC (-GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@.c)
 *     ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008DD10 (-SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Win.c)
 *     ?SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x18008FAF0 (-SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x18008FB60 (-SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1800E3DE0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1800E4590 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 *     ?GetIdentifier@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z @ 0x1800EE1F0 (-GetIdentifier@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z.c)
 *     ?GetTitle@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z @ 0x1800EE3F0 (-GetTitle@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800EF2A8 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?SetAppModelUserId@PWSLayoutItem@@UEAAJPEBG@Z @ 0x1800F1D60 (-SetAppModelUserId@PWSLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopLinkPath@PWSLayoutItem@@UEAAJPEBG@Z @ 0x1800F1DD0 (-SetDesktopLinkPath@PWSLayoutItem@@UEAAJPEBG@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x180114810 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180174720 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18019BE38 (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VStubImmersiveApplication@@@WRL@Microsoft@@@012@AEBQEAG@Z @ 0x1801B2784 (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJV-$ComPtrRe.c)
 *     ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x1801BFFFC (-GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Inte.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1801CA010 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1801CD710 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800399D4 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _WORD *v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx

  v3 = a3;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    if ( a3 == -1LL )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *(_WORD *)(a2 + 2 * v3) );
      v7 = v3;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(a2 + 2 * v8) );
      if ( a3 >= v8 )
      {
        do
          ++v7;
        while ( *(_WORD *)(a2 + 2 * v7) );
      }
      else
      {
        v7 = a3;
      }
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v3);
    if ( v6 >= 0 )
    {
      v9 = *(_WORD **)a1;
      v10 = v3 + 1;
      if ( (unsigned __int64)(v10 - 1) > 0x7FFFFFFE )
      {
        if ( !v10 )
        {
LABEL_23:
          *(_QWORD *)(a1 + 8) = v7;
          return (unsigned int)v6;
        }
      }
      else if ( v7 <= 0x7FFFFFFE )
      {
        v11 = v7 - v10;
        v12 = a2 - (_QWORD)v9;
        do
        {
          if ( !(v11 + v10) )
            break;
          v13 = *(_WORD *)((char *)v9 + v12);
          if ( !v13 )
            break;
          *v9++ = v13;
          --v10;
        }
        while ( v10 );
        v14 = v9 - 1;
        if ( v10 )
          v14 = v9;
        *v14 = 0;
        goto LABEL_23;
      }
      *v9 = 0;
      goto LABEL_23;
    }
  }
  else
  {
    v15 = *(_WORD **)a1;
    if ( v15 )
    {
      CoTaskMemFree(v15);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v6;
}
