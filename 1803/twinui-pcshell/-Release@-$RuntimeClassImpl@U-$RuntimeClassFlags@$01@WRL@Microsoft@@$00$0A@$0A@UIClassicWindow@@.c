/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180005BE0 (CClassicWindowManager--ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___ @ 0x180005DE4 (CClassicWindowManager--ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___.c)
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180005E98 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180006680 (-SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z.c)
 *     ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x1800067C0 (-UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800068C0 (-GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180007480 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180008F70 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 * Callees:
 *     ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x180007D60 (--_GCClassicWindow@@MEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int result; // eax
  CClassicWindow *v3; // r10
  unsigned int v4; // ebx
  void *(__fastcall *v5)(CClassicWindow *__hidden, unsigned int); // rax
  __int64 v6; // rdx
  void (*v7)(void); // rax

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  v4 = result;
  if ( !result )
  {
    if ( v3 )
    {
      v5 = *(void *(__fastcall **)(CClassicWindow *__hidden, unsigned int))(*(_QWORD *)v3 + 216LL);
      v6 = v4 + 1;
      if ( v5 == CClassicWindow::`scalar deleting destructor' )
        CClassicWindow::`scalar deleting destructor'(v3, v6);
      else
        v5(v3, v6);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v7 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v7 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        return v4;
      }
      v7();
    }
    return v4;
  }
  return result;
}
