/*
 * XREFs of MiCleanWorkingSet @ 0x140127068
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rsi
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 v6; // rdx
  LONG *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rbx

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 195) |= 1u;
  --*(_QWORD *)(a1 + 920);
  v7 = MiGetSharedVm(v1);
  v8 = (_QWORD *)*((_QWORD *)v7 + 5);
  if ( v8 )
  {
    MiEmptyPageAccessLog(v8);
    *((_QWORD *)v7 + 5) = 0LL;
  }
  v9 = *(_QWORD *)(v1 + 112);
  LOBYTE(v6) = v5;
  MiUnlockWorkingSetExclusive(v1, v6);
  return v9 - 4;
}
