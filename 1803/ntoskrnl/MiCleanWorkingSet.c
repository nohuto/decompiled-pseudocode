/*
 * XREFs of MiCleanWorkingSet @ 0x14007A220
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x14007A2A4 (MiDrainSystemAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rbp
  __int64 SharedVm; // rbx
  KIRQL v4; // al
  KIRQL v5; // di
  __int64 v6; // rbx
  __int64 v7; // rdx

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 187) |= 1u;
  --*(_QWORD *)(a1 + 920);
  MiDrainSystemAccessLog(v1);
  v6 = *(_QWORD *)(v1 + 112);
  LOBYTE(v7) = v5;
  MiUnlockWorkingSetExclusive(v1, v7);
  return v6 - 4;
}
