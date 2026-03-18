/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x140090460
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x1400901E0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     PpmIdleSnapConcurrency @ 0x14023BA0C (PpmIdleSnapConcurrency.c)
 */

void PpmParkSnapNodeStatistics()
{
  unsigned __int16 i; // si
  __int64 v1; // rdi
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rcx
  size_t v8; // r8
  __int64 v9; // rbx
  PKSPIN_LOCK *v10; // r14
  __int64 v11; // rbp
  __int16 v12; // [rsp+40h] [rbp-8h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v1 = PpmParkNodes + 248LL * i;
    if ( *(_BYTE *)(v1 + 6) )
    {
      v2 = *(_QWORD *)(v1 + 48);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v2);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v2);
      }
      v4 = *(_QWORD *)(v2 + 16);
      if ( PerformanceCounter.QuadPart > v4 )
      {
        *(LARGE_INTEGER *)(v2 + 16) = PerformanceCounter;
        v5 = PerformanceCounter.QuadPart - v4;
        v6 = *(unsigned int *)(v2 + 12);
        *(_QWORD *)(v2 + 24) += v5;
        *(_QWORD *)(v2 + 8 * v6 + 32) += v5;
      }
      v7 = *(void **)(v1 + 56);
      v8 = 8LL * *(unsigned int *)(v1 + 96);
      *(_QWORD *)(v1 + 80) = *(_QWORD *)(v2 + 24);
      memmove(v7, (const void *)(v2 + 32), v8);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v2, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
      if ( (v12 & 0x200) != 0 )
        _enable();
      if ( *(_BYTE *)(v1 + 6) != *(_BYTE *)(v1 + 104) )
      {
        v9 = 0LL;
        v10 = (PKSPIN_LOCK *)(v1 + 128);
        v11 = 2LL;
        do
        {
          PpmIdleSnapConcurrency(*v10);
          v9 += 48LL;
          ++v10;
          --v11;
        }
        while ( v11 );
      }
    }
  }
}
