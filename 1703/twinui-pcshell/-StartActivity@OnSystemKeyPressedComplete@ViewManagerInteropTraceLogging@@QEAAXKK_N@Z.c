/*
 * XREFs of ?StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z @ 0x180106AEC
 * Callers:
 *     ??$Start@AEAIAEAW4SystemKey@Navigation@@AEA_N@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@SA?AV01@AEAIAEAW4SystemKey@Navigation@@AEA_N@Z @ 0x18010E0F0 (--$Start@AEAIAEAW4SystemKey@Navigation@@AEA_N@OnSystemKeyPressedComplete@ViewManagerInteropTrace.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::StartActivity(
        ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *this,
        int a2,
        int a3,
        char a4)
{
  __int64 v5; // rbx
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rbx
  __int64 v9; // r8
  const GUID *v10; // r9
  _QWORD *v11; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  PSRWLOCK *v15; // [rsp+68h] [rbp-29h]
  __int64 v16; // [rsp+70h] [rbp-21h]
  int *v17; // [rsp+78h] [rbp-19h]
  __int64 v18; // [rsp+80h] [rbp-11h]
  int *v19; // [rsp+88h] [rbp-9h]
  __int64 v20; // [rsp+90h] [rbp-1h]
  char *v21; // [rsp+98h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+100h] [rbp+6Fh] BYREF
  int v24; // [rsp+108h] [rbp+77h] BYREF
  char v25; // [rsp+110h] [rbp+7Fh] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v5 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ViewManagerInteropLogging::Provider() <= 5u )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v5 + 8));
  v6 = SRWLock[0];
  *(_DWORD *)v5 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v8 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    LODWORD(SRWLock[0]) = GetCurrentThreadId();
    v15 = SRWLock;
    v17 = &v23;
    v19 = &v24;
    v21 = &v25;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 1LL;
    v9 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v9 + 4)
      || (v10 = (const GUID *)(v9 + 24), !*(_DWORD *)(v9 + 24))
      && !*(_DWORD *)(v9 + 28)
      && !*(_DWORD *)(v9 + 32)
      && !*(_DWORD *)(v9 + 36) )
    {
      v10 = 0LL;
    }
    TlgWrite(v8, &unk_1801FEBA5, (LPCGUID)(v9 + 8), v10, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v11 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v7,
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
