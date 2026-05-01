/*
 * XREFs of ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180006E64
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_2dd20bac4e5d2f5df658143d4108a795___ @ 0x18000F430 (CIAMGlobals--QueueViewManagementTask__lambda_2dd20bac4e5d2f5df658143d4108a795___.c)
 */

void __fastcall CClassicWindowManager::AddApplicationView(CClassicWindowManager *this, struct IClassicWindow *a2)
{
  __int64 v3; // rcx
  CClassicWindowManager *v4; // [rsp+30h] [rbp+8h] BYREF
  struct IClassicWindow *v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = this;
  v5 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v5);
  v4 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v4);
  CIAMGlobals::QueueViewManagementTask__lambda_2dd20bac4e5d2f5df658143d4108a795___(v3, &v4);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v4);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v5);
}
