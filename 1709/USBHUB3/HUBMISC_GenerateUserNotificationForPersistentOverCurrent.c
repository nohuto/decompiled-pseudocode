/*
 * XREFs of HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C006E554
 * Callers:
 *     HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x1C000EDE0 (HUBPSM20_NotifyingUserAboutPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C000CC70 (WPP_RECORDER_SF_qqd.c)
 *     WMI_FireNotification @ 0x1C0075028 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBMISC_GenerateUserNotificationForPersistentOverCurrent(__int64 a1)
{
  int v3; // [rsp+38h] [rbp-10h]

  _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 4u);
  v3 = *(unsigned __int16 *)(a1 + 200);
  WPP_RECORDER_SF_qqd(
    *(_QWORD *)(a1 + 1432),
    2u,
    4u,
    0x6Eu,
    (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
    *(_QWORD *)a1,
    a1,
    v3);
  return WMI_FireNotification(*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 200), 3LL);
}
