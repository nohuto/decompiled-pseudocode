/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18000E258
 * Callers:
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18000E230 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18000F980 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 * Callees:
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000E428 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018100 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  HRESULT First; // ebx
  IUnknown *v12; // rbx
  void **v13; // rax
  int v14; // ecx
  PSRWLOCK v15; // rbx
  __int64 v16; // rcx
  IUnknown *v17; // rcx
  int v19; // [rsp+20h] [rbp-50h]
  _QWORD v20[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  IUnknown *punk; // [rsp+98h] [rbp+28h] BYREF

  v20[1] = -2LL;
  v10 = 0LL;
  punk = 0LL;
  v20[0] = a2;
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
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1, v20, &punk, 0LL);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( First >= 0 )
  {
    v20[0] = 0LL;
    v12 = punk;
    v13 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v20);
    First = IUnknown_GetSite(v12, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v13);
    if ( First < 0 )
      goto LABEL_17;
    v14 = 0;
    if ( (a4 & 0x30) != 0 )
    {
      v15 = CApplicationManagerUtility::g_pIAMGlobals;
      First = GetCurrentThreadId() != LODWORD(v15[9].Ptr) ? 0x8001010E : 0;
      if ( First < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE23,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)First,
          v19);
        goto LABEL_17;
      }
      if ( (a4 & 0x30) == 0 || (((a4 & 0x30) - 1LL) & a4 & 0x30) != 0 )
      {
        First = -2147024809;
        goto LABEL_17;
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
              *(_DWORD *)(a1 + 760),
              a5,
              0LL,
              a6,
              v14,
              a2,
              punk,
              v20[0]);
LABEL_17:
    v16 = v20[0];
    if ( v20[0] )
    {
      v20[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v17->lpVtbl->Release)(v17);
  }
  return (unsigned int)First;
}
