/*
 * XREFs of RaidSecondaryDumpRegister @ 0x1C001C268
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSecondaryDumpRegister(__int64 a1)
{
  __int64 result; // rax

  if ( SecondaryDumpCallbackRegistered )
    return 3221225473LL;
  BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
  if ( KeRegisterBugCheckReasonCallback(
         (PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.DeviceExtension,
         RaidStandardSecondaryDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"PortDriverStandard") != 1 )
    return 3221225473LL;
  SecondaryDumpCallbackRegistered = 1;
  result = 0LL;
  BootDriveExtension = a1;
  return result;
}
