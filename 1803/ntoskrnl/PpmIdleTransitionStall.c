/*
 * XREFs of PpmIdleTransitionStall @ 0x14027314C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     PoInitiateProcessorWake @ 0x140271960 (PoInitiateProcessorWake.c)
 *     PpmExitCoordinatedIdleState @ 0x140271F44 (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140272498 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140273330 (PpmIdleWaitForDependentTransitions.c)
 *     PpmTestAndLockProcessor @ 0x140273A34 (PpmTestAndLockProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall PpmIdleTransitionStall(__int64 a1)
{
  ULONG_PTR v2; // r9

  if ( *(_QWORD *)a1 )
  {
    if ( ++*(_DWORD *)(a1 + 24) == 1000 )
    {
      *(_DWORD *)(a1 + 24) = 0;
      if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)a1) > *(_QWORD *)(a1 + 8) )
      {
        v2 = *(_QWORD *)(a1 + 16);
        if ( v2 )
          KeBugCheckEx(0xA0u, 0x701uLL, *(unsigned int *)(v2 + 23860), v2, *(unsigned int *)(v2 + 36));
        KeBugCheckEx(0xA0u, 0x704uLL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    *(LARGE_INTEGER *)a1 = KeQueryPerformanceCounter(0LL);
  }
  if ( *(_BYTE *)(a1 + 28) )
    _mm_pause();
  _mm_pause();
}
