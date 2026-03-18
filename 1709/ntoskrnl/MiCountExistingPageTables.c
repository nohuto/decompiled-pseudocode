/*
 * XREFs of MiCountExistingPageTables @ 0x14022005C
 * Callers:
 *     MiPageTablesNeeded @ 0x1400C4984 (MiPageTablesNeeded.c)
 *     MiCountExistingPageTables @ 0x14022005C (MiCountExistingPageTables.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiCountExistingPageTables @ 0x14022005C (MiCountExistingPageTables.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiCountExistingPageTables(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 PteShadow; // r9
  __int64 v10; // rax
  __int16 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned int v14; // r10d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h]

  v20 = a3;
  v5 = 0LL;
  v6 = a4;
  v7 = a1;
  v8 = a2;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v7 = *(_QWORD *)(a3 + 16LL * a4);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a4 + 8) )
    v8 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v7 <= v8; v7 += 8LL )
  {
    PteShadow = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v19 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
      if ( v10 != *(_QWORD *)(v12 + 8 * v6 + 4584)
        && v10 != *(_QWORD *)(v12 + 8 * v6 + 4552)
        && ((v11 & 0x800) != 0 || (v11 & 0x42) != 0) )
      {
        ++v5;
      }
      if ( (_DWORD)v6 && (_DWORD)v6 != a5 )
      {
        if ( (v11 & 0x80u) == 0 )
        {
          v5 += MiCountExistingPageTables(
                  (__int64)(v7 << 25) >> 16,
                  (unsigned int)((__int64)(v7 << 25) >> 16) + 4088,
                  v13,
                  (int)v6 - 1,
                  a5);
        }
        else
        {
          v14 = v6;
          v15 = (__int64)(v7 << 25) >> 16;
          do
          {
            --v14;
            v16 = v15 + 4088;
            v17 = (__int64)(v7 << 25) >> 16;
            if ( v15 < *(_QWORD *)(v13 + 16LL * v14) )
              v17 = *(_QWORD *)(v13 + 16LL * v14);
            if ( v16 > *(_QWORD *)(v13 + 16LL * v14 + 8) )
              v16 = *(_QWORD *)(v13 + 16LL * v14 + 8);
            v5 += ((__int64)(v16 - v17) >> 3) + 1;
          }
          while ( v14 );
        }
      }
    }
  }
  return v5;
}
