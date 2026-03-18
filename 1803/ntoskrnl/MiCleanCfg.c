/*
 * XREFs of MiCleanCfg @ 0x1400C6198
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 */

__int64 MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbp
  __int64 result; // rax
  void **v3; // rbx
  void *v4; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  result = (__int64)CurrentThread->ApcState.Process;
  v3 = (void **)(*(_QWORD *)(result + 1296) + 392LL);
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v4 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      result = MiUnlockAndDereferenceVad(v4);
      *v3 = 0LL;
    }
    v3 += 3;
    --v1;
  }
  while ( v1 );
  return result;
}
