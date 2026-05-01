/*
 * XREFs of ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x1801D5390
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D1AF0 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801D5ED4 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        bool a5,
        bool a6,
        bool a7)
{
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // r14
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  const WCHAR *v14; // rcx
  __int64 v15; // r8
  const GUID *v16; // r9
  char *v17; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-91h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-81h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-61h]
  __int64 v22; // [rsp+68h] [rbp-59h]
  const WCHAR *v23; // [rsp+70h] [rbp-51h]
  int v24; // [rsp+78h] [rbp-49h]
  int v25; // [rsp+7Ch] [rbp-45h]
  const WCHAR *v26; // [rsp+80h] [rbp-41h]
  int v27; // [rsp+88h] [rbp-39h]
  int v28; // [rsp+8Ch] [rbp-35h]
  int *v29; // [rsp+90h] [rbp-31h]
  __int64 v30; // [rsp+98h] [rbp-29h]
  bool *v31; // [rsp+A0h] [rbp-21h]
  __int64 v32; // [rsp+A8h] [rbp-19h]
  bool *v33; // [rsp+B0h] [rbp-11h]
  __int64 v34; // [rsp+B8h] [rbp-9h]
  bool *v35; // [rsp+C0h] [rbp-1h]
  __int64 v36; // [rsp+C8h] [rbp+7h]
  int v37; // [rsp+128h] [rbp+67h] BYREF

  v37 = a4;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v11 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v11 > 5u && (*((_QWORD *)v11 + 2) & 0x200000000000LL) != 0 )
  {
    v10 = *((_QWORD *)v11 + 3) & 0x200000000000LL;
    if ( v10 == *((_QWORD *)v11 + 3) )
    {
      v22 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v12 = &word_18021F3A8;
      LODWORD(v13) = 0;
      v14 = &word_18021F3A8;
      if ( a2 )
      {
        v14 = a2;
        v13 = -1LL;
        do
          ++v13;
        while ( a2[v13] );
      }
      v23 = v14;
      v24 = 2 * v13 + 2;
      LODWORD(v13) = 0;
      v25 = 0;
      if ( a3 )
      {
        v12 = a3;
        v13 = -1LL;
        do
          ++v13;
        while ( a3[v13] );
      }
      v26 = v12;
      v27 = 2 * v13 + 2;
      v29 = &v37;
      v31 = &a5;
      v33 = &a6;
      v35 = &a7;
      v28 = 0;
      v30 = 4LL;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 1LL;
      v15 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v15 + 4)
        || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
        && !*(_DWORD *)(v15 + 28)
        && !*(_DWORD *)(v15 + 32)
        && !*(_DWORD *)(v15 + 36) )
      {
        v16 = 0LL;
      }
      TlgWrite(v11, &unk_180268D77, (LPCGUID)(v15 + 8), v16, 9u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v17 = (char *)this + 8;
    if ( *((_DWORD *)v17 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v10,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v17 = Local;
    if ( Local )
    {
      *((_QWORD *)v17 + 2) = *Local;
      *Local = v17;
      *((_DWORD *)v17 + 6) = GetCurrentThreadId();
    }
  }
}
