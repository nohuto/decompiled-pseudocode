/*
 * XREFs of ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1801D557C
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801D5ED4 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::StartActivity(
        SingleViewExperienceTelemetry::Show *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  const struct _TlgProvider_t *v8; // rax
  __int64 v9; // rcx
  const WCHAR *v10; // r15
  const struct _TlgProvider_t *v11; // rsi
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  const WCHAR *v14; // rcx
  __int64 v15; // r8
  const GUID *v16; // r9
  _QWORD *v17; // rbx
  _QWORD *v18; // rcx
  const struct _TlgProvider_t *v19; // r10
  __int64 v20; // rax
  int v21; // [rsp+38h] [rbp-91h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-81h] BYREF
  int *v23; // [rsp+68h] [rbp-61h]
  __int64 v24; // [rsp+70h] [rbp-59h]
  const WCHAR *v25; // [rsp+78h] [rbp-51h]
  int v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+84h] [rbp-45h]
  const WCHAR *v28; // [rsp+88h] [rbp-41h]
  int v29; // [rsp+90h] [rbp-39h]
  int v30; // [rsp+94h] [rbp-35h]
  int *v31; // [rsp+98h] [rbp-31h]
  __int64 v32; // [rsp+A0h] [rbp-29h]
  void **v33; // [rsp+A8h] [rbp-21h]
  __int64 v34; // [rsp+B0h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR v35; // [rsp+B8h] [rbp-11h] BYREF
  const WCHAR *v36; // [rsp+D8h] [rbp+Fh]
  int v37; // [rsp+E0h] [rbp+17h]
  int v38; // [rsp+E4h] [rbp+1Bh]
  int v39; // [rsp+140h] [rbp+77h] BYREF

  v39 = a4;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = SingleViewExperienceLogging::Provider();
  v10 = &word_18021F3A8;
  v11 = v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = 0x200000000000LL;
    if ( (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
    {
      LODWORD(v13) = GetCurrentThreadId();
      v24 = 4LL;
      v12 = &word_18021F3A8;
      v21 = v13;
      v23 = &v21;
      LODWORD(v13) = 0;
      if ( a2 )
      {
        v12 = a2;
        v13 = -1LL;
        do
          ++v13;
        while ( a2[v13] );
      }
      v25 = v12;
      v26 = 2 * v13 + 2;
      LODWORD(v13) = 0;
      v27 = 0;
      v14 = &word_18021F3A8;
      if ( a3 )
      {
        v14 = a3;
        v13 = -1LL;
        do
          ++v13;
        while ( a3[v13] );
      }
      v28 = v14;
      v29 = 2 * v13 + 2;
      v31 = &v39;
      v33 = &a5;
      v30 = 0;
      v32 = 4LL;
      v34 = 8LL;
      v15 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v15 + 4)
        || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
        && !*(_DWORD *)(v15 + 28)
        && !*(_DWORD *)(v15 + 32)
        && !*(_DWORD *)(v15 + 36) )
      {
        v16 = 0LL;
      }
      TlgWrite(v11, &unk_180268E53, (LPCGUID)(v15 + 8), v16, 7u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v17 = (_QWORD *)((char *)this + 8);
    v18 = wil::details::g_pThreadFailureCallbacks
        ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(v9, 1)
        : 0LL;
    *v17 = v18;
    if ( v18 )
    {
      *((_QWORD *)this + 3) = *v18;
      *v18 = v17;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
  if ( v39 != 2 )
  {
    v19 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v19 > 5u
      && (*((_QWORD *)v19 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v19 + 3) & 0x400000000000LL) == *((_QWORD *)v19 + 3) )
    {
      LODWORD(v20) = 0;
      if ( a3 )
      {
        v10 = a3;
        v20 = -1LL;
        do
          ++v20;
        while ( a3[v20] );
      }
      v36 = v10;
      v37 = 2 * v20 + 2;
      v38 = 0;
      TlgWrite(v19, &unk_180268E29, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &v35);
    }
  }
}
