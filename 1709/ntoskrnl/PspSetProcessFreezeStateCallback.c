/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x1400D3230
 * Callers:
 *     <none>
 * Callees:
 *     ExpTimerResume @ 0x14000C394 (ExpTimerResume.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x1400D3370 (ExpTimerPause.c)
 *     PspRequestProcessExecutionState @ 0x14050D8F0 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  KSPIN_LOCK *v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // r14
  __int64 v8; // r12
  KIRQL v10; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 944);
  if ( (*(_DWORD *)(a1 + 772) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 772) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1304) & 0x40000) != 0
    && (**(_DWORD **)a2 & 1) != 0
    && *(_DWORD *)(v2 + 856) <= 1u )
  {
    v5 = (KSPIN_LOCK *)(a1 + 2016);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2016));
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = *(_QWORD **)(a1 + 2024);
    if ( v7 != (_QWORD *)(a1 + 2024) )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      do
      {
        if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
        {
          ExpTimerPause(v7 - 36, v8, v6, 0LL);
        }
        else
        {
          KxAcquireSpinLock(v7 - 28);
          ExpTimerResume((PKTIMER)(v7 - 36), v6);
          KxReleaseSpinLock(v7 - 28);
        }
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != (_QWORD *)(a1 + 2024) );
      v5 = (KSPIN_LOCK *)(a1 + 2016);
    }
    KxReleaseSpinLock(v5);
    __writecr8(v10);
  }
  PspRequestProcessExecutionState(a1, a2[2], 0LL);
  return 0LL;
}
