/*
 * XREFs of ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x180044DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180043E3C (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9__&___ptr64_ @ 0x180046398 (Microsoft--WRL--Callback_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9__-___ptr64_.c)
 *     ?StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180047A78 (-StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  _QWORD v13[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v14; // [rsp+88h] [rbp-80h]
  int *v15; // [rsp+90h] [rbp-78h]
  int *v16; // [rsp+98h] [rbp-70h]
  int v17; // [rsp+A0h] [rbp-68h] BYREF
  char v18; // [rsp+A4h] [rbp-64h]
  int v19; // [rsp+C8h] [rbp-40h] BYREF
  const char *v20; // [rsp+D0h] [rbp-38h]
  __int64 v21; // [rsp+D8h] [rbp-30h]
  char v22; // [rsp+E0h] [rbp-28h]
  __int64 v23; // [rsp+E8h] [rbp-20h]
  _BYTE v24[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v25; // [rsp+180h] [rbp+78h]
  __int64 v26; // [rsp+188h] [rbp+80h]
  __int64 v27; // [rsp+190h] [rbp+88h]
  __int64 v28; // [rsp+198h] [rbp+90h]

  v12[3] = -2LL;
  v13[1] = 0LL;
  v13[2] = v13;
  v13[3] = 0LL;
  v14 = 0;
  v15 = &v19;
  v16 = &v17;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "ConsolidateView";
  v21 = 0LL;
  v23 = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  memset(v24, 0, sizeof(v24));
  v27 = 0LL;
  v28 = 0LL;
  v13[0] = &CAppViewManagerTelemetry::ConsolidateView::`vftable';
  CAppViewManagerTelemetry::ConsolidateView::StartActivity((CAppViewManagerTelemetry::ConsolidateView *)v13);
  v6 = (char *)this - 48;
  v12[4] = (char *)this - 48;
  if ( this != (CAppViewManager *)48 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))((char *)this - 48);
  v12[5] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v12[6] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
  v12[0] = (char *)this - 48;
  if ( this != (CAppViewManager *)48 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))((char *)this - 48);
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
             (__int64)this - 48,
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
