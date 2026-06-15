/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180027070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     WPP_SF_sd @ 0x180023D98 (WPP_SF_sd.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025D1C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180026568 (-TsSessionIdConnect@@YAXK@Z.c)
 */

void __fastcall TS_SessionChanged(unsigned int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // ebx
  struct TSSession *v3; // rbx
  void *v4; // rcx
  const char *v5; // r9
  const char *v6; // r9
  struct TSSession *v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  dwSessionId = a2->dwSessionId;
  switch ( a1 )
  {
    case 1u:
      goto LABEL_38;
    case 2u:
      goto LABEL_26;
    case 3u:
LABEL_38:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v6 = "WTS_REMOTE_CONNECT";
        if ( a1 == 1 )
          v6 = "WTS_CONSOLE_CONNECT";
        WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, a1, v6, a2->dwSessionId);
      }
      TsSessionIdConnect(dwSessionId);
      return;
    case 4u:
LABEL_26:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v5 = "WTS_REMOTE_DISCONNECT";
        if ( a1 == 2 )
          v5 = "WTS_CONSOLE_DISCONNECT";
        WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, a1, v5, a2->dwSessionId);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      if ( !(unsigned int)TsSessionFromSessionId(dwSessionId, 0, &v8, &v7) && *((_DWORD *)v7 + 1) )
        TsSessionUpdateAudioProtocol(v7, v8, 0xFFFF);
      goto LABEL_35;
  }
  if ( a1 != 5 )
  {
    if ( a1 != 6 )
    {
      if ( a1 == 11 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Du,
            &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids,
            dwSessionId);
        }
        TsSessionIdTerminate(dwSessionId);
      }
      return;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids,
        dwSessionId);
    }
    v7 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( !(unsigned int)TsSessionFromSessionId(dwSessionId, 0, &v8, &v7) )
    {
      v3 = v7;
      *((_DWORD *)v7 + 74) = 0;
      v4 = (void *)*((_QWORD *)v3 + 29);
      if ( v4 )
      {
        PowerSettingUnregisterNotification(v4);
        *((_QWORD *)v3 + 29) = 0LL;
      }
      *((_DWORD *)v3 + 57) = 1;
    }
LABEL_35:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    return;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, dwSessionId);
  }
  TsSessionIdLogon(dwSessionId);
}
