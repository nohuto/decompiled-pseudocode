/*
 * XREFs of ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180009300 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180009E60 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x18000A4A0 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C570 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x18000C850 (-ForgetAllApplications@CApplicationManager@@UEAAXXZ.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CFC0 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18000DEE0 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180014284 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x180015364 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x180006AAC (WPP_SF_S.c)
 *     WPP_SF_qSdL @ 0x180006C78 (WPP_SF_qSdL.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007070 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180011630 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?DeleteItem@?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x1800164D0 (-DeleteItem@-$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEA.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018100 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByAppId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@_KPEA_K@Z @ 0x1800193C4 (--$GetAppPosition@VCImmersiveAppFinderByAppId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmersi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
signed int __fastcall CApplicationManager::_ForgetApplicationNoLock(__int64 a1, IUnknown *a2, unsigned int a3)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  void **v9; // rax
  __int64 *v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  signed int result; // eax
  const wchar_t *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  IUnknown v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // r15d
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 i; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  char v30[8]; // [rsp+28h] [rbp-28h]
  char v31[4]; // [rsp+30h] [rbp-20h]
  unsigned __int64 v32[2]; // [rsp+40h] [rbp-10h] BYREF
  char v33; // [rsp+80h] [rbp+30h] BYREF
  __int64 v34; // [rsp+88h] [rbp+38h] BYREF
  __int64 *v35; // [rsp+98h] [rbp+48h] BYREF

  v32[1] = -2LL;
  ((void (__fastcall *)(IUnknown *, _QWORD, char *))a2->lpVtbl[6].AddRef)(a2, a3, &v33);
  v34 = 0LL;
  lpVtbl = a2->lpVtbl;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
  ((void (__fastcall *)(IUnknown *, GUID *, __int64))lpVtbl->QueryInterface)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    v7);
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1, &v34, 0LL, v32);
  v8 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CActivationBasedAppAndGlomCollection::RemoveApplication((CActivationBasedAppAndGlomCollection *)(a1 + 560), v32[0]);
  v35 = 0LL;
  v9 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v35);
  if ( IUnknown_GetSite(a2, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v9) >= 0 )
    (*(void (__fastcall **)(__int64 *, IUnknown *, _QWORD, _QWORD, int, _QWORD))(*v35 + 48))(v35, a2, 0LL, 0LL, 6, 0LL);
  v10 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[6].Release)(a2);
    v12 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
    *(_DWORD *)v31 = a3;
    *(_DWORD *)v30 = v11;
    WPP_SF_qSdL(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, a2, v12, *(_QWORD *)v30, *(_DWORD *)v31);
  }
  v34 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
  result = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByAppId>(
             a1 + 560,
             &v34,
             v15,
             &v35);
  if ( result < 0 )
  {
    v34 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
    CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>::DeleteItem(a1 + 800, &v34);
    result = (int)WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v17 = (const wchar_t *)((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
      result = WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v18, v19, v17);
    }
  }
  if ( v33 )
  {
    v34 = (__int64)a2;
    ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 640) + 8LL))(a1 + 640, &v34);
    v20 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v35 = 0LL;
    v21.lpVtbl = a2->lpVtbl;
    v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v35);
    result = ((__int64 (__fastcall *)(IUnknown *, __int64, GUID *, __int64))v21.lpVtbl[14].Release)(
               a2,
               1LL,
               &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
               v22);
    if ( result >= 0 )
    {
      v34 = 0LL;
      v23 = 0;
      v24 = v35;
      v25 = *v35;
      v26 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
      for ( i = 0LL; ; i = v23 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64))(v25 + 32))(
                   v24,
                   i,
                   &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                   v26);
        if ( result < 0 )
          break;
        if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v34 + 32LL))(v34, v32) >= 0 )
          CApplicationManager::_UpdatePerApplicationDataIfNeeded(a1, (__int64)a2, (CallerIdentity *)v32[0], 1);
        ++v23;
        v24 = v35;
        v25 = *v35;
        v26 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
      }
      v28 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    v29 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      return (*(__int64 (__fastcall **)(__int64 *))(*v29 + 16))(v29);
    }
  }
  return result;
}
