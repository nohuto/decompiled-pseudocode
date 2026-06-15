/*
 * XREFs of WPP_SF_dddS @ 0x180006E24
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800077C0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dddS(
        TRACEHANDLE LoggerHandle,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  v10 = L"NULL";
  if ( a7 )
    v10 = a7;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
           0x15u,
           &v12,
           4LL,
           &a5,
           4LL,
           &a6,
           4LL,
           v10,
           2 * v9,
           0LL);
}
