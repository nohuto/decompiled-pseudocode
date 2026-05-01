/*
 * XREFs of ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180089198 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089B5C (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CB29C (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1800D3E38 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1800D3EA4 (CortanaHelpers--SetWindowsHelloActive.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1800D3F10 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1800DC05C (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     ?AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DC8E0 (-AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DC9E0 (-WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x180114810 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18017FAE0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1801B2480 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1801B2530 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _RegSetKeyValue(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        DWORD a4,
        BYTE *lpData,
        DWORD cbData)
{
  HKEY v8; // rdi
  unsigned int v9; // ebx
  LSTATUS v10; // eax
  HKEY hKey; // [rsp+78h] [rbp+10h] BYREF

  v8 = a1;
  v9 = 0;
  if ( a2 && *a2 )
  {
    v10 = RegCreateKeyExW(a1, a2, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
    a1 = hKey;
    v9 = v10;
  }
  else
  {
    hKey = a1;
  }
  if ( !v9 )
  {
    v9 = RegSetValueExW(a1, a3, 0, a4, lpData, cbData);
    if ( hKey != v8 )
      RegCloseKey(hKey);
  }
  return v9;
}
