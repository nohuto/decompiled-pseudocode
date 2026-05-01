/*
 * XREFs of ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x18001D92C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StartActivity(
        IamTraceLogging::OnShellHookMessage *this,
        __int64 a2,
        HWND a3)
{
  __int64 v5; // rbx
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // r9
  _QWORD *v12; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-29h] BYREF
  HWND v15; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  __int64 *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  HWND *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]
  __int64 v26; // [rsp+C8h] [rbp+6Fh] BYREF

  v26 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v5 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CAppManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v5 + 8));
  v6 = SRWLock;
  *(_DWORD *)v5 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v8 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v22 = 0;
    v25 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v20 = &v26;
    v23 = &v15;
    v18 = 4;
    v21 = 8;
    v15 = a3;
    v24 = 8;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v8, &unk_180254222, (LPCGUID)(v10 + 8), v11, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v12 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v7,
                          1);
    else
      Local = 0LL;
    *v12 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v12;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
