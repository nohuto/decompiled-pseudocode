/*
 * XREFs of MiConvertContiguousPages @ 0x1400CA4C4
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400CAB80 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

char __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 updated; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  BOOL v9; // r14d
  BOOL v10; // ebp
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // r9
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  LOBYTE(updated) = MiSetOriginalPtePfnFromFreeList(&v16);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      v9 = MiGetPteTimeStamp(a1[2]) == 4294967293LL;
      v10 = MiPfnZeroingNeeded((__int64)a1, a3);
      LODWORD(updated) = MiPageAttributeBatchChangeNeeded(a1);
      if ( (_DWORD)updated )
      {
        *a1 &= 0xFFFFFFF000000000uLL;
        if ( v9 )
          *a1 |= 2uLL;
        a1[2] = (unsigned __int64)v6;
        v6 = a1;
        if ( v10 )
          *a1 |= 1uLL;
      }
      else
      {
        v11 = v16 & -(__int64)v10;
        a1[2] = v11;
        if ( v9 )
        {
          updated = MiUpdatePageFileHighInPte(v11, 4294967293LL);
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
        v12 = *v6;
        v13 = (unsigned __int64 *)v6[2];
        LOBYTE(updated) = -(*v6 & 1);
        v14 = v16 & -(__int64)((*v6 & 1) != 0);
        v6[2] = v14;
        if ( (v12 & 2) != 0 )
        {
          updated = MiUpdatePageFileHighInPte(v14, 4294967293LL);
          v6[2] = updated;
        }
        *v6 = v12 & 0xFFFFFFF000000000uLL;
        v6 = v13;
      }
      while ( v13 );
    }
  }
  return updated;
}
