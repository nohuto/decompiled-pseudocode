/*
 * XREFs of ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x180042970
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180041A90 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 *     ??$Start@$$V@ConsolidateView@CAppViewManagerTelemetry@@SA?AV01@XZ @ 0x18004486C (--$Start@$$V@ConsolidateView@CAppViewManagerTelemetry@@SA-AV01@XZ.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9__&___ptr64_ @ 0x180044918 (Microsoft--WRL--Callback_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9__-___ptr64_.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::ConsolidateView(
        CAppViewManager *this,
        struct IImmersiveApplication *a2,
        struct IImmersiveApplication *a3)
{
  char *v6; // rbx
  PSRWLOCK v7; // rdi
  unsigned int Glom; // r15d
  __int64 v9; // rdi
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[7]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v13[40]; // [rsp+68h] [rbp-A0h] BYREF

  v12[3] = -2LL;
  CAppViewManagerTelemetry::ConsolidateView::Start<>((CAppViewManagerTelemetry::ConsolidateView *)v13);
  v6 = (char *)this - 32;
  v12[4] = (char *)this - 32;
  if ( this != (CAppViewManager *)32 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))((char *)this - 32);
  v12[5] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v12[6] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
  v12[0] = (char *)this - 32;
  if ( this != (CAppViewManager *)32 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))((char *)this - 32);
  v12[1] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v12[2] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( LODWORD(v7[9].Ptr) == GetCurrentThreadId() )
  {
    Glom = CAppViewManager::_TransferAllWindowsToNextGlom(
             (__int64)this - 32,
             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
             (__int64)a3,
             0xFFFFFFFE);
  }
  else
  {
    Microsoft::WRL::Callback_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9______ptr64_(&v11, v12);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = v11;
    Glom = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 64LL))(
             *((_QWORD *)this + 10),
             v11,
             1LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, Glom);
  if ( a3 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v6 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( a3 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v6 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  v13[0] = &CAppViewManagerTelemetry::ConsolidateView::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return Glom;
}
