/*
 * XREFs of MiRebuildLargePage @ 0x1402336B8
 * Callers:
 *     MiRebuildLargePages @ 0x14014E330 (MiRebuildLargePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400C5910 (MiNodeLargeFreeZeroPages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDereferencePageRunsEx @ 0x14011CA98 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiFindRebuildCandidate @ 0x140232BE4 (MiFindRebuildCandidate.c)
 *     MiInitializeLargePageSubPage @ 0x140232D50 (MiInitializeLargePageSubPage.c)
 */

__int64 __fastcall MiRebuildLargePage(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned __int8 *v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // r13
  _DWORD *v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // ebx
  int v16; // eax
  unsigned __int64 v17; // r14
  __int64 v18; // r13
  unsigned int v19; // ebp
  __int64 v20; // rdi
  __int64 v21; // r12
  unsigned __int64 v22; // rbx
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  char v25; // al
  unsigned int v27; // [rsp+60h] [rbp-98h]
  unsigned int v28; // [rsp+64h] [rbp-94h]
  unsigned __int64 RebuildCandidate; // [rsp+68h] [rbp-90h] BYREF
  _DWORD *v30; // [rsp+70h] [rbp-88h]
  __int64 v31; // [rsp+78h] [rbp-80h]
  __int64 v32; // [rsp+80h] [rbp-78h]
  ULONG_PTR v33; // [rsp+88h] [rbp-70h]
  __int64 v34; // [rsp+90h] [rbp-68h]
  unsigned __int8 *v35; // [rsp+98h] [rbp-60h]
  __int64 v36; // [rsp+A0h] [rbp-58h]
  int v39; // [rsp+110h] [rbp+18h]
  unsigned int v40; // [rsp+118h] [rbp+20h]

  v2 = (unsigned int)MmNumberOfChannels;
  v3 = 0LL;
  v28 = 0;
  v4 = a1;
  v5 = a2;
  v31 = 0LL;
  v40 = MmNumberOfChannels;
  v6 = MiReferencePageRuns(a1, 1u);
  v7 = 8256 * v5;
  v8 = 0;
  v30 = (_DWORD *)v6;
  v9 = 0LL;
  v36 = 8256 * v5;
  v10 = (_DWORD *)v6;
  v27 = 0;
  v32 = 0LL;
  do
  {
    v11 = *(__int64 *)((char *)MiLargePageSizes + v9);
    v12 = v7 + *(_QWORD *)(v4 + 16);
    if ( v11 > 0x200 )
      goto LABEL_31;
    if ( v11 == 16 )
    {
      if ( (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v12, 4u, 2) > 0x400 )
        goto LABEL_31;
      v10 = v30;
    }
    v13 = BugCheckParameter3;
    v14 = 0;
    v33 = BugCheckParameter3;
    v39 = 0;
    if ( (unsigned int)v2 > 1 )
    {
      v3 = (unsigned __int8 *)(v12 + 8185);
      v14 = *(unsigned __int8 *)(v12 + 8185);
      v39 = v14;
      v31 = v12 + 8185;
    }
    v35 = &v3[v2];
    if ( v3 != &v3[v2] )
    {
      do
      {
        v15 = a2;
        while ( 1 )
        {
          RebuildCandidate = MiFindRebuildCandidate((__int16 *)v4, v15, v14, v11, v13, v10);
          if ( RebuildCandidate == -1LL )
            break;
          v16 = 1132462080;
          if ( v11 != 16 )
            v16 = 1115684864;
          if ( (int)MiFindContiguousPages(
                      v4,
                      RebuildCandidate,
                      RebuildCandidate + v11 - 1,
                      v11,
                      v11,
                      1u,
                      v15,
                      v14,
                      v16,
                      0LL,
                      (__int64 *)&RebuildCandidate) >= 0 )
          {
            v17 = RebuildCandidate;
            v28 = 1;
            if ( v11 >= 0x200 )
              MiUpdateLargePageBitMap(v4, RebuildCandidate, v11, 0, 1);
            v18 = 48 * v17 - 0x58000000000LL;
            v19 = 0;
            v34 = v18;
            v20 = v18;
            if ( v11 )
            {
              v21 = 0LL;
              do
              {
                v22 = (unsigned __int8)MiLockPageInline(v20);
                MiInitializeLargePageSubPage(v21 + v17, v27, 1);
                _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v22);
                v17 = RebuildCandidate;
                v21 = ++v19;
                v20 += 48LL;
              }
              while ( v19 < v11 );
              v4 = a1;
              v18 = v34;
            }
            v23 = *(__int64 *)((char *)MiLargePageContainingFrames + v32);
            v24 = (unsigned __int8)MiLockPageInline(v18);
            v25 = *(_BYTE *)(v18 + 34);
            *(_QWORD *)(v18 + 40) ^= (*(_QWORD *)(v18 + 40) ^ v23) & 0xFFFFFFFFFLL;
            *(_BYTE *)(v18 + 34) = v25 & 0xF8 | 1;
            MiInsertLargePageInNodeListHelper(v17, v11, 1, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v24);
            MiReturnCommit(v4, v11);
            if ( (ULONG_PTR *)v4 == &MiSystemPartition )
              MiReturnResidentAvailable(v11);
            else
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 6016), v11);
            v15 = a2;
            v14 = v39;
          }
          if ( !RebuildCandidate )
            break;
          v10 = v30;
          v13 = RebuildCandidate - 1;
          v33 = RebuildCandidate - 1;
        }
        v3 = (unsigned __int8 *)++v31;
        if ( v40 > 1 )
        {
          v14 = *v3;
          v39 = v14;
        }
        v13 = v33;
        v10 = v30;
      }
      while ( v3 != v35 );
      v8 = v27;
      v9 = v32;
    }
    v2 = v40;
LABEL_31:
    v10 = v30;
    v7 = v36;
    ++v8;
    v9 += 8LL;
    v27 = v8;
    v32 = v9;
  }
  while ( v8 < 3 );
  MiDereferencePageRunsEx((__int64)v30, 1);
  return v28;
}
