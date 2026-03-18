/*
 * XREFs of MiConvertContiguousPages @ 0x14004D90C
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x14004FBC4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 */

char __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 updated; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  BOOL v9; // r14d
  int v10; // ebp
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 *v14; // r9
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  LOBYTE(updated) = MiSetOriginalPtePfnFromFreeList(&v17);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      v9 = MiGetPteTimeStamp(a1[2]) == 4294967293LL;
      v10 = MiPfnZeroingNeeded(a1, a3);
      LODWORD(updated) = MiPageAttributeBatchChangeNeeded(a1);
      if ( (_DWORD)updated )
      {
        v11 = *a1 & 0xFFFFFFF000000000uLL;
        *a1 = v11;
        if ( v9 )
        {
          v11 |= 2uLL;
          *a1 = v11;
        }
        a1[2] = (unsigned __int64)v6;
        v6 = a1;
        if ( v10 )
          *a1 = v11 | 1;
      }
      else
      {
        v12 = v17 & -(__int64)(v10 != 0);
        a1[2] = v12;
        if ( v9 )
        {
          updated = MiUpdatePageFileHighInPte(v12, 4294967293LL);
          a1[2] = updated;
        }
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch(v6, a3, -1LL);
      do
      {
        v13 = *v6;
        v14 = (unsigned __int64 *)v6[2];
        LOBYTE(updated) = -(*v6 & 1);
        v15 = v17 & -(__int64)((*v6 & 1) != 0);
        v6[2] = v15;
        if ( (v13 & 2) != 0 )
        {
          updated = MiUpdatePageFileHighInPte(v15, 4294967293LL);
          v6[2] = updated;
        }
        *v6 = v13 & 0xFFFFFFF000000000uLL;
        v6 = v14;
      }
      while ( v14 );
    }
  }
  return updated;
}
