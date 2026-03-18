/*
 * XREFs of PopDiagTraceFxDeviceUnregistration @ 0x1406CD5E0
 * Callers:
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceUnregistration(__int64 a1)
{
  REGHANDLE v1; // rbx
  __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  v2 = a1;
  PopFxAddLogEntry(a1, 0, 2, 0LL);
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWrite(v1, &POP_ETW_EVENT_DEVICE_UNREGISTRATION, 0LL, 1u, &UserData);
    }
  }
}
