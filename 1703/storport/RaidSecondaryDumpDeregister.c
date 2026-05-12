/*
 * XREFs of RaidSecondaryDumpDeregister @ 0x1C00464E4
 * Callers:
 *     RaidDeleteUnit @ 0x1C0013250 (RaidDeleteUnit.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 * Callees:
 *     <none>
 */

__int64 RaidSecondaryDumpDeregister()
{
  __int64 result; // rax

  if ( SecondaryDumpCallbackRegistered
    && KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.DeviceExtension) != 1 )
  {
    return 3221225473LL;
  }
  BootDriveExtension = 0LL;
  result = 0LL;
  SecondaryDumpCallbackRegistered = 0;
  return result;
}
