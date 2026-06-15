/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BF7C
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001C08C (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001D1E8 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18001D3A4 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     WPP_SF_dd @ 0x180006D44 (WPP_SF_dd.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18001BF08 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 */

void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  int *v1; // rax
  _QWORD *v3; // rcx
  int *v4; // rdx
  int v5; // edi
  int v6; // [rsp+20h] [rbp-18h]

  v1 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    v3 = qword_18003AE48;
    while ( v3 )
    {
      v4 = (int *)v3[2];
      v3 = (_QWORD *)*v3;
      if ( *v4 && v4[76] )
      {
        v1 = v4;
        break;
      }
    }
    if ( v1 != (int *)a1 )
    {
      v5 = -2;
      if ( v1 )
      {
        v1[76] = 0;
        v5 = *v1;
        if ( g_MaxSessions <= 1 )
          v1[13] = 1;
      }
      *((_DWORD *)a1 + 13) = 0;
      *((_DWORD *)a1 + 76) = 1;
      if ( g_MaxSessions <= 1 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v6 = *(_DWORD *)a1;
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_20b02ace39a33070fb42b5dc2503046a_Traceguids, v5, v6);
        }
        if ( (int)QueueSessionMuteUnmute(v5, *(_DWORD *)a1) < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_20b02ace39a33070fb42b5dc2503046a_Traceguids);
        }
      }
    }
  }
}
