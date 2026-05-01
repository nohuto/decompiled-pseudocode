/*
 * XREFs of ?StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverlayEnterStyle@@@Z @ 0x1800470EC
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800423A0 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CAppViewManagerTelemetry::EnterCompactOverlayModeForView::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        int a3)
{
  __int64 v6; // rbx
  const struct _TlgProvider_t *v7; // rax
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // rbx
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  const GUID *v15; // r9
  const struct _TlgProvider_t **v16; // rbx
  const struct _TlgProvider_t *v17; // rcx
  int v19; // [rsp+30h] [rbp-39h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  const WCHAR *v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  PSRWLOCK *p_SRWLock; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+88h] [rbp+1Fh]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
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
  Local = CAppManagerLogging::Provider();
  v11 = Local;
  if ( *(_DWORD *)Local > 5u && (*((_QWORD *)Local + 2) & 0x200000000000LL) != 0 )
  {
    v10 = *((_QWORD *)Local + 3) & 0x200000000000LL;
    if ( v10 == *((_QWORD *)Local + 3) )
    {
      LODWORD(v13) = GetCurrentThreadId();
      v23 = 4LL;
      v12 = &word_18021F3A8;
      v19 = v13;
      v22 = &v19;
      LODWORD(v13) = 0;
      if ( a2 )
      {
        v12 = a2;
        v13 = -1LL;
        do
          ++v13;
        while ( a2[v13] );
      }
      v24 = v12;
      v25 = 2 * v13 + 2;
      p_SRWLock = &SRWLock;
      v26 = 0;
      LODWORD(SRWLock) = a3;
      v28 = 4LL;
      v14 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v14 + 4)
        || (v15 = (const GUID *)(v14 + 24), !*(_DWORD *)(v14 + 24))
        && !*(_DWORD *)(v14 + 28)
        && !*(_DWORD *)(v14 + 32)
        && !*(_DWORD *)(v14 + 36) )
      {
        v15 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v11, &unk_180255135, (LPCGUID)(v14 + 8), v15, 5u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v16 = (const struct _TlgProvider_t **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v10,
                                               1);
      v17 = Local;
    }
    else
    {
      v17 = 0LL;
    }
    *v16 = v17;
    if ( v17 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v17;
      *(_QWORD *)v17 = v16;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
