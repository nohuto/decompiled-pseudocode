/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__&___ptr64_1__1_::Invoke @ 0x180044BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180040B88 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800411BC (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1800422CC (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     ??$Start@$$V@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@SA?AV01@XZ @ 0x180044518 (--$Start@$$V@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b______ptr64_1__1_::Invoke(
        __int64 a1)
{
  struct IAsyncCallback *v1; // r14
  CAppViewManager *v2; // r15
  unsigned int v3; // ebx
  HWND v4; // rdi
  HWND v5; // rsi
  int v6; // edi
  void (__fastcall ***v7)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  char v9; // [rsp+48h] [rbp-C0h] BYREF
  char v10; // [rsp+49h] [rbp-BFh] BYREF
  struct IImmersiveApplicationInternal *v11; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[40]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = *(struct IAsyncCallback **)(a1 + 48);
  v2 = *(CAppViewManager **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 40);
  v4 = *(HWND *)(a1 + 32);
  v5 = *(HWND *)(a1 + 24);
  CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::Start<>((CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker *)v12);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  v6 = CAppViewManager::_PrepareToSwitchHelper(v2, v5, v4, v3, 0LL, &v11, &v9, &v10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v11;
  if ( v6 >= 0 && v9 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr);
    CAppViewManager::_TrySwitchToApplication((IUnknown **)v2, v7, 0LL);
  }
  if ( v1 )
    CAppViewManager::_s_QueueCallback((struct IImmersiveApplicationInternal *)v7, v1, v6);
  if ( v6 >= 0 )
    v6 = v10 != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, v6);
  if ( v7 )
    ((void (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *)))(*v7)[2])(v7);
  v12[0] = &CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  if ( v6 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v6);
  return (unsigned int)v6;
}
