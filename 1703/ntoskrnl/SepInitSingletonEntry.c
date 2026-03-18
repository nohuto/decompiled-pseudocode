/*
 * XREFs of SepInitSingletonEntry @ 0x140065FB8
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140066010 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // rbx

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber();
  v4 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v5 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    *((_QWORD *)v4 + 2) = 0LL;
    v6 = v5;
    *((_QWORD *)v4 + 1) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v6);
  }
}
