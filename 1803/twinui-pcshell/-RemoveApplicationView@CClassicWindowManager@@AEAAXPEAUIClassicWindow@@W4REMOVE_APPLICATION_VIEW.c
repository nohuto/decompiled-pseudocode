/*
 * XREFs of ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18011A904
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180006FE0 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___ @ 0x180119544 (CIAMGlobals--QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___.c)
 */

__int64 __fastcall CClassicWindowManager::RemoveApplicationView(__int64 a1, __int64 a2, int a3)
{
  PVOID v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
  v7 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v7);
  v8 = a3;
  CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___(v5, (__int64)&v7);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v7);
  return Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v9);
}
