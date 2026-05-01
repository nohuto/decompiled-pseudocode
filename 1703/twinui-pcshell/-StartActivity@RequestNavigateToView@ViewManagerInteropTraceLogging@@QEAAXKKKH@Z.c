/*
 * XREFs of ?StartActivity@RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKKH@Z @ 0x1800EE89C
 * Callers:
 *     ??$Start@AEAIAEAIAEAW4ViewActivationFlags@Navigation@@H@RequestNavigateToView@ViewManagerInteropTraceLogging@@SA?AV01@AEAI0AEAW4ViewActivationFlags@Navigation@@$$QEAH@Z @ 0x1800FE338 (--$Start@AEAIAEAIAEAW4ViewActivationFlags@Navigation@@H@RequestNavigateToView@ViewManagerInterop.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RequestNavigateToView::StartActivity(
        ViewManagerInteropTraceLogging::RequestNavigateToView *this,
        int a2,
        int a3,
        int a4,
        char a5)
{
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rbx
  __int64 v10; // r8
  const GUID *v11; // r9
  _QWORD *v12; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-61h] BYREF
  PSRWLOCK *v16; // [rsp+68h] [rbp-41h]
  __int64 v17; // [rsp+70h] [rbp-39h]
  int *v18; // [rsp+78h] [rbp-31h]
  __int64 v19; // [rsp+80h] [rbp-29h]
  int *v20; // [rsp+88h] [rbp-21h]
  __int64 v21; // [rsp+90h] [rbp-19h]
  int *v22; // [rsp+98h] [rbp-11h]
  __int64 v23; // [rsp+A0h] [rbp-9h]
  char *v24; // [rsp+A8h] [rbp-1h]
  __int64 v25; // [rsp+B0h] [rbp+7h]
  int v26; // [rsp+110h] [rbp+67h] BYREF
  int v27; // [rsp+118h] [rbp+6Fh] BYREF
  int v28; // [rsp+120h] [rbp+77h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v6 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ViewManagerInteropLogging::Provider() <= 5u )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v7 = SRWLock[0];
  *(_DWORD *)v6 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v9 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LODWORD(SRWLock[0]) = GetCurrentThreadId();
    v16 = SRWLock;
    v18 = &v26;
    v20 = &v27;
    v22 = &v28;
    v24 = &a5;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 4LL;
    v25 = 4LL;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v9, &unk_1801FDAFC, (LPCGUID)(v10 + 8), v11, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v12 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
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
