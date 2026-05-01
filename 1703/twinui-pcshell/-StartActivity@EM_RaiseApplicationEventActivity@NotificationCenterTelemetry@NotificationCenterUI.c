/*
 * XREFs of ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x18008EF8C
 * Callers:
 *     ??$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAPEBGAEA_N@Z @ 0x180096B10 (--$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationC.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this,
        const unsigned __int16 *a2,
        char a3)
{
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rbx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const GUID *v14; // r9
  _QWORD *v15; // rbx
  _QWORD *Local; // rcx
  char v17; // [rsp+38h] [rbp-39h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  const unsigned __int16 *v22; // [rsp+78h] [rbp+7h]
  int v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+84h] [rbp+13h]
  char *v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+90h] [rbp+1Fh]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v6 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)NotificationCenterLogging::Provider() <= 5u )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v7 = SRWLock;
  *(_DWORD *)v6 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v9 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v21 = 4LL;
    v11 = (const unsigned __int16 *)&unk_1801C6ABC;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    LODWORD(v12) = 0;
    if ( a2 )
    {
      v11 = a2;
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
    }
    v22 = v11;
    v23 = 2 * v12 + 2;
    v25 = &v17;
    v24 = 0;
    v17 = a3;
    v26 = 1LL;
    v13 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v13 + 4)
      || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
      && !*(_DWORD *)(v13 + 28)
      && !*(_DWORD *)(v13 + 32)
      && !*(_DWORD *)(v13 + 36) )
    {
      v14 = 0LL;
    }
    TlgWrite(v9, &unk_1801F7A75, (LPCGUID)(v13 + 8), v14, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v15 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *v15 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v15;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
