/*
 * XREFs of ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18006D9A4
 * Callers:
 *     ??$Start@AEBKAEBQEAUHWND__@@AEBQEAU1@@PresentWindow@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@1@Z @ 0x180069994 (--$Start@AEBKAEBQEAUHWND__@@AEBQEAU1@@PresentWindow@CFramePresentationTelemetry@@SA-AV01@AEBKAEB.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::StartActivity(
        CFramePresentationTelemetry::PresentWindow *this,
        int a2,
        HWND a3,
        HWND a4)
{
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rbx
  __int64 v11; // r8
  const GUID *v12; // r9
  _QWORD *v13; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-69h] BYREF
  HWND v16; // [rsp+38h] [rbp-61h] BYREF
  HWND v17; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  int *v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  HWND *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  HWND *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+108h] [rbp+6Fh] BYREF

  v27 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v7 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CAppManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v7 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  v8 = SRWLock;
  *(_DWORD *)v7 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  v10 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    p_SRWLock = &SRWLock;
    v21 = &v27;
    v23 = &v16;
    v25 = &v17;
    v20 = 4LL;
    v22 = 4LL;
    v16 = a3;
    v24 = 8LL;
    v17 = a4;
    v26 = 8LL;
    v11 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v11 + 4)
      || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
      && !*(_DWORD *)(v11 + 28)
      && !*(_DWORD *)(v11 + 32)
      && !*(_DWORD *)(v11 + 36) )
    {
      v12 = 0LL;
    }
    TlgWrite(v10, &unk_1801F5FF9, (LPCGUID)(v11 + 8), v12, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v13 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v9,
                          1);
    else
      Local = 0LL;
    *v13 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v13;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
