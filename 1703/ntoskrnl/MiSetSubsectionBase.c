/*
 * XREFs of MiSetSubsectionBase @ 0x140039EF0
 * Callers:
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 */

__int64 __fastcall MiSetSubsectionBase(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 *v7; // rbp
  volatile LONG *v8; // r15
  KIRQL v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // eax

  v3 = *a1;
  v7 = 0LL;
  v8 = (volatile LONG *)(*a1 + 72);
  v9 = ExAcquireSpinLockExclusive(v8);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
  {
    v7 = a1;
    MiIncrementSubsectionViewCount(a1, 0LL);
  }
  a1[1] = a2;
  *((_WORD *)a1 + 16) |= 1u;
  if ( v7 && a3 <= 1 )
  {
    v11 = (unsigned __int64)MiStartingOffset(a1, a2, 0LL) >> 12;
    if ( a3 == 1 || (v11 & 0x3FFFF) != 0 )
    {
      if ( (v11 & 0x1FF) != 0 )
        goto LABEL_5;
      v12 = a1[6] & 0x3FFFFFFF | 0x40000000;
    }
    else
    {
      v12 = a1[6] & 0x3FFFFFFF | 0x80000000;
    }
    *((_DWORD *)a1 + 12) = v12;
  }
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  result = v9;
  __writecr8(v9);
  return result;
}
