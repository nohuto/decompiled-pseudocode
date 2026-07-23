/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x14066A484
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  char v2; // bl
  _KLOCK_ENTRY *v3; // rax

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 60) = CmpLockTableAdd(a1, 1);
  v3 = (_KLOCK_ENTRY *)KeAbPreAcquire(a1 + 40, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 40), 0LL) )
  {
    if ( v3 )
      KeAbPostReleaseEx(a1 + 40, v3);
    return 0;
  }
  else
  {
    if ( v3 )
      v3->AcquiredByte |= 1u;
    *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  }
  return v2;
}
