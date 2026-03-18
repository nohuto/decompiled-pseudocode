/*
 * XREFs of MiAddPageToHeatRanges @ 0x140264D10
 * Callers:
 *     MmSetPfnListInfo @ 0x140147CE0 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x140258D38 (MiMakeTransitionHeatBatch.c)
 *     MiAddColdPagesToHotRanges @ 0x140264C70 (MiAddColdPagesToHotRanges.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14026772C (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddPageToHeatRanges(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi

  v3 = *(unsigned int *)(a1 + 4);
  v4 = (a1 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0;
  if ( (_DWORD)v3 )
  {
    v7 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v3 - 1));
    v8 = (unsigned int)(v3 - 1);
    if ( (v7 & 0xC00) == 0 )
    {
      v9 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v3 - 1)) & 0x3FFLL;
      if ( v9 != 1023 )
      {
        v10 = v9 + 1;
        if ( a3 == (v7 >> 12) + v9 + 1 )
        {
          *(_QWORD *)(v4 + 8 * v8) = v7 ^ (v10 ^ v7) & 0x3FF;
          return v5;
        }
        if ( a3 == (v7 >> 12) - 1 )
        {
          *(_QWORD *)(v4 + 8 * v8) = a3 << 12;
          *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1)) ^= (v10 ^ *(_QWORD *)(v4
                                                                                              + 8LL
                                                                                              * (unsigned int)(*(_DWORD *)(a1 + 4) - 1))) & 0x3FF;
          return v5;
        }
      }
    }
  }
  *(_QWORD *)(v4 + 8 * v3) = a3 << 12;
  if ( ++*(_DWORD *)(a1 + 4) == 16 )
    return 1;
  return v5;
}
