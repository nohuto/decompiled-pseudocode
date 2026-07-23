/*
 * XREFs of sub_180010150 @ 0x180010150
 * Callers:
 *     <none>
 * Callees:
 *     TpReleaseWait @ 0x1800135B0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall sub_180010150(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  ULONG ReturnLength; // [rsp+30h] [rbp-20h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-18h] BYREF
  PTP_WAIT WaitReturn; // [rsp+40h] [rbp-10h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+28h] BYREF

  WaitReturn = 0LL;
  EventHandle = 0LL;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
  {
    if ( TpAllocWait(&WaitReturn, sub_180052270, EventHandle, 0LL) >= 0 )
    {
      TpSetWaitEx(WaitReturn, EventHandle, 0LL, 0LL);
      InputBuffer = (int)EventHandle;
      if ( ZwTraceControl(EtwAddNotificationEvent, &InputBuffer, 4u, 0LL, 0, &ReturnLength) >= 0 )
        return 1LL;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return 0LL;
}
