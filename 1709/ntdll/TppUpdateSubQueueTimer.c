/*
 * XREFs of TppUpdateSubQueueTimer @ 0x18000FCF0
 * Callers:
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18000FBB4 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x180010418 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x180001D10 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerCancelNtTimer @ 0x180002BAC (TppETWTimerCancelNtTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x1800A12D0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A3530 (ZwSetTimer2.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2)
{
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER DueTime; // [rsp+20h] [rbp-28h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+28h] [rbp-20h] BYREF

  Parameters.Version = 0;
  v3 = *(_QWORD *)(a1 + 16);
  Parameters.NoWakeTolerance = 0LL;
  if ( v3 )
  {
    v4 = *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 8) + 32LL);
    v5 = (*(_QWORD *)(v3 + 32) - v4.QuadPart) / 10000;
    if ( *(_QWORD *)a1 == v4.QuadPart && *(_DWORD *)(a1 + 112) == (_DWORD)v5 )
      return;
    *(LARGE_INTEGER *)a1 = v4;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)v5;
    *(_DWORD *)(a1 + 112) = v5;
    if ( !a2 )
    {
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      if ( v6 <= v4.QuadPart )
      {
        v4.QuadPart = v6 - v4.QuadPart;
        DueTime = v4;
LABEL_8:
        if ( RtlGetCurrentServiceSessionId() )
        {
          v4 = DueTime;
          v7 = (__int64)NtCurrentPeb()->SharedData + 556;
        }
        else
        {
          v7 = 2147353478LL;
        }
        if ( *(_BYTE *)v7 )
          TppETWTimerSetNtTimer(a1, v4.QuadPart, v5);
        ZwSetTimer2(*(HANDLE *)(a1 + 24), &DueTime, 0LL, &Parameters);
        return;
      }
      v4.QuadPart = 0LL;
    }
    DueTime = v4;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(HANDLE *)(a1 + 24), 0LL);
  }
}
