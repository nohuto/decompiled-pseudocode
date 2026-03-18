/*
 * XREFs of SepInitSingletonEntry @ 0x14006C5A4
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1404F0CC4 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x14006C5FC (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
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
