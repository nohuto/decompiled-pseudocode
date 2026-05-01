/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18000E5B8
 * Callers:
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18000E590 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18000FED0 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 * Callees:
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000E790 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800192E4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_SetApplicationPos(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  IUnknown *v10; // rcx
  HRESULT First; // edi
  IUnknown *v12; // rbx
  void **v13; // rax
  int v14; // ecx
  PSRWLOCK v15; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v17; // rcx
  IUnknown *v18; // rcx
  int v20; // [rsp+20h] [rbp-50h]
  _QWORD v21[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  IUnknown *punk; // [rsp+A8h] [rbp+38h] BYREF

  v21[1] = -2LL;
  v10 = 0LL;
  punk = 0LL;
  v21[0] = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = punk;
  }
  if ( v10 )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
  }
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1, v21, &punk, 0LL);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( First >= 0 )
  {
    v21[0] = 0LL;
    v12 = punk;
    v13 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v21);
    First = IUnknown_GetSite(v12, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v13);
    if ( First < 0 )
      goto LABEL_18;
    v14 = 0;
    if ( (a4 & 0x30) != 0 )
    {
      v15 = CApplicationManagerUtility::g_pIAMGlobals;
      CurrentThreadId = GetCurrentThreadId();
      First = CurrentThreadId != LODWORD(v15[9].Ptr) ? 0x8001010E : 0;
      if ( LODWORD(v15[9].Ptr) != CurrentThreadId )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE84,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)First,
          v20);
      if ( First < 0 )
        goto LABEL_18;
      if ( (a4 & 0x30) == 0 || (((a4 & 0x30) - 1LL) & a4 & 0x30) != 0 )
      {
        First = -2147024809;
        goto LABEL_18;
      }
      v14 = (a4 & 0x10) != 0 ? 1 : 8;
      a4 &= 0xFFFFFFCF;
    }
    First = CApplicationManager::_SetViewPositionHelper(
              a1,
              0LL,
              a3,
              0LL,
              a4,
              *(_DWORD *)(a1 + 840),
              a5,
              0LL,
              a6,
              v14,
              a2,
              punk,
              v21[0]);
LABEL_18:
    v17 = v21[0];
    if ( v21[0] )
    {
      v21[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v18 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v18->lpVtbl->Release)(v18);
  }
  return (unsigned int)First;
}
