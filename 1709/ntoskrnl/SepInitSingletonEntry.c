/*
 * XREFs of SepInitSingletonEntry @ 0x14001AC74
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x14001ABFC (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall SepInitSingletonEntry(unsigned int a1, __int64 a2)
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // rbx

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
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
