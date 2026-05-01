/*
 * XREFs of ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z @ 0x1801D59A4
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801D1350 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801D5ED4 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::StartActivity(
        SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // r14
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  const WCHAR *v11; // rdx
  __int64 v12; // r8
  const GUID *v13; // r9
  char *v14; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  const WCHAR *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  const WCHAR *v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  int *v26; // [rsp+90h] [rbp+17h]
  __int64 v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+F8h] [rbp+7Fh] BYREF

  v28 = a4;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v8 > 5u && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0 )
  {
    v7 = *((_QWORD *)v8 + 3) & 0x200000000000LL;
    if ( v7 == *((_QWORD *)v8 + 3) )
    {
      v19 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v9 = &word_18021F3A8;
      LODWORD(v10) = 0;
      v11 = &word_18021F3A8;
      if ( a2 )
      {
        v11 = a2;
        v10 = -1LL;
        do
          ++v10;
        while ( a2[v10] );
      }
      v20 = v11;
      v21 = 2 * v10 + 2;
      LODWORD(v10) = 0;
      v22 = 0;
      if ( a3 )
      {
        v9 = a3;
        v10 = -1LL;
        do
          ++v10;
        while ( a3[v10] );
      }
      v23 = v9;
      v24 = 2 * v10 + 2;
      v26 = &v28;
      v25 = 0;
      v27 = 4LL;
      v12 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v12 + 4)
        || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
        && !*(_DWORD *)(v12 + 28)
        && !*(_DWORD *)(v12 + 32)
        && !*(_DWORD *)(v12 + 36) )
      {
        v13 = 0LL;
      }
      TlgWrite(v8, &unk_180268EF3, (LPCGUID)(v12 + 8), v13, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v14 = (char *)this + 8;
    if ( *((_DWORD *)v14 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v7,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v14 = Local;
    if ( Local )
    {
      *((_QWORD *)v14 + 2) = *Local;
      *Local = v14;
      *((_DWORD *)v14 + 6) = GetCurrentThreadId();
    }
  }
}
