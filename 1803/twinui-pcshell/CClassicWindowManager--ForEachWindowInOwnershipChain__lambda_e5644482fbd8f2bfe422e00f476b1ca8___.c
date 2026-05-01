/*
 * XREFs of CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180005E98
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180007480 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180005508 (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180005BE0 (CClassicWindowManager--ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180007BF4 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180007E70 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  CClassicWindow *v5; // rbx
  bool (__fastcall *v6)(CClassicWindow *__hidden); // rax
  void (__fastcall *v8)(CClassicWindow *); // rax
  CClassicWindow *v10; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h]
  _QWORD *v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF
  CClassicWindow *v17; // [rsp+A8h] [rbp+38h] BYREF

  v16 = a3;
  v11[1] = -2LL;
  CClassicWindowManager::GetRootOwner(a1, &v17, a2);
  v4 = lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(&v16, &v17);
  v5 = v17;
  if ( v4 )
  {
    v6 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v17 + 128LL);
    if ( v6 == CClassicWindow::ShouldShowInSwitchers ? CClassicWindow::ShouldShowInSwitchers(v17) : v6(v17) )
    {
      v11[0] = &v16;
      v10 = v5;
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = &v10;
      v13 = v11;
      v14 = v12;
      v15 = v11;
      v4 = CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___(a1, (__int64)&v14);
    }
  }
  if ( v5 )
  {
    v8 = *(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v5);
    else
      v8(v5);
  }
  return v4;
}
