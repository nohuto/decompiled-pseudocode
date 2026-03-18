/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x1407550B8
 * Callers:
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402506AC (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x1407A936C (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(unsigned int *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a3 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)MiVadDeleted((__int64)P) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      v10 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      PerfInfoLogVirtualAlloc(
        v10 << 12,
        ((P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) - v10 + 1) << 12,
        Process,
        0x2000LL);
    }
    MiUnlockAndDereferenceVad(P, v7, v8, v9);
  }
  else
  {
    MiDeleteVad(P, 0LL, 0);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
