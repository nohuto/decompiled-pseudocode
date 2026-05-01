/*
 * XREFs of ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x18010F74C
 * Callers:
 *     ??$Start@H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAH@Z @ 0x180110030 (--$Start@H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@SA-AV01@$$QEAH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
        ViewManagerInteropTraceLogging::PdcNotificationCallback *this,
        int a2)
{
  __int64 v3; // rbx
  RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  const GUID *v9; // r9
  _QWORD *v10; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  PSRWLOCK *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  int v20; // [rsp+C0h] [rbp+6Fh] BYREF

  v20 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v3 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ViewManagerInteropLogging::Provider() <= 5u )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  v4 = SRWLock[0];
  *(_DWORD *)v3 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    v19 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v14 = SRWLock;
    v17 = &v20;
    v15 = 4;
    v18 = 4;
    v8 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v8 + 4)
      || (v9 = (const GUID *)(v8 + 24), !*(_DWORD *)(v8 + 24))
      && !*(_DWORD *)(v8 + 28)
      && !*(_DWORD *)(v8 + 32)
      && !*(_DWORD *)(v8 + 36) )
    {
      v9 = 0LL;
    }
    TlgWrite(v6, &unk_18020054E, (LPCGUID)(v8 + 8), v9, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v10 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v5,
                          1);
    else
      Local = 0LL;
    *v10 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v10;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
