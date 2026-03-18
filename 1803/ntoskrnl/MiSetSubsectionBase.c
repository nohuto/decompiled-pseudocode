/*
 * XREFs of MiSetSubsectionBase @ 0x1400CD53C
 * Callers:
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 */

__int64 __fastcall MiSetSubsectionBase(__int64 *BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  volatile LONG *v7; // r14
  KIRQL v8; // r15
  int v9; // ebx
  ULONG_PTR v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // eax

  v3 = *BugCheckParameter2;
  v7 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v8 = ExAcquireSpinLockExclusive(v7);
  v9 = *(_DWORD *)(v3 + 56) & 0x20;
  if ( !v9 )
    MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
  BugCheckParameter2[1] = a2;
  v10 = (ULONG_PTR)BugCheckParameter2;
  *((_WORD *)BugCheckParameter2 + 16) |= 1u;
  if ( v9 )
    v10 = 0LL;
  if ( v10 && a3 <= 1 )
  {
    v12 = (unsigned __int64)MiStartingOffset(BugCheckParameter2, a2, 0LL) >> 12;
    if ( a3 == 1 || (v12 & 0x3FFFF) != 0 )
    {
      if ( (v12 & 0x1FF) != 0 )
        goto LABEL_7;
      v13 = BugCheckParameter2[6] & 0x3FFFFFFF | 0x40000000;
    }
    else
    {
      v13 = BugCheckParameter2[6] & 0x3FFFFFFF | 0x80000000;
    }
    *((_DWORD *)BugCheckParameter2 + 12) = v13;
  }
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  result = v8;
  __writecr8(v8);
  return result;
}
