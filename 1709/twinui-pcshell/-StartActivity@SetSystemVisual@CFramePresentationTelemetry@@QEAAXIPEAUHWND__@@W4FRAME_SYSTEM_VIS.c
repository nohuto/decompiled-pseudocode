/*
 * XREFs of ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006F494
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180068E30 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CFramePresentationTelemetry::SetSystemVisual::StartActivity(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  const struct _TlgProvider_t *v8; // rax
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rbx
  __int64 v13; // r8
  const GUID *v14; // r9
  const struct _TlgProvider_t **v15; // rbx
  const struct _TlgProvider_t *v16; // rcx
  DWORD CurrentThreadId; // [rsp+38h] [rbp-59h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-51h] BYREF
  __int64 v20; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp-19h]
  __int64 v23; // [rsp+80h] [rbp-11h]
  int *v24; // [rsp+88h] [rbp-9h]
  __int64 v25; // [rsp+90h] [rbp-1h]
  __int64 *v26; // [rsp+98h] [rbp+7h]
  __int64 v27; // [rsp+A0h] [rbp+Fh]
  PSRWLOCK *p_SRWLock; // [rsp+A8h] [rbp+17h]
  __int64 v29; // [rsp+B0h] [rbp+1Fh]
  int v30; // [rsp+100h] [rbp+6Fh] BYREF

  v30 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v7 = *(_QWORD *)(a1 + 48);
  v8 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  }
  else
  {
    *(_QWORD *)(v7 + 8) = 0LL;
  }
  v9 = SRWLock;
  *(_DWORD *)v7 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  Local = CAppManagerLogging::Provider();
  v12 = Local;
  if ( *(_DWORD *)Local > 5u && (*((_QWORD *)Local + 2) & 0x200000000000LL) != 0 )
  {
    v11 = *((_QWORD *)Local + 3) & 0x200000000000LL;
    if ( v11 == *((_QWORD *)Local + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v24 = &v30;
      v26 = &v20;
      p_SRWLock = &SRWLock;
      v23 = 4LL;
      v25 = 4LL;
      v20 = a3;
      v27 = 8LL;
      LODWORD(SRWLock) = a4;
      v29 = 4LL;
      v13 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v13 + 4)
        || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
        && !*(_DWORD *)(v13 + 28)
        && !*(_DWORD *)(v13 + 32)
        && !*(_DWORD *)(v13 + 36) )
      {
        v14 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v12, &unk_1802576A9, (LPCGUID)(v13 + 8), v14, 6u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v15 = (const struct _TlgProvider_t **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v11,
                                               1);
      v16 = Local;
    }
    else
    {
      v16 = 0LL;
    }
    *v15 = v16;
    if ( v16 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v16;
      *(_QWORD *)v16 = v15;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
