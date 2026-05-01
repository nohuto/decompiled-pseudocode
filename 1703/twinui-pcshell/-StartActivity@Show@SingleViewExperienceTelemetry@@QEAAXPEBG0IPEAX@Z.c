/*
 * XREFs of ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1801866FC
 * Callers:
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x1801848E8 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009F4C4 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180187058 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::StartActivity(
        SingleViewExperienceTelemetry::Show *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  const unsigned __int16 *v5; // r14
  const struct _TlgProvider_t *v9; // r10
  const unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rdi
  const unsigned __int16 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  const GUID *v17; // r9
  _QWORD *v18; // rbx
  _QWORD *Local; // rcx
  int v20; // [rsp+38h] [rbp-A1h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+48h] [rbp-91h] BYREF
  int *v22; // [rsp+68h] [rbp-71h]
  __int64 v23; // [rsp+70h] [rbp-69h]
  const unsigned __int16 *v24; // [rsp+78h] [rbp-61h]
  int v25; // [rsp+80h] [rbp-59h]
  int v26; // [rsp+84h] [rbp-55h]
  const unsigned __int16 *v27; // [rsp+88h] [rbp-51h]
  int v28; // [rsp+90h] [rbp-49h]
  int v29; // [rsp+94h] [rbp-45h]
  int *v30; // [rsp+98h] [rbp-41h]
  __int64 v31; // [rsp+A0h] [rbp-39h]
  void **v32; // [rsp+A8h] [rbp-31h]
  __int64 v33; // [rsp+B0h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-11h] BYREF
  const unsigned __int16 *v35; // [rsp+E8h] [rbp+Fh]
  int v36; // [rsp+F0h] [rbp+17h]
  int v37; // [rsp+F4h] [rbp+1Bh]
  int v38; // [rsp+150h] [rbp+77h] BYREF

  v38 = a4;
  v5 = (const unsigned __int16 *)&unk_1801C6ABC;
  if ( a4 != 2 )
  {
    v9 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v9 > 5u
      && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x400000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v10 = (const unsigned __int16 *)&unk_1801C6ABC;
      LODWORD(v11) = 0;
      if ( a3 )
      {
        v10 = a3;
        v11 = -1LL;
        do
          ++v11;
        while ( a3[v11] );
      }
      v35 = v10;
      v36 = 2 * v11 + 2;
      v37 = 0;
      TlgWrite(v9, &unk_180203C14, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &pData);
    }
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(this);
  v13 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v13 > 5u && (*((_QWORD *)v13 + 2) & 0x200000000000LL) != 0 )
  {
    v12 = *((_QWORD *)v13 + 3) & 0x200000000000LL;
    if ( v12 == *((_QWORD *)v13 + 3) )
    {
      LODWORD(v15) = GetCurrentThreadId();
      v23 = 4LL;
      v14 = (const unsigned __int16 *)&unk_1801C6ABC;
      v20 = v15;
      v22 = &v20;
      LODWORD(v15) = 0;
      if ( a2 )
      {
        v14 = a2;
        v15 = -1LL;
        do
          ++v15;
        while ( a2[v15] );
      }
      v24 = v14;
      v25 = 2 * v15 + 2;
      LODWORD(v15) = 0;
      v26 = 0;
      if ( a3 )
      {
        v5 = a3;
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
      }
      v27 = v5;
      v28 = 2 * v15 + 2;
      v30 = &v38;
      v32 = &a5;
      v29 = 0;
      v31 = 4LL;
      v33 = 8LL;
      v16 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v16 + 4)
        || (v17 = (const GUID *)(v16 + 24), !*(_DWORD *)(v16 + 24))
        && !*(_DWORD *)(v16 + 28)
        && !*(_DWORD *)(v16 + 32)
        && !*(_DWORD *)(v16 + 36) )
      {
        v17 = 0LL;
      }
      TlgWrite(v13, &unk_180203D38, (LPCGUID)(v16 + 8), v17, 7u, &v21);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v18 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v12,
                          1);
    else
      Local = 0LL;
    *v18 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v18;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
