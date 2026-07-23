/*
 * XREFs of TpWaitForIoCompletion @ 0x180082D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180108770 @ 0x180108770 (sub_180108770.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  __int64 v4; // rcx

  if ( (unsigned int)sub_180025900((PPEB_LDR_DATA)Io, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
      CancelPendingCallbacks = _InterlockedExchange((volatile __int32 *)Io + 70, 0);
    sub_180055584((_RTL_SRWLOCK *)Io + 7, -CancelPendingCallbacks, 1);
    if ( CancelPendingCallbacks )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      else
        v4 = 2147353478LL;
      if ( *(_BYTE *)v4 )
        sub_180108770(
          *((_QWORD *)Io + 18),
          (_DWORD)Io + 200,
          (_DWORD)Io + 80,
          *((_QWORD *)Io + 11),
          *((_QWORD *)Io + 13),
          CancelPendingCallbacks);
    }
  }
}
