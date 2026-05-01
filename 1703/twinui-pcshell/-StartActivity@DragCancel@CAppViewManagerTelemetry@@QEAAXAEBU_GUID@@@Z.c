/*
 * XREFs of ?StartActivity@DragCancel@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x180046400
 * Callers:
 *     ??$Start@AEAU_GUID@@@DragCancel@CAppViewManagerTelemetry@@SA?AV01@AEAU_GUID@@@Z @ 0x1800442A8 (--$Start@AEAU_GUID@@@DragCancel@CAppViewManagerTelemetry@@SA-AV01@AEAU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall CAppViewManagerTelemetry::DragCancel::StartActivity(
        CAppViewManagerTelemetry::DragCancel *this,
        const struct _GUID *a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // r9
  _QWORD *v11; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  PSRWLOCK *v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+6Ch] [rbp-3Ch]
  const struct _GUID *v18; // [rsp+70h] [rbp-38h]
  int v19; // [rsp+78h] [rbp-30h]
  int v20; // [rsp+7Ch] [rbp-2Ch]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CAppManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v7 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0;
    v20 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v15 = SRWLock;
    v16 = 4;
    v18 = a2;
    v19 = 16;
    v9 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v9 + 4)
      || (v10 = (const GUID *)(v9 + 24), !*(_DWORD *)(v9 + 24))
      && !*(_DWORD *)(v9 + 28)
      && !*(_DWORD *)(v9 + 32)
      && !*(_DWORD *)(v9 + 36) )
    {
      v10 = 0LL;
    }
    TlgWrite(v7, &unk_1801F402D, (LPCGUID)(v9 + 8), v10, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v11 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v6,
                          1);
    else
      Local = 0LL;
    *v11 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v11;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
