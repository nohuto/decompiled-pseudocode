/*
 * XREFs of SepSetSingletonEntry @ 0x1402A1120
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x1402A0E30 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14006C5FC (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, int *a2, __int64 a3)
{
  unsigned int v5; // ebx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v7; // rdi
  KIRQL v8; // al
  __int64 v9; // rcx
  KIRQL v10; // si
  _DWORD *PoolWithTag; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  v5 = 0;
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v7 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v8 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    v9 = *((_QWORD *)v7 + 2);
    v10 = v8;
    if ( !v9 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
      *((_QWORD *)v7 + 2) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741801;
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        __writecr8(v10);
        return v5;
      }
      *PoolWithTag = 0;
      *(_DWORD *)(*((_QWORD *)v7 + 2) + 24LL) = 0;
      v12 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
      v12[1] = v12;
      *v12 = v12;
      v13 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
      v13[1] = v13;
      *v13 = v13;
      v9 = *((_QWORD *)v7 + 2);
    }
    v5 = AuthzBasepSetSecurityAttributesToken(v9, a2, a3);
    *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    __writecr8(v10);
  }
  return v5;
}
