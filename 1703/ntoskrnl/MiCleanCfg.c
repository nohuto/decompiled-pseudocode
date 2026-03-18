/*
 * XREFs of MiCleanCfg @ 0x14002F780
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // r14
  void *v5; // rbp

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  result = (__int64)CurrentThread->ApcState.Process;
  v3 = 2LL;
  v4 = *(_QWORD *)(result + 1296);
  do
  {
    v5 = *(void **)(v1 + v4 + 288);
    if ( v5 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      result = MiUnlockAndDereferenceVad(v5);
      *(_QWORD *)(v1 + v4 + 288) = 0LL;
    }
    v1 += 24LL;
    --v3;
  }
  while ( v3 );
  return result;
}
