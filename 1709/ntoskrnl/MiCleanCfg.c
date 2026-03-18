/*
 * XREFs of MiCleanCfg @ 0x140126DCC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // r14
  char *v4; // rbp

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 2LL;
  v3 = *(_QWORD *)&CurrentThread->ApcState.Process[1].IdealGlobalNode;
  do
  {
    v4 = *(char **)(v1 + v3 + 288);
    if ( v4 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 40), 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      MiUnlockAndDereferenceVad(v4);
      *(_QWORD *)(v1 + v3 + 288) = 0LL;
    }
    v1 += 24LL;
    --v2;
  }
  while ( v2 );
}
