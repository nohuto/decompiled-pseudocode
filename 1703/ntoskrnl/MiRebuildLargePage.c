/*
 * XREFs of MiRebuildLargePage @ 0x140224674
 * Callers:
 *     MiRebuildLargePages @ 0x1402249F0 (MiRebuildLargePages.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiNodeLargeFreeZeroPages @ 0x140075B98 (MiNodeLargeFreeZeroPages.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiFindRebuildCandidate @ 0x140223E98 (MiFindRebuildCandidate.c)
 *     MiInitializeLargePageSubPage @ 0x14022443C (MiInitializeLargePageSubPage.c)
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
  unsigned int *v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rbp
  unsigned int v16; // ebx
  int v17; // eax
  unsigned __int64 v18; // r14
  __int64 v19; // r13
  unsigned int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // r11
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  char v26; // al
  unsigned int v28; // [rsp+50h] [rbp-88h]
  unsigned int v29; // [rsp+54h] [rbp-84h]
  unsigned __int64 RebuildCandidate; // [rsp+58h] [rbp-80h] BYREF
  unsigned int *v31; // [rsp+60h] [rbp-78h]
  __int64 v32; // [rsp+68h] [rbp-70h]
  __int64 v33; // [rsp+70h] [rbp-68h]
  ULONG_PTR v34; // [rsp+78h] [rbp-60h]
  unsigned __int8 *v35; // [rsp+80h] [rbp-58h]
  __int64 v36; // [rsp+88h] [rbp-50h]
  int v39; // [rsp+F0h] [rbp+18h]
  unsigned int v40; // [rsp+F8h] [rbp+20h]

  v2 = (unsigned int)MmNumberOfChannels;
  v3 = 0LL;
  v29 = 0;
  v4 = a1;
  v5 = a2;
  v33 = 0LL;
  v40 = MmNumberOfChannels;
  v6 = MiReferencePageRuns(a1, 1u);
  v7 = 2184 * v5;
  v8 = 0;
  v31 = (unsigned int *)v6;
  v9 = 0LL;
  v36 = 2184 * v5;
  v10 = (unsigned int *)v6;
  v28 = 0;
  v32 = 0LL;
  do
  {
    v11 = *(__int64 *)((char *)MiLargePageSizes + v9);
    v12 = v7 + *(_QWORD *)(v4 + 48);
    if ( v11 > 0x200 )
      goto LABEL_31;
    if ( v11 == 16 )
    {
      if ( (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v12, 4u, 2) > 0x400 )
        goto LABEL_31;
      v10 = v31;
    }
    v13 = BugCheckParameter3;
    v14 = 0;
    v34 = BugCheckParameter3;
    v39 = 0;
    if ( (unsigned int)v2 > 1 )
    {
      v3 = (unsigned __int8 *)(v12 + 2161);
      v14 = *(unsigned __int8 *)(v12 + 2161);
      v39 = v14;
      v33 = v12 + 2161;
    }
    v35 = &v3[v2];
    if ( v3 != &v3[v2] )
    {
      do
      {
        v15 = v32;
        v16 = a2;
        while ( 1 )
        {
          RebuildCandidate = MiFindRebuildCandidate((__int16 *)v4, v16, v14, v11, v13, v10);
          if ( RebuildCandidate == -1LL )
            break;
          v17 = 1132462080;
          if ( v11 != 16 )
            v17 = 1115684864;
          if ( (int)MiFindContiguousPages(
                      v4,
                      RebuildCandidate,
                      RebuildCandidate + v11 - 1,
                      v11,
                      v11,
                      1u,
                      v16,
                      v14,
                      v17,
                      (__int64 *)&RebuildCandidate) >= 0 )
          {
            v18 = RebuildCandidate;
            v29 = 1;
            if ( v11 >= 0x200 )
              MiUpdateLargePageBitMap(v4, RebuildCandidate, v11, 0, 1);
            v19 = 48 * v18 - 0x58000000000LL;
            v20 = 0;
            v21 = v19;
            if ( v11 )
            {
              v22 = 0LL;
              do
              {
                MiLockPageInline(v21);
                MiInitializeLargePageSubPage(v22 + v18, v28);
                _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v23);
                v18 = RebuildCandidate;
                v22 = ++v20;
                v21 += 48LL;
              }
              while ( v20 < v11 );
              v4 = a1;
              v15 = v32;
            }
            v24 = *(__int64 *)((char *)MiLargePageContainingFrames + v15);
            v25 = (unsigned __int8)MiLockPageInline(v19);
            v26 = *(_BYTE *)(v19 + 34);
            *(_QWORD *)(v19 + 40) ^= (*(_QWORD *)(v19 + 40) ^ v24) & 0xFFFFFFFFFLL;
            *(_BYTE *)(v19 + 34) = v26 & 0xF8 | 1;
            MiInsertLargePageInNodeListHelper(v18, v11, 1, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v25);
            MiReturnCommit(v4, v11);
            if ( (ULONG_PTR *)v4 == &MiSystemPartition )
              MiReturnResidentAvailable(v11);
            else
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 5824), v11);
            v16 = a2;
            v14 = v39;
          }
          if ( !RebuildCandidate )
            break;
          v10 = v31;
          v13 = RebuildCandidate - 1;
          v34 = RebuildCandidate - 1;
        }
        v3 = (unsigned __int8 *)++v33;
        if ( v40 > 1 )
        {
          v14 = *v3;
          v39 = v14;
        }
        v13 = v34;
        v10 = v31;
      }
      while ( v3 != v35 );
      v8 = v28;
      v9 = v32;
    }
    v2 = v40;
LABEL_31:
    v10 = v31;
    v7 = v36;
    ++v8;
    v9 += 8LL;
    v28 = v8;
    v32 = v9;
  }
  while ( v8 < 3 );
  MiDereferencePageRuns((__int64)v31);
  return v29;
}
