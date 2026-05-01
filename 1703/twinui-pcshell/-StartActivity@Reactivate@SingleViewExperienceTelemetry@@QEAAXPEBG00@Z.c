/*
 * XREFs of ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x18018D140
 * Callers:
 *     ??$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG00@Z @ 0x18018CC58 (--$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG00@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009F4C4 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Reactivate::StartActivity(
        SingleViewExperienceTelemetry::Reactivate *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // rbx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  const unsigned __int16 *v17; // rcx
  __int64 v18; // r8
  const GUID *v19; // r9
  _QWORD *v20; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  PSRWLOCK *v24; // [rsp+60h] [rbp-29h]
  __int64 v25; // [rsp+68h] [rbp-21h]
  const unsigned __int16 *v26; // [rsp+70h] [rbp-19h]
  int v27; // [rsp+78h] [rbp-11h]
  int v28; // [rsp+7Ch] [rbp-Dh]
  const unsigned __int16 *v29; // [rsp+80h] [rbp-9h]
  int v30; // [rsp+88h] [rbp-1h]
  int v31; // [rsp+8Ch] [rbp+3h]
  const unsigned __int16 *v32; // [rsp+90h] [rbp+7h]
  int v33; // [rsp+98h] [rbp+Fh]
  int v34; // [rsp+9Ch] [rbp+13h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v8 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)SingleViewExperienceLogging::Provider() <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  v9 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v11 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v25 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v24 = SRWLock;
    v13 = (const unsigned __int16 *)&unk_1801C6ABC;
    v14 = (const unsigned __int16 *)&unk_1801C6ABC;
    LODWORD(v15) = 0;
    if ( a2 )
    {
      v14 = a2;
      v15 = -1LL;
      do
        ++v15;
      while ( a2[v15] );
    }
    v26 = v14;
    v27 = 2 * v15 + 2;
    LODWORD(v16) = 0;
    v28 = 0;
    v17 = (const unsigned __int16 *)&unk_1801C6ABC;
    if ( a3 )
    {
      v17 = a3;
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
    }
    v29 = v17;
    v30 = 2 * v16 + 2;
    LODWORD(v16) = 0;
    v31 = 0;
    if ( a4 )
    {
      v13 = a4;
      v16 = -1LL;
      do
        ++v16;
      while ( a4[v16] );
    }
    v32 = v13;
    v33 = 2 * v16 + 2;
    v34 = 0;
    v18 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v18 + 4)
      || (v19 = (const GUID *)(v18 + 24), !*(_DWORD *)(v18 + 24))
      && !*(_DWORD *)(v18 + 28)
      && !*(_DWORD *)(v18 + 32)
      && !*(_DWORD *)(v18 + 36) )
    {
      v19 = 0LL;
    }
    TlgWrite(v11, &unk_180205798, (LPCGUID)(v18 + 8), v19, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v20 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v10,
                          1);
    else
      Local = 0LL;
    *v20 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v20;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
