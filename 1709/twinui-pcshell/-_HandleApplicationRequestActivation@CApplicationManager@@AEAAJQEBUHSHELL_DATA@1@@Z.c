/*
 * XREFs of ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180013CD8
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006DCC (WPP_SF_qd.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ @ 0x18001DBF4 (-StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_HandleApplicationRequestActivation(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // r14d
  HRESULT First; // ebx
  IUnknown *v7; // rbx
  void **v8; // rax
  __int64 v9; // rcx
  IUnknown *v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-E0h]
  IUnknown *punk; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  _QWORD v19[4]; // [rsp+78h] [rbp-90h] BYREF
  int v20; // [rsp+98h] [rbp-70h]
  int *v21; // [rsp+A0h] [rbp-68h]
  int *v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+B0h] [rbp-58h] BYREF
  char v24; // [rsp+B4h] [rbp-54h]
  int v25; // [rsp+D8h] [rbp-30h] BYREF
  const char *v26; // [rsp+E0h] [rbp-28h]
  __int64 v27; // [rsp+E8h] [rbp-20h]
  char v28; // [rsp+F0h] [rbp-18h]
  __int64 v29; // [rsp+F8h] [rbp-10h]
  _BYTE v30[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v31; // [rsp+190h] [rbp+88h]
  __int64 v32; // [rsp+198h] [rbp+90h]
  __int64 v33; // [rsp+1A0h] [rbp+98h]
  __int64 v34; // [rsp+1A8h] [rbp+A0h]

  v16 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 400) & -(__int64)(this != 0LL));
  v17 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1LL);
  LODWORD(v18) = v5;
  v19[1] = 0LL;
  v19[2] = v19;
  v19[3] = 0LL;
  v20 = 0;
  v21 = &v25;
  v22 = &v23;
  v23 = 0;
  v24 = 0;
  v28 = 0;
  v25 = 0;
  v26 = "HandleApplicationRequestActivation";
  v27 = 0LL;
  v29 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v30, 0, sizeof(v30));
  v33 = 0LL;
  v34 = 0LL;
  v19[0] = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  CAppManagerTelemetry::HandleApplicationRequestActivation::StartActivity((CAppManagerTelemetry::HandleApplicationRequestActivation *)v19);
  punk = 0LL;
  v14 = *((_QWORD *)a2 + 1);
  LODWORD(v15) = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v14, &punk, 0LL);
  if ( First >= 0 )
  {
    v14 = 0LL;
    v7 = punk;
    v8 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
    First = IUnknown_GetSite(v7, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v8);
    if ( First >= 0 )
      First = (*(__int64 (__fastcall **)(__int64, IUnknown *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v14 + 48LL))(
                v14,
                punk,
                *((_QWORD *)a2 + 1),
                0LL,
                5,
                0LL);
    v9 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v12) = First;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xFu,
      &WPP_a48b1226f8c73eed2d41046d9a93f3a8_Traceguids,
      *((_QWORD *)a2 + 1),
      v12);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v19, (unsigned int)First);
  v10 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
  }
  v19[0] = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v19);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return (unsigned int)First;
}
