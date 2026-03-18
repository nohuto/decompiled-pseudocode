/*
 * XREFs of CiLogSchedulerWakeup @ 0x1C0001924
 * Callers:
 *     CiSchedulerSleep @ 0x1C000324C (CiSchedulerSleep.c)
 *     CiSchedulerThreadFunction @ 0x1C00035A0 (CiSchedulerThreadFunction.c)
 *     CiSchedulerWait @ 0x1C00038B4 (CiSchedulerWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001130 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogSchedulerWakeup(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  UserData.Ptr = (ULONGLONG)&v3;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &UserData);
}
