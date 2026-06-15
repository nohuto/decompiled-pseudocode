/*
 * XREFs of McTemplateU0dsdp @ 0x180021C98
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180020F5C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ?Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ @ 0x180021F28 (-Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ.c)
 *     ?InitializeForUserSession@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x1800220E0 (-InitializeForUserSession@CVolumeLimitTrackerImpl@@UEAAJXZ.c)
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x1800225E0 (-StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x180022760 (-UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ.c)
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x1800229B8 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     ?IsEndpointTracked@CVolumeLimitTrackerImpl@@IEAAHPEBG@Z @ 0x180022C28 (-IsEndpointTracked@CVolumeLimitTrackerImpl@@IEAAHPEBG@Z.c)
 *     ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x180022D80 (-ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     ?SetRegValueDWORD@CVolumeLimitTrackerImpl@@KAJPEAUHKEY__@@PEBGK@Z @ 0x180022F6C (-SetRegValueDWORD@CVolumeLimitTrackerImpl@@KAJPEAUHKEY__@@PEBGK@Z.c)
 *     ??1CDriverListener@@UEAA@XZ @ 0x180023294 (--1CDriverListener@@UEAA@XZ.c)
 *     ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x180023338 (-SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800233B8 (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ?Initialize@CTrackedEndpoint@@QEAAJPEBG@Z @ 0x180023A64 (-Initialize@CTrackedEndpoint@@QEAAJPEBG@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18000B3A4 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0dsdp(__int64 a1, EVENT_DESCRIPTOR *a2, int a3, const char *a4, char a5, char a6)
{
  __int64 v6; // rcx
  int v7; // ecx
  const char *v8; // rax
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+20h] [rbp-60h] BYREF
  int *v11; // [rsp+30h] [rbp-50h]
  __int64 v12; // [rsp+38h] [rbp-48h]
  const char *v13; // [rsp+40h] [rbp-40h]
  int v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+4Ch] [rbp-34h]
  char *v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  char *v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = a3;
  v12 = 4LL;
  v11 = &v20;
  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5;
  }
  v14 = v7;
  v15 = 0;
  v8 = "NULL";
  if ( a4 )
    v8 = a4;
  v17 = 4LL;
  v13 = v8;
  v19 = 8LL;
  v16 = &a5;
  v18 = &a6;
  return McGenEventWriteUM(MICROSOFT_WINDOWS_EUVOLUMEPOLICY_Context, a2, 5u, &v10);
}
