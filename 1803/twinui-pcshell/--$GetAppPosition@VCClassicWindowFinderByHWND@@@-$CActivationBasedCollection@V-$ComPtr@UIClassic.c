/*
 * XREFs of ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x18000569C
 * Callers:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180006F2C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800F486C (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
        int a1,
        int a2,
        __int64 a3,
        int a4)
{
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  return CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
           a1 + 8,
           a2,
           (unsigned int)&v5,
           a4);
}
