/*
 * XREFs of ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008A788
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180086CC0 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180087684 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087BE8 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B6FDC (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1800C22FC (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1800C2368 (CortanaHelpers--SetWindowsHelloActive.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1800C23D4 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1800C94CC (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     ?AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9C70 (-AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9D70 (-WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x1800EACE0 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18014AD20 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
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
