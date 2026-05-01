/*
 * XREFs of ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1800093A0 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180009E90 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x18000A500 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C760 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x18000CA50 (-ForgetAllApplications@CApplicationManager@@UEAAXXZ.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000D280 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18000E190 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180014E68 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x180015F2C (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x180006B4C (WPP_SF_S.c)
 *     WPP_SF_qSdL @ 0x180006D18 (WPP_SF_qSdL.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007390 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180011D10 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x180017360 (-DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micr.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800197FC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByAppId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@_KPEA_K@Z @ 0x18001A38C (--$GetAppPosition@VCImmersiveAppFinderByAppId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmersi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
signed int __fastcall CApplicationManager::_ForgetApplicationNoLock(__int64 a1, IUnknown *a2, unsigned int a3)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  int App; // eax
  __int64 v10; // rbx
  __int64 v11; // rcx
  void **v12; // rax
  __int64 *v13; // rcx
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  signed int result; // eax
  const wchar_t *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  IUnknown v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // r14d
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 i; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  char v33[8]; // [rsp+28h] [rbp-28h]
  char v34[4]; // [rsp+30h] [rbp-20h]
  unsigned __int64 v35[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v36; // [rsp+80h] [rbp+30h] BYREF
  __int64 v37; // [rsp+88h] [rbp+38h] BYREF
  __int64 *v38; // [rsp+98h] [rbp+48h] BYREF

  v35[1] = -2LL;
  ((void (__fastcall *)(IUnknown *, _QWORD, __int64 *))a2->lpVtbl[6].AddRef)(a2, a3, &v36);
  v37 = 0LL;
  lpVtbl = a2->lpVtbl;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v37);
  ((void (__fastcall *)(IUnknown *, GUID *, __int64))lpVtbl->QueryInterface)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    v7);
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
          a1 + 632,
          &v37,
          v8,
          v35);
  v10 = v36;
  if ( App >= 0 )
    v10 = v35[0];
  v11 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  CActivationBasedAppAndGlomCollection::RemoveApplication((CActivationBasedAppAndGlomCollection *)(a1 + 632), v10);
  v38 = 0LL;
  v12 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v38);
  if ( IUnknown_GetSite(a2, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v12) >= 0 )
    (*(void (__fastcall **)(__int64 *, IUnknown *, _QWORD, _QWORD, int, _QWORD))(*v38 + 48))(v38, a2, 0LL, 0LL, 6, 0LL);
  v13 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v14 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[6].Release)(a2);
    v15 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
    *(_DWORD *)v34 = a3;
    *(_DWORD *)v33 = v14;
    WPP_SF_qSdL(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, v17, a2, v15, *(_QWORD *)v33, *(_DWORD *)v34);
  }
  v37 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
  result = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByAppId>(
             a1 + 632,
             &v37,
             v18,
             &v38);
  if ( result < 0 )
  {
    v37 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
    CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::DeleteItem(
      a1 + 880,
      &v37);
    result = (int)WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v20 = (const wchar_t *)((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[1].QueryInterface)(a2);
      result = WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v21, v22, v20);
    }
  }
  if ( (_BYTE)v36 )
  {
    v37 = (__int64)a2;
    ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 712) + 8LL))(a1 + 712, &v37);
    v23 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v38 = 0LL;
    v24.lpVtbl = a2->lpVtbl;
    v25 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v38);
    result = ((__int64 (__fastcall *)(IUnknown *, __int64, GUID *, __int64))v24.lpVtbl[14].Release)(
               a2,
               1LL,
               &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
               v25);
    if ( result >= 0 )
    {
      v37 = 0LL;
      v26 = 0;
      v27 = v38;
      v28 = *v38;
      v29 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v37);
      for ( i = 0LL; ; i = v26 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64))(v28 + 32))(
                   v27,
                   i,
                   &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                   v29);
        if ( result < 0 )
          break;
        if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v37 + 32LL))(v37, v35) >= 0 )
          CApplicationManager::_UpdatePerApplicationDataIfNeeded(a1, (__int64)a2, (CallerIdentity *)v35[0], 1);
        ++v26;
        v27 = v38;
        v28 = *v38;
        v29 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v37);
      }
      v31 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
    v32 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      return (*(__int64 (__fastcall **)(__int64 *))(*v32 + 16))(v32);
    }
  }
  return result;
}
