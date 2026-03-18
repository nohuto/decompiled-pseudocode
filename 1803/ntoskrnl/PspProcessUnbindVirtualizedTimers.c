/*
 * XREFs of PspProcessUnbindVirtualizedTimers @ 0x14006ED00
 * Callers:
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerResume @ 0x14008A0C0 (ExpTimerResume.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PspProcessUnbindVirtualizedTimers(__int64 a1)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // bp
  _QWORD **v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  void *v9; // r12

  result = *(unsigned int *)(a1 + 440);
  if ( (result & 0x10) != 0 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 2016);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2016));
    v5 = (_QWORD **)(a1 + 2024);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      v8 = v6 - 36;
      *v5 = v7;
      v7[1] = v5;
      v9 = (void *)*(v6 - 1);
      KxAcquireSpinLock(v6 - 28);
      v8[35] = 0LL;
      if ( (v8[38] & 2) != 0 )
        ExpTimerResume((PKTIMER)v8);
      KxReleaseSpinLock(v8 + 8);
      ObfDereferenceObjectWithTag(v9, 0x54567350u);
    }
    KxReleaseSpinLock(v3);
    result = v4;
    __writecr8(v4);
  }
  return result;
}
