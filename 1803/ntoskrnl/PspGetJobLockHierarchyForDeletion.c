/*
 * XREFs of PspGetJobLockHierarchyForDeletion @ 0x14052F7E8
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 * Callees:
 *     PspUnlockJobAssignment @ 0x1404F10B4 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x1404F1104 (PspLockJobAssignment.c)
 */

char __fastcall PspGetJobLockHierarchyForDeletion(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockJobAssignment((__int64)CurrentThread);
  v7 = *(_QWORD *)(a1 + 1072);
  v8 = 0LL;
  if ( v7 )
  {
    *(_BYTE *)(a2 + 16) = 0;
    v8 = 1LL;
    *(_QWORD *)(a2 + 8) = v7;
  }
  v9 = 2LL * (unsigned int)v8;
  *(_QWORD *)(a2 + 8 * v9 + 8) = a1;
  *(_BYTE *)(a2 + 8 * v9 + 16) = 0;
  *(_DWORD *)a2 = v8 + 1;
  return PspUnlockJobAssignment((__int64)CurrentThread, v8, v5, v6);
}
