/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180036C18
 * Callers:
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180036D70 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180036D80 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180037340 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1800389C4 (-_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180039350 (-RemoveApplication@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEA.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180039B0C (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CClassicWindowManager::_HandleDestructionOrHide(CClassicWindowManager *a1, HWND a2, int a3)
{
  int ClassicWindow; // eax
  __int64 v7; // r8
  bool v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  int App; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  struct IClassicWindow *v14; // rcx
  unsigned __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-18h] BYREF
  struct IClassicWindow *v18; // [rsp+78h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v18 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(a1, a2, &v18, &v16);
  v8 = ClassicWindow >= 0;
  if ( ClassicWindow < 0 )
  {
    if ( a3 == 1 )
    {
      v17[0] = a2;
      App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
              (char *)a1 + 232,
              v17,
              v7,
              &v16);
      v8 = App >= 0;
      if ( App >= 0 )
      {
        v13 = v16;
        CClassicWindowManager::RemoveApplicationView(v12, *(_QWORD *)(*((_QWORD *)a1 + 30) + 8 * v16), 0LL);
        CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication((char *)a1 + 232, v13);
      }
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v18 + 136LL))(v18) )
      CClassicWindowManager::_HandleOwnerBecameDestroyed(a1, v18);
    if ( a3
      || (*(int (__fastcall **)(_QWORD *, struct IClassicWindow **))(*((_QWORD *)a1 + 29) + 8LL))(
           (_QWORD *)a1 + 29,
           &v18) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*((_QWORD *)a1 + 24) + 16LL))((_QWORD *)a1 + 24, v16);
      v10 = 0LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*((_QWORD *)a1 + 24) + 16LL))((_QWORD *)a1 + 24, v16);
      v10 = 1LL;
    }
    CClassicWindowManager::RemoveApplicationView(v9, v18, v10);
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v8;
}
