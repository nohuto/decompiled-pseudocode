/*
 * XREFs of MiWaitForRotateToComplete @ 0x1400D0B30
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = a2;
  v5 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  for ( i = (_QWORD *)Process[1].Affinity.Bitmap[9]; i; i = (_QWORD *)*i )
  {
    v8 = i[1];
    if ( v5 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
      && v5 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v3;
      v3 = 1;
      if ( *(_BYTE *)(v4 + 9) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 36));
        LOBYTE(a2) = *(_BYTE *)(v4 + 8);
        MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], a2);
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
        LOBYTE(CurrentThread[1].Queue) |= 0x80u;
        MiUnlockAndDereferenceVad((PVOID)v8);
        SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        *(_DWORD *)(SharedVm + 4) = 0;
      }
      else
      {
        MiUnlockWorkingSetShared(*(_QWORD *)v4, *(_BYTE *)(v4 + 8), (__int64)i);
        v10 = MiGetSharedVm(&Process[1].IdealNode[12]);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v10);
        *(_DWORD *)(v10 + 4) = 0;
        *(_BYTE *)(v4 + 9) = 1;
      }
      goto LABEL_2;
    }
  }
  return v3;
}
