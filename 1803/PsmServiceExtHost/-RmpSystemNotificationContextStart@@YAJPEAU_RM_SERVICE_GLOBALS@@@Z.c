/*
 * XREFs of ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003911C
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800384A0 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemNotificationContextStart(HPOWERNOTIFY *a1)
{
  HPOWERNOTIFY *v1; // rbx
  __int64 result; // rax
  _QWORD Recipient[3]; // [rsp+40h] [rbp-18h] BYREF

  v1 = a1 + 75;
  Recipient[1] = a1;
  Recipient[0] = RmpSystemNotificationPowerCallback;
  if ( PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 2u, Recipient, a1 + 75)
    || PowerSettingRegisterNotification(&GUID_GLOBAL_USER_PRESENCE, 2u, Recipient, v1 + 1) )
  {
    return 3221225473LL;
  }
  result = RtlSubscribeWnfStateChangeNotification(
             v1 + 3,
             WNF_SHEL_FOCUS_CHANGE,
             0LL,
             RmpSystemNotificationInputFocusChangeCallback,
             a1,
             0LL,
             0,
             0);
  if ( (int)result >= 0 )
  {
    result = RtlSubscribeWnfStateChangeNotification(
               v1 + 5,
               WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE,
               0LL,
               RmpSystemNotificationInputFocusChangeCallback,
               a1,
               0LL,
               0,
               0);
    if ( (int)result >= 0 )
    {
      result = RtlSubscribeWnfStateChangeNotification(
                 v1 + 4,
                 WNF_HOLO_INPUT_FOCUS_CHANGE,
                 0LL,
                 RmpSystemNotificationInputFocusChangeCallback,
                 a1,
                 0LL,
                 0,
                 0);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
