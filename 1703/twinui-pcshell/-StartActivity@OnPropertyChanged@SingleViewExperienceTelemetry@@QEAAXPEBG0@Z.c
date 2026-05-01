/*
 * XREFs of ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180186CE0
 * Callers:
 *     ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x180183F54 (--$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009F4C4 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180187058 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::StartActivity(
        SingleViewExperienceTelemetry::OnPropertyChanged *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // r14
  const unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  const unsigned __int16 *v10; // rdx
  __int64 v11; // r8
  const GUID *v12; // r9
  char *v13; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+68h] [rbp-9h]
  __int64 v18; // [rsp+70h] [rbp-1h]
  const unsigned __int16 *v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+84h] [rbp+13h]
  const unsigned __int16 *v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24; // [rsp+94h] [rbp+23h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(this);
  v7 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v7 > 5u && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0 )
  {
    v6 = *((_QWORD *)v7 + 3) & 0x200000000000LL;
    if ( v6 == *((_QWORD *)v7 + 3) )
    {
      v18 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v8 = (const unsigned __int16 *)&unk_1801C6ABC;
      LODWORD(v9) = 0;
      v10 = (const unsigned __int16 *)&unk_1801C6ABC;
      if ( a2 )
      {
        v10 = a2;
        v9 = -1LL;
        do
          ++v9;
        while ( a2[v9] );
      }
      v19 = v10;
      v20 = 2 * v9 + 2;
      LODWORD(v9) = 0;
      v21 = 0;
      if ( a3 )
      {
        v8 = a3;
        v9 = -1LL;
        do
          ++v9;
        while ( a3[v9] );
      }
      v22 = v8;
      v23 = 2 * v9 + 2;
      v24 = 0;
      v11 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v11 + 4)
        || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
        && !*(_DWORD *)(v11 + 28)
        && !*(_DWORD *)(v11 + 32)
        && !*(_DWORD *)(v11 + 36) )
      {
        v12 = 0LL;
      }
      TlgWrite(v7, &unk_180203DFC, (LPCGUID)(v11 + 8), v12, 5u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v13 = (char *)this + 8;
    if ( *((_DWORD *)v13 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v6,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v13 = Local;
    if ( Local )
    {
      *((_QWORD *)v13 + 2) = *Local;
      *Local = v13;
      *((_DWORD *)v13 + 6) = GetCurrentThreadId();
    }
  }
}
