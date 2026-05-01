/*
 * XREFs of ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007716C
 * Callers:
 *     ??$Start@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@SA?AV012@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@Z @ 0x180074FA8 (--$Start@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@RaiseApplicati.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180078464 (-Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rdi
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rbx
  _QWORD *Local; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-79h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-71h] BYREF
  int v19; // [rsp+44h] [rbp-6Dh] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-69h] BYREF
  LPVOID pv[3]; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-29h]
  __int64 v24; // [rsp+90h] [rbp-21h]
  void *v25; // [rsp+98h] [rbp-19h]
  int v26; // [rsp+A0h] [rbp-11h]
  int v27; // [rsp+A4h] [rbp-Dh]
  int *v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+B0h] [rbp-1h]
  PSRWLOCK *p_SRWLock; // [rsp+B8h] [rbp+7h]
  __int64 v31; // [rsp+C0h] [rbp+Fh]

  pv[1] = (LPVOID)-2LL;
  v17 = 0LL;
  (**a2)(a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v17);
  pv[0] = 0LL;
  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 24LL))(v17, pv) >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      a1,
      &SRWLock);
    v7 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)ApplicationViewManagementLogging::Provider() <= 5u )
      *(_QWORD *)(v7 + 8) = 0LL;
    else
      EventActivityIdControl(3u, (LPGUID)(v7 + 8));
    *(_DWORD *)v7 = 1;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v9 = ApplicationViewManagementLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v24 = 4LL;
      v10 = &unk_1801C6ABC;
      LODWORD(v11) = 0;
      if ( pv[0] )
      {
        v10 = pv[0];
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)pv[0] + v11) );
      }
      v25 = v10;
      v26 = 2 * v11 + 2;
      v27 = 0;
      v19 = a3;
      v28 = &v19;
      v29 = 4LL;
      LODWORD(SRWLock) = a4 != 0;
      p_SRWLock = &SRWLock;
      v31 = 4LL;
      v12 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v12 + 4)
        || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
        && !*(_DWORD *)(v12 + 28)
        && !*(_DWORD *)(v12 + 32)
        && !*(_DWORD *)(v12 + 36) )
      {
        v13 = 0LL;
      }
      TlgWrite(v9, &unk_1801F6688, (LPCGUID)(v12 + 8), v13, 6u, &pData);
    }
    if ( !*(_DWORD *)(a1 + 32) )
    {
      v14 = a1 + 8;
      if ( *(_DWORD *)(v14 + 24) )
        __fastfail(7u);
      if ( wil::details::g_pThreadFailureCallbacks )
        Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                            v8,
                            1);
      else
        Local = 0LL;
      *(_QWORD *)v14 = Local;
      if ( Local )
      {
        *(_QWORD *)(v14 + 16) = *Local;
        *Local = v14;
        *(_DWORD *)(v14 + 24) = GetCurrentThreadId();
      }
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  v16 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
}
