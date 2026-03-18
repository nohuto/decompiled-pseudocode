/*
 * XREFs of MiSetTrimWhileAgingState @ 0x140131FC4
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x140001008 (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140159EF4 (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  LONG *SharedVm; // rdi
  KIRQL v6; // r9
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 5680);
  v3 = a1 + 6080;
  v4 = a2;
  SharedVm = MiGetSharedVm(a1 + 6080);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v7 = v4;
  SharedVm[1] = 0;
  if ( !v4 )
  {
    *(_QWORD *)(v2 + 80) = 0LL;
    goto LABEL_9;
  }
  v7 = (unsigned int)v4 - 1;
  if ( v4 == 1 )
  {
    *(_QWORD *)(v2 + 72) = -1LL;
    *(_QWORD *)(v2 + 80) = 204800LL;
    goto LABEL_6;
  }
  v7 = (unsigned int)v4 - 2;
  if ( v4 == 2 )
  {
    *(_QWORD *)(v2 + 80) = 204800LL;
    *(_QWORD *)(v2 + 72) = 51200LL;
    goto LABEL_6;
  }
  v7 = (unsigned int)v4 - 3;
  if ( v4 != 3 )
  {
    if ( v4 != 4 )
      goto LABEL_6;
    *(_QWORD *)(v2 + 80) = 384000LL;
LABEL_9:
    *(_QWORD *)(v2 + 72) = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)(v2 + 80) = 204800LL;
  *(_QWORD *)(v2 + 72) = 12800LL;
LABEL_6:
  LOBYTE(v7) = v6;
  *(_WORD *)(v2 + 2358) = *(_WORD *)((char *)&a2 + 1);
  *(_DWORD *)(v2 + 88) = v4;
  return MiUnlockWorkingSetExclusive(v3, v7);
}
