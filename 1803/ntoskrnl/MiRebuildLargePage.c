/*
 * XREFs of MiRebuildLargePage @ 0x14026D668
 * Callers:
 *     MiRebuildLargePages @ 0x140155E10 (MiRebuildLargePages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiConstructNewLargeFreePage @ 0x1400A3550 (MiConstructNewLargeFreePage.c)
 *     MiDereferencePageRunsEx @ 0x1400C4510 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MiNodeFreeZeroPages @ 0x1400D4DF8 (MiNodeFreeZeroPages.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiGetNodeStandbyPageCount @ 0x1402659E4 (MiGetNodeStandbyPageCount.c)
 *     MiFindRebuildCandidate @ 0x14026D51C (MiFindRebuildCandidate.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  ULONG_PTR v4; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int *v10; // rcx
  unsigned int v11; // edi
  unsigned __int8 *v12; // rbx
  unsigned __int64 RebuildCandidate; // rax
  int ContiguousPages; // eax
  unsigned int v15; // r14d
  unsigned __int64 v16; // rsi
  unsigned int v17; // r11d
  ULONG_PTR v19; // [rsp+60h] [rbp-68h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v21; // [rsp+70h] [rbp-58h]
  ULONG_PTR v22; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v24; // [rsp+E0h] [rbp+18h]
  unsigned int *v25; // [rsp+E8h] [rbp+20h]

  v24 = a3;
  v23 = a2;
  v3 = (unsigned int)MmNumberOfChannels;
  v4 = a2;
  v5 = a3;
  v7 = 0LL;
  v8 = MiReferencePageRuns(a1, 1u);
  v9 = BugCheckParameter3;
  v10 = (unsigned int *)v8;
  v25 = (unsigned int *)v8;
  v11 = 0;
  v19 = BugCheckParameter3;
  v20 = *(_QWORD *)(a1 + 16) + 1984 * v4;
  v12 = (unsigned __int8 *)(v20 + 1914);
  if ( (unsigned int)v3 <= 1 )
    v12 = 0LL;
  else
    v11 = *v12;
  v21 = &v12[v3];
  if ( v12 != &v12[v3] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        RebuildCandidate = MiFindRebuildCandidate((__int16 *)a1, v4, v11, 16LL, v9, v10);
        v22 = RebuildCandidate;
        if ( RebuildCandidate != -1LL )
          break;
LABEL_23:
        ++v12;
        if ( (unsigned int)v3 > 1 )
          v11 = *v12;
        v10 = v25;
        v9 = v19;
        if ( v12 == v21 )
          goto LABEL_26;
      }
      ContiguousPages = MiFindContiguousPages(
                          a1,
                          RebuildCandidate,
                          RebuildCandidate + 15,
                          16LL,
                          0x10uLL,
                          1u,
                          v4,
                          v11,
                          1132462080,
                          0LL,
                          (__int64 *)&v22);
      v4 = v22;
      if ( ContiguousPages >= 0 )
      {
        MiConstructNewLargeFreePage(v22, 2u, 1);
        MiReturnCommit(a1, 0x10uLL);
        if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        {
          MiReturnResidentAvailable(0x10uLL);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), 0x10uLL);
          v4 = v22;
        }
        v7 += 16LL;
        if ( v7 >= v5 )
          goto LABEL_26;
      }
      v15 = MmNumberOfChannels;
      v16 = 0LL;
      v11 = 0;
      if ( !MmNumberOfChannels )
        goto LABEL_14;
      do
        v16 += MiNodeFreeZeroPages(v20, v11++, 0);
      while ( v11 < v15 );
      v4 = v22;
      if ( v16 >= 0x1000 )
      {
        v5 = v24;
      }
      else
      {
LABEL_14:
        v11 = 0;
        LODWORD(v3) = v15;
        if ( v15 )
        {
          v17 = v23;
          do
            v16 += MiGetNodeStandbyPageCount(a1, v17, v11++);
          while ( v11 < v15 );
        }
        v5 = v24;
        if ( v16 + 0x8000 < v24 - v7 )
        {
LABEL_26:
          v10 = v25;
          break;
        }
      }
      if ( !v4 )
      {
        LODWORD(v4) = v23;
        goto LABEL_23;
      }
      v10 = v25;
      v9 = v4 - 1;
      LODWORD(v4) = v23;
      v19 = v9;
    }
  }
  MiDereferencePageRunsEx((__int64)v10, 1);
  return v7;
}
