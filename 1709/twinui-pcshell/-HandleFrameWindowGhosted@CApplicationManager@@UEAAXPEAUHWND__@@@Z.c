/*
 * XREFs of ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ @ 0x18001DAAC (-StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::HandleFrameWindowGhosted(CApplicationManager *this, HWND a2)
{
  IUnknown *v4; // rbx
  void **v5; // rax
  bool v6; // bl
  IUnknown *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  HWND v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, HWND *); // rcx
  IUnknown *punk; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, HWND *); // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h]
  HWND v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
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
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v18 = -2LL;
  LODWORD(v15) = 0;
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
  v26 = "CloseHungApp";
  v27 = 0LL;
  v29 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v30, 0, sizeof(v30));
  v33 = 0LL;
  v34 = 0LL;
  v19[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  CAppManagerTelemetry::CloseHungApp::StartActivity((CAppManagerTelemetry::CloseHungApp *)v19);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = 0LL;
  v16 = a2;
  LODWORD(v17) = 2;
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((char *)this - 248, &v16, &v14, 0LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v14 )
  {
    v16 = 0LL;
    if ( (**v14)(v14, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v16) >= 0 )
    {
      v13 = 0LL;
      punk = 0LL;
      LODWORD(v15) = 1;
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL))(
        (char *)this - 192,
        &GUID_00000000_0000_0000_c000_000000000046,
        &punk);
      v4 = punk;
      v5 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
      v6 = IUnknown_QueryService(v4, (const GUID *const)&SID_AppCrusher, &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883, v5) >= 0;
      v7 = punk;
      if ( punk )
      {
        punk = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( v6 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v13 + 32LL))(v13, v16, 9LL);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC7A,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v8,
            0);
      }
      v9 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v19, 0LL);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, HWND *)))(*v11)[2])(v11);
  }
  v19[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v19);
}
