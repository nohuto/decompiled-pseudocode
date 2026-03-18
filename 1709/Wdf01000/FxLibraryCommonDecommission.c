/*
 * XREFs of FxLibraryCommonDecommission @ 0x1C007355C
 * Callers:
 *     LibraryDecommission @ 0x1C00659C0 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C00739E8 (McGenEventUnregister.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  unsigned __int64 *v0; // rcx
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *); // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( FxLibraryGlobals.InternalTracingInitialized )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    FxLibraryGlobals.InternalTracingInitialized = 0;
  }
  EtwUnregister(Tlgg_TelemetryProviderProv.RegHandle);
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  McGenEventUnregister(v0);
  if ( FxLibraryGlobals.DriverTracker.m_PoolToFree )
  {
    ExFreePoolWithTag(FxLibraryGlobals.DriverTracker.m_PoolToFree, 0);
    FxLibraryGlobals.DriverTracker.m_PoolToFree = 0LL;
  }
  FxLibraryGlobals.DriverTracker.m_DriverUsage = 0LL;
  FxLibraryGlobals.DriverTracker.m_Number = 0;
  if ( FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine )
  {
    RtlInitUnicodeString(&DestinationString, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *))MmGetSystemRoutineAddress(&DestinationString);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(&FxLibraryGlobals.BugCheckCallbackRecord);
      FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine = 0LL;
      if ( FxLibraryGlobals.BugCheckDriverInfo )
      {
        *(_QWORD *)&FxLibraryGlobals.BugCheckDriverInfoIndex = 0LL;
        ExFreePoolWithTag(FxLibraryGlobals.BugCheckDriverInfo, 0);
        FxLibraryGlobals.BugCheckDriverInfo = 0LL;
      }
    }
  }
  FxLibraryGlobals.FxDriverGlobalsListLock.m_DbgFlagIsInitialized = 0;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
