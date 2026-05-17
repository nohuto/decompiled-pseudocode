/*
 * XREFs of RtlLocalTimeToSystemTime @ 0x1800E4B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

NTSTATUS __stdcall RtlLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  NTSTATUS result; // eax
  __int64 v5; // [rsp+30h] [rbp-38h]

  result = ZwQuerySystemInformation();
  if ( result >= 0 )
  {
    SystemTime->QuadPart = v5 + LocalTime->QuadPart;
    return 0;
  }
  return result;
}
