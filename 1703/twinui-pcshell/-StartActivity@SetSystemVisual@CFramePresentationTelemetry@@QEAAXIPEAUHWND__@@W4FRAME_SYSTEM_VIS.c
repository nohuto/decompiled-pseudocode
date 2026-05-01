/*
 * XREFs of ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006D690
 * Callers:
 *     ??$Start@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@SetSystemVisual@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006A098 (--$Start@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@SetSystemVisual@CFramePresentationTelemet.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CFramePresentationTelemetry::SetSystemVisual::StartActivity(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // rbx
  __int64 v12; // r8
  const GUID *v13; // r9
  const struct _TlgProvider_t **v14; // rbx
  const struct _TlgProvider_t *v15; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  int *v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  __int64 *v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  PSRWLOCK *p_SRWLock; // [rsp+A0h] [rbp+7h]
  __int64 v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+108h] [rbp+6Fh] BYREF

  v29 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v7 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)CAppManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v7 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  v8 = SRWLock;
  *(_DWORD *)v7 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  Local = CAppManagerLogging::Provider();
  v11 = Local;
  if ( *(_DWORD *)Local > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v23 = &v29;
    v25 = &v19;
    p_SRWLock = &SRWLock;
    v22 = 4LL;
    v24 = 4LL;
    v19 = a3;
    v26 = 8LL;
    LODWORD(SRWLock) = a4;
    v28 = 4LL;
    v12 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v12 + 4)
      || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
      && !*(_DWORD *)(v12 + 28)
      && !*(_DWORD *)(v12 + 32)
      && !*(_DWORD *)(v12 + 36) )
    {
      v13 = 0LL;
    }
    LODWORD(Local) = TlgWrite(v11, &unk_1801F5F4E, (LPCGUID)(v12 + 8), v13, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v14 = (const struct _TlgProvider_t **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v10,
                                               1);
      v15 = Local;
    }
    else
    {
      v15 = 0LL;
    }
    *v14 = v15;
    if ( v15 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v15;
      *(_QWORD *)v15 = v14;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
