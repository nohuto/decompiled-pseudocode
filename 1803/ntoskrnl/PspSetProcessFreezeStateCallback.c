/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x14008A720
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerResume @ 0x14008A0C0 (ExpTimerResume.c)
 *     ExpTimerPause @ 0x1400C9404 (ExpTimerPause.c)
 *     PspRequestProcessExecutionState @ 0x140532010 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  KSPIN_LOCK *v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // rsi
  __int64 v8; // r12
  _QWORD *v9; // rbp
  KIRQL v11; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 944);
  if ( (*(_DWORD *)(a1 + 772) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 772) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1304) & 0x40000) != 0
    && (**(_DWORD **)a2 & 1) != 0
    && *(_DWORD *)(v2 + 856) <= 1u )
  {
    v5 = (KSPIN_LOCK *)(a1 + 2016);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2016));
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = *(_QWORD **)(a1 + 2024);
    if ( v7 != (_QWORD *)(a1 + 2024) )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      do
      {
        v9 = v7 - 36;
        if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
        {
          ExpTimerPause(v7 - 36, v8, v6, 0LL);
        }
        else
        {
          KxAcquireSpinLock(v9 + 8);
          ExpTimerResume((PKTIMER)(v7 - 36), v6);
          KxReleaseSpinLock(v9 + 8);
        }
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != (_QWORD *)(a1 + 2024) );
      v5 = (KSPIN_LOCK *)(a1 + 2016);
    }
    KxReleaseSpinLock(v5);
    __writecr8(v11);
  }
  PspRequestProcessExecutionState(a1, a2[2], 0LL);
  return 0LL;
}
