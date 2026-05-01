/*
 * XREFs of ?StartActivity@DragEnter@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1800478E8
 * Callers:
 *     ?DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z @ 0x18003F890 (-DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall CAppViewManagerTelemetry::DragEnter::StartActivity(
        CAppViewManagerTelemetry::DragEnter *this,
        const struct _GUID *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rdi
  __int64 v10; // r8
  const GUID *v11; // r9
  char *v12; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  PSRWLOCK *v16; // [rsp+68h] [rbp-9h]
  __int64 v17; // [rsp+70h] [rbp-1h]
  const struct _GUID *v18; // [rsp+78h] [rbp+7h]
  __int64 v19; // [rsp+80h] [rbp+Fh]
  const struct tagPOINT *v20; // [rsp+88h] [rbp+17h]
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  LONG *p_y; // [rsp+98h] [rbp+27h]
  __int64 v23; // [rsp+A0h] [rbp+2Fh]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v6 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CAppManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v7 = SRWLock[0];
  *(_DWORD *)v6 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v9 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LODWORD(SRWLock[0]) = GetCurrentThreadId();
    v16 = SRWLock;
    p_y = &a3->y;
    v17 = 4LL;
    v18 = a2;
    v19 = 16LL;
    v20 = a3;
    v21 = 4LL;
    v23 = 4LL;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v9, &unk_1802552A1, (LPCGUID)(v10 + 8), v11, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v12 = (char *)this + 8;
    if ( *((_DWORD *)v12 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v12 = Local;
    if ( Local )
    {
      *((_QWORD *)v12 + 2) = *Local;
      *Local = v12;
      *((_DWORD *)v12 + 6) = GetCurrentThreadId();
    }
  }
}
