/*
 * XREFs of ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x180090944
 * Callers:
 *     ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@@Z @ 0x18009CAC8 (--$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@Notif.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v6; // rbx
  const struct _TlgProvider_t *v7; // rax
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  const GUID *v14; // r9
  const struct _TlgProvider_t **v15; // rbx
  const struct _TlgProvider_t *v16; // rcx
  DWORD v18; // [rsp+38h] [rbp-29h] BYREF
  int v19; // [rsp+3Ch] [rbp-25h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  DWORD *v22; // [rsp+68h] [rbp+7h]
  int v23; // [rsp+70h] [rbp+Fh]
  int v24; // [rsp+74h] [rbp+13h]
  int *v25; // [rsp+78h] [rbp+17h]
  int v26; // [rsp+80h] [rbp+1Fh]
  int v27; // [rsp+84h] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+88h] [rbp+27h]
  int v29; // [rsp+90h] [rbp+2Fh]
  int v30; // [rsp+94h] [rbp+33h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  }
  else
  {
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  v8 = SRWLock;
  *(_DWORD *)v6 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  Local = NotificationCenterLogging::Provider();
  v11 = Local;
  if ( *(_DWORD *)Local > 5u && (*((_QWORD *)Local + 2) & 0x400000000000LL) != 0 )
  {
    v10 = *((_QWORD *)Local + 3) & 0x400000000000LL;
    if ( v10 == *((_QWORD *)Local + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v18 = CurrentThreadId;
      v22 = &v18;
      v25 = &v19;
      p_SRWLock = &SRWLock;
      v23 = 4;
      v19 = a2;
      v26 = 4;
      LODWORD(SRWLock) = a3;
      v29 = 4;
      v13 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v13 + 4)
        || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
        && !*(_DWORD *)(v13 + 28)
        && !*(_DWORD *)(v13 + 32)
        && !*(_DWORD *)(v13 + 36) )
      {
        v14 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v11, &unk_18025A16E, (LPCGUID)(v13 + 8), v14, 5u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v15 = (const struct _TlgProvider_t **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v10,
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
