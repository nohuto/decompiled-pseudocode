/*
 * XREFs of MiInsertPrivateVad @ 0x1400E4BE4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x14001F3B0 (MiInsertVad.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x140262490 (MiCreatePageTablesForPhysicalRange.c)
 *     MiAweViewInserter @ 0x14074F714 (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2, __int64 a3)
{
  LONG *v6; // r14
  KIRQL v7; // al
  KIRQL v8; // bl
  __int64 v9; // rdx
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x20000) != 0 )
    ++*(_QWORD *)(*(_QWORD *)(a3 + 1296) + 360LL);
  v6 = &dword_1403CCD40;
  if ( (*(_BYTE *)(a3 + 1464) & 7) != 2 )
    v6 = (LONG *)(a3 + 1472);
  v7 = ExAcquireSpinLockExclusive(v6);
  v6[1] = 0;
  v8 = v7;
  MiInsertVad(a1, a3, 0);
  LOBYTE(v9) = v8;
  MiUnlockWorkingSetExclusive(a3 + 1280, v9);
  result = *(_DWORD *)(a1 + 48) & 7;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    result = MiCreatePageTablesForPhysicalRange(a1);
    if ( (*(_DWORD *)(a1 + 48) & 0x10000) == 0 )
      return MiAweViewInserter(a3, a2);
  }
  return result;
}
