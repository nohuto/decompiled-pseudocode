/*
 * XREFs of MiCheckPageFileMapping @ 0x140150244
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  KIRQL v2; // bl
  _QWORD *v3; // rax

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = ExAcquireSpinLockExclusive(&dword_140388100);
  v3 = *(_QWORD **)(a1 + 40);
  if ( !v3 || !*v3 && !v3[2] )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v2);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  __writecr8(v2);
  return 3221225549LL;
}
