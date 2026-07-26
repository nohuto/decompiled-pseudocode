/*
 * XREFs of WdmlibInit @ 0x1C00C7084
 * Callers:
 *     WdmlibIoCreateDeviceSecure @ 0x1C00C6C4C (WdmlibIoCreateDeviceSecure.c)
 * Callees:
 *     <none>
 */

PVOID WdmlibInit()
{
  PVOID result; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"IoCreateDeviceSecure");
  PfnIoCreateDeviceSecure = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !PfnIoCreateDeviceSecure )
    PfnIoCreateDeviceSecure = (__int64)IoDevObjCreateDeviceSecure;
  RtlInitUnicodeString(&DestinationString, L"IoValidateDeviceIoControlAccess");
  result = MmGetSystemRoutineAddress(&DestinationString);
  WdmlibInitialized = 1;
  return result;
}
