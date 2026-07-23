/*
 * XREFs of RtlUpdateTimer @ 0x180056890
 * Callers:
 *     <none>
 * Callees:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 */

NTSTATUS __cdecl RtlUpdateTimer(HANDLE TimerQueueHandle, HANDLE TimerHandle, ULONG DueTime, ULONG Period)
{
  __int64 v5; // r14
  NTSTATUS v7; // edi
  HANDLE v9; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER DueTimea; // [rsp+28h] [rbp-10h] BYREF

  v5 = DueTime;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerHandle )
    return -1073741584;
  if ( (*((_DWORD *)TimerHandle + 12) & 1) != 0 )
    return -1073741816;
  v7 = sub_180058F2C(&v9);
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
    if ( *((_BYTE *)TimerHandle + 88) || !*((_DWORD *)TimerHandle + 23) )
    {
      *((_BYTE *)TimerHandle + 88) = Period != 0;
      DueTimea.QuadPart = -10000 * v5;
      TpSetTimerEx(*((PTP_TIMER *)TimerHandle + 8), &DueTimea, Period, 0);
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
    v7 = 0;
  }
  sub_1800588B4(v9);
  return v7;
}
