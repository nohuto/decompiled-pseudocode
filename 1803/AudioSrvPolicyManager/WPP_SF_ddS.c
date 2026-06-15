/*
 * XREFs of WPP_SF_ddS @ 0x18000BA4C
 * Callers:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000C190 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_ddS(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  v9 = L"NULL";
  if ( a6 )
    v9 = a6;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_32edceac6d05362bf9e379e253568d16_Traceguids,
           0xEu,
           &v11,
           4LL,
           &a5,
           4LL,
           v9,
           2 * v8,
           0LL);
}
