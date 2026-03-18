/*
 * XREFs of MiCheckPageFileMapping @ 0x1401599F8
 * Callers:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  KIRQL v2; // bl
  _QWORD *v3; // rax

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = ExAcquireSpinLockExclusive(&dword_14036BE00);
  v3 = *(_QWORD **)(a1 + 40);
  if ( !v3 || !*v3 && !v3[2] )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v2);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
  __writecr8(v2);
  return 3221225549LL;
}
