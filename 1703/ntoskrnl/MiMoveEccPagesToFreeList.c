/*
 * XREFs of MiMoveEccPagesToFreeList @ 0x14020D91C
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x14020E020 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     MiReferencePagePartition @ 0x140213AA8 (MiReferencePagePartition.c)
 *     MiUnlinkPageFromBadList @ 0x14021F3D4 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiMoveEccPagesToFreeList(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rsi
  volatile LONG *v7; // rbp
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
        v7 = (volatile LONG *)MiReferencePagePartition(v5);
        if ( v7 )
        {
          *(_BYTE *)(v5 + 35) &= 0x3Fu;
          if ( (*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v5 + 34) & 7) == 5 )
          {
            MiUnlinkPageFromBadList(v5);
            *v6 |= 0x4000000000000000uLL;
            MiInsertPageInFreeOrZeroedList(v3, 2);
          }
          ++v4;
LABEL_11:
          _InterlockedAnd64(v6, 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v8);
          if ( v7 )
          {
            MiReleaseNonPagedResources((__int64)v7, 1uLL);
            MiDereferencePartition(v7);
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
