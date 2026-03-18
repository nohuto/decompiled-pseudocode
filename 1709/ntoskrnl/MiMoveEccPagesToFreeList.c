/*
 * XREFs of MiMoveEccPagesToFreeList @ 0x1402149CC
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x140215180 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReferencePagePartition @ 0x14021F8B4 (MiReferencePagePartition.c)
 *     MiUnlinkPageFromBadList @ 0x14022AA0C (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiMoveEccPagesToFreeList(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rsi
  __int64 v7; // rbp
  unsigned __int8 v8; // r15

  v3 = a1;
  v4 = 0LL;
  v5 = 48 * a1 - 0x58000000000LL;
  if ( a1 < a2 )
  {
    v6 = (volatile signed __int64 *)(v5 + 24);
    do
    {
      if ( MiIsPfnInline(v3) )
      {
        v7 = 0LL;
        v8 = MiLockPageInline(v5);
        if ( (*(_BYTE *)(v5 + 35) & 0x40) == 0 )
          goto LABEL_11;
        v7 = MiReferencePagePartition(v5);
        if ( v7 )
        {
          *(_BYTE *)(v5 + 35) &= 0x3Fu;
          if ( (*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v5 + 34) & 7) == 5 )
          {
            MiUnlinkPageFromBadList(v5, 0LL);
            *v6 |= 0x4000000000000000uLL;
            MiInsertPageInFreeOrZeroedList(v3, 2);
          }
          ++v4;
LABEL_11:
          _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v8);
          if ( v7 )
          {
            MiReleaseNonPagedResources(v7, 1uLL);
            PsDereferencePartition(*(_QWORD *)(v7 + 168));
          }
          goto LABEL_13;
        }
        _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v8);
        v5 -= 48LL;
        v6 -= 6;
        --v3;
      }
LABEL_13:
      ++v3;
      v5 += 48LL;
      v6 += 6;
    }
    while ( v3 < a2 );
  }
  return v4;
}
