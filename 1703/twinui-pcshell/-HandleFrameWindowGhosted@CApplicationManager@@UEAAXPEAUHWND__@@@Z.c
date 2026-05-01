/*
 * XREFs of ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$Start@$$V@CloseHungApp@CAppManagerTelemetry@@SA?AV01@XZ @ 0x1800186E0 (--$Start@$$V@CloseHungApp@CAppManagerTelemetry@@SA-AV01@XZ.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::HandleFrameWindowGhosted(CApplicationManager *this, HWND a2)
{
  IUnknown *v4; // rbx
  void **v5; // rax
  bool v6; // bl
  HWND v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  HWND v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  _QWORD v18[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v17 = -2LL;
  CAppManagerTelemetry::CloseHungApp::Start<>((CAppManagerTelemetry::CloseHungApp *)v18);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = 0LL;
  v15 = a2;
  LODWORD(v16) = 2;
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((char *)this - 200, &v15, &v14, 0LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v14 )
  {
    v13 = 0LL;
    if ( (**v14)(v14, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v13) >= 0 )
    {
      v12 = 0LL;
      v4 = *(IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this - 160, &v15);
      v5 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
      v6 = IUnknown_QueryService(v4, (const GUID *const)&SID_AppCrusher, &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883, v5) >= 0;
      v7 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(HWND))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( v6 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v13, 9LL);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC31,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v8,
            0);
      }
      v9 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v18, 0LL);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
  v18[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v18);
}
