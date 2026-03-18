/*
 * XREFs of MiRelockFaultState @ 0x140059A7C
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiRelockFaultState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int8 v6; // r14
  __int64 valid; // rax
  __int64 SharedVm; // rbx
  __int64 v9; // r8
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v6 = MiLockWorkingSetShared(*(_QWORD *)a1);
  valid = MiLockLowestValidPageTable(v2, a2 << 25 >> 16, &v11);
  v3 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v2, valid);
    LOBYTE(valid) = MiUnlockWorkingSetShared(v2, v6, v9);
    v3 = 0LL;
  }
  if ( !v3 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 9) = 1;
    SharedVm = MiGetSharedVm(v2);
    LOBYTE(valid) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return valid;
}
