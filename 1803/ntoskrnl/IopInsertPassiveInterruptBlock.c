/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x14023B2F4
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x140726D00 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14023B184 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x14023B2BC (IopFindPassiveInterruptBlockLocked.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  __int64 PassiveInterruptBlockLocked; // rsi
  __int64 *v5; // rcx
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 1;
  IopAcquireGlobalPassiveInterruptListLock(&v7);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(_DWORD *)(a1 + 20));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
    v5 = (__int64 *)qword_1403C7C88;
    if ( *(__int64 **)qword_1403C7C88 != &PassiveInterruptList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v5;
    *v5 = a1;
    qword_1403C7C88 = a1;
  }
  KxReleaseSpinLock(&PassiveInterruptListLock);
  __writecr8(v7);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
