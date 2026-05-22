/*
 * XREFs of ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x180068AB8
 * Callers:
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x180068B88 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180068C8C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogSpeechRuntimeListenerFunct_(ISMTracing *this, const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  const wchar_t *v5; // rdx
  __int64 v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    v4 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v5 = &word_1800DF514;
      LODWORD(v6) = 0;
      if ( a2 )
      {
        v5 = a2;
        v6 = -1LL;
        do
          ++v6;
        while ( a2[v6] );
      }
      v8 = v5;
      v9 = 2 * v6 + 2;
      v10 = 0;
      TlgWrite((TraceLoggingHProvider)v4, &unk_1800EF446, 0LL, 0LL, 3u, &pData);
    }
  }
}
