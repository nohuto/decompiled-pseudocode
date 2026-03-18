/*
 * XREFs of MiCleanWorkingSet @ 0x1400066F8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rsi
  __int64 SharedVm; // rbx
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rbx
  void *v8; // rcx
  __int64 v9; // rbx

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 195) |= 1u;
  --*(_QWORD *)(a1 + 920);
  v7 = MiGetSharedVm(v1);
  v8 = *(void **)(v7 + 40);
  if ( v8 )
  {
    MiEmptyPageAccessLog(v8);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v9 = *(_QWORD *)(v1 + 112);
  LOBYTE(v6) = v5;
  MiUnlockWorkingSetExclusive(v1, v6);
  return v9 - 4;
}
