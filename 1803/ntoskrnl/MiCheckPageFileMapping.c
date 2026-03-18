/*
 * XREFs of MiCheckPageFileMapping @ 0x14017E1F8
 * Callers:
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  KIRQL v2; // bl
  _QWORD *v3; // rax

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = ExAcquireSpinLockExclusive(&dword_1403CB280);
  v3 = *(_QWORD **)(a1 + 40);
  if ( !v3 || !*v3 && !v3[2] )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    __writecr8(v2);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
  __writecr8(v2);
  return 3221225549LL;
}
