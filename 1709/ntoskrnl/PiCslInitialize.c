/*
 * XREFs of PiCslInitialize @ 0x14086B50C
 * Callers:
 *     PiDmaGuardInitialize @ 0x140840328 (PiDmaGuardInitialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     IoRegisterContainerNotification @ 0x1405ED930 (IoRegisterContainerNotification.c)
 */

NTSTATUS __fastcall PiCslInitialize(__int64 a1, unsigned __int8 a2)
{
  NTSTATUS result; // eax
  _DWORD NotificationInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  PDRIVER_OBJECT v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+48h] [rbp-10h]
  __int64 CallbackRegistration; // [rsp+60h] [rbp+8h] BYREF

  CallbackRegistration = a1;
  PipCslUnlockCallback = (__int64)PipDmgConsoleUnlockCallback;
  PipCslAlwaysLocked = a2;
  PipCslConsoleLockState = 0;
  result = PoRegisterPowerSettingCallback(
             0LL,
             &GUID_CONSOLE_LOCKED,
             (PPOWER_SETTING_CALLBACK)PipCslPoCallback,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    NotificationInformation[1] = 0;
    v6 = 0LL;
    v4 = PnpDriverObject;
    NotificationInformation[0] = 32;
    v5 = 60;
    result = IoRegisterContainerNotification(
               IoSessionStateNotification,
               (PIO_CONTAINER_NOTIFICATION_FUNCTION)PipCslSessionCallback,
               NotificationInformation,
               0x20u,
               &CallbackRegistration);
    if ( result >= 0 )
      PipCslInitialized = 1;
  }
  return result;
}
