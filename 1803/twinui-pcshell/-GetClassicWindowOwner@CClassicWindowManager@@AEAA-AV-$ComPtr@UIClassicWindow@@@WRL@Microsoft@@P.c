/*
 * XREFs of ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180006F2C
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___ @ 0x180005DE4 (CClassicWindowManager--ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1800F48F8 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x18000569C (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119AF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_QWORD *__fastcall CClassicWindowManager::GetClassicWindowOwner(__int64 a1, _QWORD *a2, HWND a3)
{
  HWND i; // rcx
  HWND Window; // rax
  HWND v8; // rbx
  __int64 v9; // r8
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  HWND v14; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0LL;
  for ( i = a3; ; i = v8 )
  {
    Window = GetWindow(i, 4u);
    v8 = Window;
    if ( !Window || Window == a3 || *a2 )
      break;
    if ( IsWindowVisible(Window) )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v13);
      v13 = 0LL;
      v14 = v8;
      if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                  (int)a1 + 184,
                  (int)&v14,
                  v9,
                  (int)&v12) >= 0 )
      {
        v11 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 192) + 8 * v12);
        if ( (**v11)(v11, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v13) >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 128LL))(v13) )
            Microsoft::WRL::ComPtr<IClassicWindow>::operator=(a2, &v13);
        }
      }
      Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v13);
    }
  }
  return a2;
}
