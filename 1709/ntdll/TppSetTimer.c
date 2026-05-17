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

__int64 __fastcall TppSetTimer(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v6; // rcx
  bool v8; // bp
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax

  v6 = 1LL;
  v8 = *a3 >= 0;
  v9 = a2;
  *(_DWORD *)(a1 + 348) = a4;
  *(_DWORD *)(a1 + 344) = a5;
  v10 = (-(__int64)v8 & 0xFFFFFFFFFFFFFF88uLL) + a2 + 128;
  if ( v8 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v16 = *a3;
    if ( !*a3 )
      v16 = 1LL;
    *(_QWORD *)(a1 + 328) = v16;
  }
  else
  {
    v11 = (__int64 *)(a1 + 328);
    if ( a1 == -328 )
    {
      v17 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v17);
    }
    else
    {
      a2 = RtlpFreezeTimeBias;
      *v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    v12 = *v11 - *a3;
    if ( v12 < *v11 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    *v11 = v12;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    TppETWTimerSet(v10, a1);
  RtlAcquireSRWLockExclusive(v9);
  TppEnqueueTimer(v10, a1);
  LOBYTE(v14) = v8;
  TppUpdateSubQueueTimer(v10, v14);
  return RtlReleaseSRWLockExclusive(v9);
}
