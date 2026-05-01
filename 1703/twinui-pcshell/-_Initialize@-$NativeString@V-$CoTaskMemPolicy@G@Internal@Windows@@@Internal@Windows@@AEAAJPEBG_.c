/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114
 * Callers:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180037FD0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18004B1E4 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?GetLocalizedDisplayNameFromAppId@@YAJPEBGAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180050214 (-GetLocalizedDisplayNameFromAppId@@YAJPEBGAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windo.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x1800504E8 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800515E0 (-GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180065F64 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180082300 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180087328 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1800882C0 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800887C0 (-GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@.c)
 *     ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008B740 (-SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Win.c)
 *     ?SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x18008D4A0 (-SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x18008D510 (-SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2A9C (-RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800CC448 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?SetAppModelUserId@PWSLayoutItem@@UEAAJPEBG@Z @ 0x1800CEDE0 (-SetAppModelUserId@PWSLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopLinkPath@PWSLayoutItem@@UEAAJPEBG@Z @ 0x1800CEE50 (-SetDesktopLinkPath@PWSLayoutItem@@UEAAJPEBG@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1800EA6E4 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x1800EACE0 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 *     ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x18017489C (-GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Inte.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18017FD70 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800381D8 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18003923C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int16 *v9; // rcx

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
      while ( a2[v3] );
      v7 = v3;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      if ( a3 >= v8 )
      {
        do
          ++v7;
        while ( a2[v7] );
      }
      else
      {
        v7 = a3;
      }
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v3);
    if ( v6 >= 0 )
    {
      StringCchCopyNW(*(unsigned __int16 **)a1, v3 + 1, a2, v7);
      *(_QWORD *)(a1 + 8) = v7;
    }
  }
  else
  {
    v9 = *(unsigned __int16 **)a1;
    if ( v9 )
    {
      CoTaskMemFree(v9);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v6;
}
