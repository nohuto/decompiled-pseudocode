/*
 * XREFs of HvpFindFreeBin @ 0x1404E5630
 * Callers:
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

_QWORD *__fastcall HvpFindFreeBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v4; // rbp
  _QWORD *v7; // rsi
  _QWORD *v9; // rbx
  unsigned int v10; // r9d
  _QWORD *v11; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  int v15; // r8d
  _BYTE *CellMap; // rax
  __int64 FreeBin; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // r8d
  _QWORD *v22; // rax
  int v23; // r8d
  _BYTE *v24; // rax
  int v25; // r8d
  int v26; // r11d
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r11d
  __int64 v30; // r10
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned int v33; // r8d
  _QWORD *v34; // rax
  int v35; // r8d

  v4 = 632LL * a3;
  v7 = (_QWORD *)(v4 + BugCheckParameter2 + 2008);
LABEL_2:
  v9 = (_QWORD *)*v7;
  v10 = 0;
  v11 = (_QWORD *)*v7;
  if ( (_QWORD *)*v7 == v7 )
  {
LABEL_3:
    if ( v10 >= a2 )
    {
      while ( v9 != v7 )
      {
        if ( (v9[3] & 1) == 0 )
        {
          v14 = *((_DWORD *)v9 + 5);
          if ( v14 + *((_DWORD *)v9 + 4) <= *(_DWORD *)(BugCheckParameter2 + v4 + 1400) )
          {
            if ( !HvpGetCellMap(BugCheckParameter2, v14) )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, *((unsigned int *)v9 + 5), 0x620uLL);
            if ( v15 )
            {
              do
              {
                CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, *((_DWORD *)v9 + 5) - 4096);
                if ( !CellMap )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(*((_DWORD *)v9 + 5) - 4096), 0x627uLL);
                FreeBin = HvpMapEntryGetFreeBin(CellMap);
                v18 = FreeBin;
                if ( !FreeBin
                  || (*(_DWORD *)(FreeBin + 24) & 1) != 0
                  || (((*(_DWORD *)(FreeBin + 20) + 4096) ^ (*(_DWORD *)(FreeBin + 20)
                                                           + *(_DWORD *)(FreeBin + 16)
                                                           + 4095
                                                           + *((_DWORD *)v9 + 4))) & 0xFFFC0000) != 0 )
                {
                  break;
                }
                v19 = *(_QWORD *)FreeBin;
                if ( *(_QWORD *)(*(_QWORD *)FreeBin + 8LL) == FreeBin )
                {
                  v20 = *(_QWORD **)(FreeBin + 8);
                  if ( *v20 == v18 )
                    continue;
                }
                __fastfail(3u);
                *v20 = v19;
                v21 = 0;
                for ( *(_QWORD *)(v19 + 8) = v20; v21 < *(_DWORD *)(v18 + 16); *v22 = v9 )
                {
                  v22 = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v21 + *(_DWORD *)(v18 + 20));
                  if ( !v22 )
                    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v23 + *(_DWORD *)(v18 + 20)), 0x64BuLL);
                  v21 = v23 + 4096;
                }
                *((_DWORD *)v9 + 5) = *(_DWORD *)(v18 + 20);
                *((_DWORD *)v9 + 4) += *(_DWORD *)(v18 + 16);
                (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v18, 32LL);
              }
              while ( *((_DWORD *)v9 + 5) );
            }
            while ( (unsigned int)(*((_DWORD *)v9 + 4) + *((_DWORD *)v9 + 5)) < *(_DWORD *)(BugCheckParameter2
                                                                                          + v4
                                                                                          + 1400) )
            {
              v24 = (_BYTE *)HvpGetCellMap(BugCheckParameter2, *((_DWORD *)v9 + 4) + *((_DWORD *)v9 + 5));
              if ( !v24 )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v25 + v26), 0x65AuLL);
              v27 = HvpMapEntryGetFreeBin(v24);
              v30 = v27;
              if ( !v27
                || (*(_DWORD *)(v27 + 24) & 1) != 0
                || (((v29 + 4096) ^ (v28 + v29 + *(_DWORD *)(v27 + 16) + 4095)) & 0xFFFC0000) != 0 )
              {
                break;
              }
              v31 = *(_QWORD *)v27;
              if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || (v32 = *(_QWORD **)(v27 + 8), *v32 != v30) )
                __fastfail(3u);
              *v32 = v31;
              v33 = 0;
              for ( *(_QWORD *)(v31 + 8) = v32; v33 < *(_DWORD *)(v30 + 16); *v34 = v9 )
              {
                v34 = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v33 + *(_DWORD *)(v30 + 20));
                if ( !v34 )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v35 + *(_DWORD *)(v30 + 20)), 0x678uLL);
                v33 = v35 + 4096;
              }
              *((_DWORD *)v9 + 4) += *(_DWORD *)(v30 + 16);
              (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v30, 32LL);
            }
            if ( *((_DWORD *)v9 + 4) >= a2 )
              goto LABEL_2;
          }
        }
        v9 = (_QWORD *)*v9;
      }
    }
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v13 = *((_DWORD *)v11 + 4);
      v10 += v13;
      if ( v13 >= a2 && v13 + *((_DWORD *)v11 + 5) <= *(_DWORD *)(BugCheckParameter2 + v4 + 1400) )
        break;
      v11 = (_QWORD *)*v11;
      if ( v11 == v7 )
        goto LABEL_3;
    }
    *a4 = v13;
    return v11;
  }
}
