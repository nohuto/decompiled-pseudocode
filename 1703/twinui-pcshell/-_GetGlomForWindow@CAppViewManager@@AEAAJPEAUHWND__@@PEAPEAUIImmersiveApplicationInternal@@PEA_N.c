/*
 * XREFs of ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800412E0
 * Callers:
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18003D840 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x18003F14C (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F5B4 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180040B88 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetGlomForWindow(
        CAppViewManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal **a3,
        bool *a4)
{
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  int v10; // ebx
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rax
  struct IImmersiveApplicationInternal *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  HWND v20; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v18 = 0LL;
  v7 = (__int64 *)*((_QWORD *)this + 14);
  v8 = *v7;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v18);
  v10 = (*(__int64 (__fastcall **)(__int64 *, HWND, GUID *, __int64 *))(v8 + 40))(
          v7,
          a2,
          &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
          v9);
  if ( v10 >= 0 )
  {
    v19 = 0LL;
    v11 = v18;
    v12 = *v18;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, __int64 *))(v12 + 352))(
            v11,
            1LL,
            &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
            v13);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v19 + 32LL))(v19, &v20);
      if ( v10 >= 0 )
      {
        *a4 = a2 == v20;
        v14 = (struct IImmersiveApplicationInternal *)v18;
        v18 = 0LL;
        *a3 = v14;
      }
    }
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v16 = (__int64)v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v10;
}
