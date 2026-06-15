/*
 * XREFs of ?TsSessionIdConnect@@YAXK@Z @ 0x180026568
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180027070 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180025224 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18002528C (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180025300 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025D1C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002A234 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

void __fastcall TsSessionIdConnect(DWORD a1)
{
  int TsAudioProtocol; // edi
  struct TSSession *v3; // rbx
  _UNKNOWN **v4; // rcx
  struct TSSession *v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  TsAudioProtocol = GetTsAudioProtocol(a1);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( (unsigned int)TsSessionFromSessionId(a1, 1, &v6, &v5) )
    goto LABEL_27;
  v3 = v5;
  TsSessionRefreshSessionInformation(v5);
  TsSessionUpdateAudioProtocol(v3, v6, TsAudioProtocol);
  if ( *((_QWORD *)v3 + 5) != -130LL && *(_WORD *)(*((_QWORD *)v3 + 5) + 130LL) )
    goto LABEL_13;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids,
      *(_DWORD *)v3);
  }
  *((_DWORD *)v3 + 13) = 0;
  *((_DWORD *)v3 + 76) = 0;
  if ( (int)QueueSessionMuteUnmute(-1, *(_DWORD *)v3) >= 0 )
    goto LABEL_13;
  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids,
      *(_DWORD *)v3);
LABEL_13:
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( TsAudioProtocol )
  {
    if ( TsAudioProtocol != 0xFFFF )
    {
      if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
        WPP_SF_D((TRACEHANDLE)v4[2], 0x20u, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, *(_DWORD *)v3);
      *((_DWORD *)v3 + 13) = 0;
      *((_DWORD *)v3 + 76) = 0;
      if ( (int)QueueSessionMuteUnmute(-1, *(_DWORD *)v3) < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x21u,
          &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids,
          *(_DWORD *)v3);
      }
    }
  }
  else if ( *(_QWORD *)(*((_QWORD *)v3 + 5) + 200LL) )
  {
    TsSessionNewPrimaryConsoleAudioSession(v3);
  }
LABEL_27:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
