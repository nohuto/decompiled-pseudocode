/*
 * XREFs of MiSetSubsectionBase @ 0x140110918
 * Callers:
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiSetSubsectionBase(__int64 *BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  ULONG_PTR v7; // rbp
  volatile LONG *v8; // r15
  KIRQL v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // eax

  v3 = *BugCheckParameter2;
  v7 = 0LL;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v9 = ExAcquireSpinLockExclusive(v8);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
  {
    v7 = (ULONG_PTR)BugCheckParameter2;
    MiIncrementSubsectionViewCount(BugCheckParameter2, 0LL);
  }
  BugCheckParameter2[1] = a2;
  *((_WORD *)BugCheckParameter2 + 16) |= 1u;
  if ( v7 && a3 <= 1 )
  {
    v11 = MiStartingOffset(BugCheckParameter2, a2, 0) >> 12;
    if ( a3 == 1 || (v11 & 0x3FFFF) != 0 )
    {
      if ( (v11 & 0x1FF) != 0 )
        goto LABEL_5;
      v12 = BugCheckParameter2[6] & 0x3FFFFFFF | 0x40000000;
    }
    else
    {
      v12 = BugCheckParameter2[6] & 0x3FFFFFFF | 0x80000000;
    }
    *((_DWORD *)BugCheckParameter2 + 12) = v12;
  }
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  result = v9;
  __writecr8(v9);
  return result;
}
