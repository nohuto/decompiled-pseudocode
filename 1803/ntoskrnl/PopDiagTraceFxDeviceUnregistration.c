/*
 * XREFs of PopDiagTraceFxDeviceUnregistration @ 0x140767BCC
 * Callers:
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceUnregistration(__int64 a1)
{
  REGHANDLE v1; // rbx
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

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
