/*
 * XREFs of Template_x @ 0x1C004FF0C
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0051340 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS Template_x(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  return EtwWrite(
           Microsoft_Windows_NDISHandle,
           &ExitingConnectedStandby,
           &GUID_00000000_0000_0000_0000_000000000000,
           1u,
           &v4);
}
