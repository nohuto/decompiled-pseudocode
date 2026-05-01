/*
 * XREFs of ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180013290
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006D2C (WPP_SF_qd.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$Start@$$V@HandleApplicationRequestActivation@CAppManagerTelemetry@@SA?AV01@XZ @ 0x180019098 (--$Start@$$V@HandleApplicationRequestActivation@CAppManagerTelemetry@@SA-AV01@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_HandleApplicationRequestActivation(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  HRESULT First; // ebx
  IUnknown *v5; // rbx
  void **v6; // rax
  __int64 v7; // rcx
  IUnknown *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-E0h]
  IUnknown *punk; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  _QWORD v17[40]; // [rsp+78h] [rbp-90h] BYREF

  v16 = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 328) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  CAppManagerTelemetry::HandleApplicationRequestActivation::Start<>((CAppManagerTelemetry::HandleApplicationRequestActivation *)v17);
  punk = 0LL;
  v12 = *((_QWORD *)a2 + 1);
  LODWORD(v13) = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v12, &punk, 0LL);
  if ( First >= 0 )
  {
    v12 = 0LL;
    v5 = punk;
    v6 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
    First = IUnknown_GetSite(v5, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v6);
    if ( First >= 0 )
      First = (*(__int64 (__fastcall **)(__int64, IUnknown *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v12 + 48LL))(
                v12,
                punk,
                *((_QWORD *)a2 + 1),
                0LL,
                5,
                0LL);
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v10) = First;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xFu,
      &WPP_8bd202aa8a883acb924286472c3692bf_Traceguids,
      *((_QWORD *)a2 + 1),
      v10);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, (unsigned int)First);
  v8 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
  }
  v17[0] = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v17);
  if ( (int)v15 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)First;
}
