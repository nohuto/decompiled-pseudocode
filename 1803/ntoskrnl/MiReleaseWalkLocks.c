/*
 * XREFs of MiReleaseWalkLocks @ 0x1400B5D98
 * Callers:
 *     MiGetNextPageTablePte @ 0x140011270 (MiGetNextPageTablePte.c)
 *     MiCombineWorkingSetTail @ 0x1400B5CC0 (MiCombineWorkingSetTail.c)
 *     MiYieldPageTableWalk @ 0x1400B5D28 (MiYieldPageTableWalk.c)
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiReleaseWalkLocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), v3);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    result = MiUnlockWorkingSetShared(v5, *(_BYTE *)(a1 + 4), a3);
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CBB24);
    LOBYTE(v3) = *(_BYTE *)(a1 + 4);
    result = MiUnlockWorkingSetExclusive(v5, v3);
  }
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
