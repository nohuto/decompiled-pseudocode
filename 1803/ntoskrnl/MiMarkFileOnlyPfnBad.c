/*
 * XREFs of MiMarkFileOnlyPfnBad @ 0x14025E0C4
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiTrimSharedPage @ 0x140081E44 (MiTrimSharedPage.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiPersistPage @ 0x14025E29C (MiPersistPage.c)
 */

__int64 __fastcall MiMarkFileOnlyPfnBad(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned __int8 v4; // di
  unsigned __int64 v5; // r8
  char v6; // al
  char v7; // cl
  char v9; // al

  v4 = MiLockPageInline(BugCheckParameter2);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) != 0
    && (unsigned int)MiIsPfnFileOnly(BugCheckParameter2)
    && (v5 & 0x200000000000000LL) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0
    && *(ULONG_PTR **)(qword_1403CBD88 + 8 * ((v5 >> 40) & 0x3FF)) == &MiSystemPartition )
  {
    if ( (a2 & 0x10000000) != 0 )
    {
      v6 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( v6 >= 0 )
        *(_BYTE *)(BugCheckParameter2 + 35) = v6 | 0x80;
    }
    v7 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v7 & 0x40) == 0 )
    {
      if ( *(_WORD *)(BugCheckParameter2 + 32) || (*(_BYTE *)(BugCheckParameter2 + 34) & 7u) - 2 > 1 )
      {
        *(_BYTE *)(BugCheckParameter2 + 35) = v7 | 0x40;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
          MiTrimSharedPage(BugCheckParameter2, v4, a2);
      }
      else
      {
        MiUnlinkPageFromList(BugCheckParameter2, 0LL);
        v9 = *(_BYTE *)(BugCheckParameter2 + 34);
        if ( (v9 & 0x10) != 0 )
        {
          if ( *(char *)(BugCheckParameter2 + 35) >= 0 )
          {
            MiPersistPage((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
            v9 = *(_BYTE *)(BugCheckParameter2 + 34);
          }
          *(_BYTE *)(BugCheckParameter2 + 34) = v9 & 0xEF;
        }
        *(_BYTE *)(BugCheckParameter2 + 35) |= 0x40u;
        MiInsertPageInList(BugCheckParameter2, 4u);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
    return 259LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
    return 3221226548LL;
  }
}
