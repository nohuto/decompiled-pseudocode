/*
 * XREFs of ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18011A728
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18011ABB0 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___ @ 0x180119618 (CIAMGlobals--QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___.c)
 */

__int64 __fastcall RaiseApplicationViewChangeNotification(__int64 a1, int a2)
{
  PVOID v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v8);
  v6 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v6);
  v7 = a2;
  CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___(v4, (__int64)&v6);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v6);
  return Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v8);
}
