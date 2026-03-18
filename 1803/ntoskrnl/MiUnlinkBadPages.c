/*
 * XREFs of MiUnlinkBadPages @ 0x140252F68
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1402535E0 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiReferencePagePartition @ 0x14025B1B4 (MiReferencePagePartition.c)
 *     MiUnlockPage @ 0x140264C50 (MiUnlockPage.c)
 *     MiUnlinkPageFromBadList @ 0x140265518 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiUnlinkBadPages(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rsi
  char v7; // al
  __int64 v8; // rdx
  char v9; // cl
  char v10; // r14

  v3 = a1;
  v4 = 0LL;
  for ( i = 48 * a1 - 0x58000000000LL; v3 < a2; i += 48LL )
  {
    if ( MiIsPfnInline(v3) )
    {
      v6 = 0LL;
      v7 = MiLockPageInline(i);
      v9 = *(_BYTE *)(i + 35);
      v10 = v7;
      if ( (v9 & 0x40) == 0 )
        goto LABEL_13;
      v8 = 0x10000000000000LL;
      if ( (*(_QWORD *)(i + 40) & 0x10000000000000LL) != 0 )
      {
        if ( (v9 & 0x10) == 0 )
          goto LABEL_9;
        LOBYTE(v8) = v7;
        MiUnlockPage(i, v8);
      }
      else
      {
        v6 = MiReferencePagePartition(i);
        if ( v6 )
        {
LABEL_9:
          *(_BYTE *)(i + 35) &= ~0x40u;
          *(_BYTE *)(i + 35) &= ~0x80u;
          if ( (*(_QWORD *)(i + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(i + 34) & 7) == 5 )
          {
            MiUnlinkPageFromBadList(i, 0LL);
            *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
            MiInsertPageInFreeOrZeroedList(v3, 2);
          }
          ++v4;
LABEL_13:
          LOBYTE(v8) = v10;
          MiUnlockPage(i, v8);
          if ( v6 )
          {
            MiReleaseNonPagedResources(v6, 1uLL);
            PsDereferencePartition(*(_QWORD *)(v6 + 168));
          }
          goto LABEL_15;
        }
        LOBYTE(v8) = v10;
        MiUnlockPage(i, v8);
        i -= 48LL;
        --v3;
      }
    }
LABEL_15:
    ++v3;
  }
  return v4;
}
