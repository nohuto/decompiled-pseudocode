/*
 * XREFs of CiLogTaskIndexCancelYield @ 0x1C0004194
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0001C00 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexCancelYield(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &CiTaskIndexYieldCancelEvent, 0LL, 1u, &UserData);
}
