/*
 * XREFs of TppSetTimer @ 0x18000FBB4
 * Callers:
 *     TpSetTimerEx @ 0x18000F800 (TpSetTimerEx.c)
 *     TppSetupNextWait @ 0x180010608 (TppSetupNextWait.c)
 * Callees:
 *     TppETWTimerSet @ 0x180001D78 (TppETWTimerSet.c)
 *     TppUpdateSubQueueTimer @ 0x18000FCF0 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18000FE68 (TppEnqueueTimer.c)
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180078CE0 (RtlNtStatusToDosErrorNoTeb.c)
 */

void __fastcall TppSetTimer(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  bool v7; // bp
  __int64 v9; // rsi
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  LONG v15; // eax

  v7 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  *(_DWORD *)(a1 + 344) = a5;
  v9 = (__int64)&a2[16] + (-(__int64)v7 & 0xFFFFFFFFFFFFFF88uLL);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v14 = *a3;
    if ( !*a3 )
      v14 = 1LL;
    *(_QWORD *)(a1 + 328) = v14;
  }
  else
  {
    v10 = (__int64 *)(a1 + 328);
    if ( a1 == -328 )
    {
      v15 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v15);
    }
    else
    {
      *v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    v11 = *v10 - *a3;
    if ( v11 < *v10 )
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    *v10 = v11;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v12 = 2147353478LL;
  if ( *(_BYTE *)v12 )
    TppETWTimerSet(v9, a1);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v9, a1);
  LOBYTE(v13) = v7;
  TppUpdateSubQueueTimer(v9, v13);
  RtlReleaseSRWLockExclusive(a2);
}
