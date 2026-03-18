/*
 * XREFs of MiQueuePageFileExtension @ 0x14021A580
 * Callers:
 *     MiIssuePageExtendRequest @ 0x14021A1F0 (MiIssuePageExtendRequest.c)
 *     MiIssuePageExtendRequestNoWait @ 0x14021A398 (MiIssuePageExtendRequestNoWait.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, char a2)
{
  __int64 v2; // rdi
  KIRQL v5; // al
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // r8
  KIRQL v9; // r14
  __int64 v10; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1344));
  v6 = (_QWORD *)(v2 + 1456);
  v7 = (_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v2 + 1456);
  v9 = v5;
  if ( *(_QWORD *)(v8 + 8) != v2 + 1456 )
    __fastfail(3u);
  v7[1] = v6;
  *v7 = v8;
  *(_QWORD *)(v8 + 8) = v7;
  *v6 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  __writecr8(v9);
  return KeReleaseSemaphoreEx(v2 + 1424, 0, 1, v10, a2);
}
