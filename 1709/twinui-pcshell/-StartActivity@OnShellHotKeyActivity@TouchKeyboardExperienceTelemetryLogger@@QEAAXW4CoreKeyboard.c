/*
 * XREFs of ?StartActivity@OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1801A746C
 * Callers:
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1801A5518 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801A1334 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::StartActivity(__int64 a1, int a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // r9
  const struct _TlgProvider_t **v12; // rbx
  const struct _TlgProvider_t *v13; // rcx
  DWORD v15; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  DWORD *v18; // [rsp+68h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+2Fh]
  int v20; // [rsp+74h] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+37h]
  int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)TouchKeyboardExperienceTraceLogging::Provider() <= 5u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  Local = TouchKeyboardExperienceTraceLogging::Provider();
  v8 = Local;
  if ( *(_DWORD *)Local > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0;
    v23 = 0;
    v15 = CurrentThreadId;
    v18 = &v15;
    p_SRWLock = &SRWLock;
    v19 = 4;
    LODWORD(SRWLock) = a2;
    v22 = 4;
    v10 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    LODWORD(Local) = TlgWrite(v8, &unk_18026762F, (LPCGUID)(v10 + 8), v11, 4u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v12 = (const struct _TlgProvider_t **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v7,
                                               1);
      v13 = Local;
    }
    else
    {
      v13 = 0LL;
    }
    *v12 = v13;
    if ( v13 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v13;
      *(_QWORD *)v13 = v12;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
