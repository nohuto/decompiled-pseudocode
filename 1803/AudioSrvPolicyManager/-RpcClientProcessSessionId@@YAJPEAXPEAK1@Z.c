/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800248D4
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x180021820 (PbmReportAppInteractivityChange.c)
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800218A0 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     PbmReportHostedAppStateChange @ 0x1800218F0 (PbmReportHostedAppStateChange.c)
 *     PbmReportAppClosing @ 0x180021980 (PbmReportAppClosing.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800219F0 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180022870 (PbmReportApplicationState.c)
 *     PbmLaunchBackgroundTask @ 0x180022950 (PbmLaunchBackgroundTask.c)
 *     TS_SessionGetAudioProtocol @ 0x180027540 (TS_SessionGetAudioProtocol.c)
 *     TS_RegisterAudioProtocolNotification @ 0x1800275F0 (TS_RegisterAudioProtocolNotification.c)
 *     TS_UnregisterAudioProtocolNotification @ 0x180027650 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x18000BA08 (WPP_SF_dd.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001A258 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     WPP_SF_q @ 0x1800201C8 (WPP_SF_q.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 */

__int64 __fastcall RpcClientProcessSessionId(RPC_BINDING_HANDLE BindingHandle, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rdx
  int v7; // r14d
  unsigned int LastError; // ebx
  int v9; // esi
  HANDLE CurrentThread; // rax
  unsigned int v11; // eax
  unsigned int *v13; // [rsp+20h] [rbp-79h]
  unsigned int v14; // [rsp+30h] [rbp-69h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-61h] BYREF
  _DWORD RpcCallAttributes[16]; // [rsp+40h] [rbp-59h] BYREF
  int v17; // [rsp+80h] [rbp-19h]

  memset_0(RpcCallAttributes, 0, 0x70uLL);
  TokenHandle = 0LL;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, BindingHandle);
  }
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  LastError = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  if ( !LastError )
  {
    v9 = v17;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, v17);
    }
    LastError = RpcImpersonateClient(BindingHandle);
    if ( !LastError )
    {
      v7 = 1;
      CurrentThread = GetCurrentThread();
      if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
      {
        LastError = GetLastError();
        goto LABEL_19;
      }
      LastError = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &v14);
      if ( !LastError )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          LODWORD(v13) = v14;
          WPP_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            LastError + 13,
            &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids,
            v9,
            v13);
        }
        v11 = v14;
        *a2 = v9;
        *a3 = v11;
LABEL_19:
        if ( !LastError )
          goto LABEL_24;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, LastError);
  }
LABEL_24:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v7 )
    RpcRevertToSelf();
  return LastError;
}
