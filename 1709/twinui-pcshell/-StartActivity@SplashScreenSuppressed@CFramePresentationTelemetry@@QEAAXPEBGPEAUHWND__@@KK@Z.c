/*
 * XREFs of ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x18006F980
 * Callers:
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x1800678B8 (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001DD3C (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
        CFramePresentationTelemetry::SplashScreenSuppressed *this,
        const unsigned __int16 *a2,
        HWND a3,
        int a4,
        char a5)
{
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rsi
  const WCHAR *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  const GUID *v13; // r9
  char *v14; // rbx
  _QWORD *Local; // rcx
  int v16; // [rsp+30h] [rbp-61h] BYREF
  HWND v17; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  int *v19; // [rsp+60h] [rbp-31h]
  __int64 v20; // [rsp+68h] [rbp-29h]
  const WCHAR *v21; // [rsp+70h] [rbp-21h]
  int v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+7Ch] [rbp-15h]
  HWND *v24; // [rsp+80h] [rbp-11h]
  __int64 v25; // [rsp+88h] [rbp-9h]
  int *v26; // [rsp+90h] [rbp-1h]
  __int64 v27; // [rsp+98h] [rbp+7h]
  char *v28; // [rsp+A0h] [rbp+Fh]
  __int64 v29; // [rsp+A8h] [rbp+17h]
  int v30; // [rsp+108h] [rbp+77h] BYREF

  v30 = a4;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v9 > 5u && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0 )
  {
    v8 = *((_QWORD *)v9 + 3) & 0x400000000000LL;
    if ( v8 == *((_QWORD *)v9 + 3) )
    {
      LODWORD(v11) = GetCurrentThreadId();
      v20 = 4LL;
      v10 = &word_18021F3A8;
      v16 = v11;
      v19 = &v16;
      LODWORD(v11) = 0;
      if ( a2 )
      {
        v10 = a2;
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
      }
      v21 = v10;
      v22 = 2 * v11 + 2;
      v24 = &v17;
      v26 = &v30;
      v28 = &a5;
      v23 = 0;
      v17 = a3;
      v25 = 8LL;
      v27 = 4LL;
      v29 = 4LL;
      v12 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v12 + 4)
        || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
        && !*(_DWORD *)(v12 + 28)
        && !*(_DWORD *)(v12 + 32)
        && !*(_DWORD *)(v12 + 36) )
      {
        v13 = 0LL;
      }
      TlgWrite(v9, &unk_1802577AE, (LPCGUID)(v12 + 8), v13, 7u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v14 = (char *)this + 8;
    if ( *((_DWORD *)v14 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
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
