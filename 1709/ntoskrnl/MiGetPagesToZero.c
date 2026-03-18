/*
 * XREFs of MiGetPagesToZero @ 0x1401352C8
 * Callers:
 *     MiZeroLargePages @ 0x140135010 (MiZeroLargePages.c)
 * Callees:
 *     MiMapPagesToZero @ 0x14005C610 (MiMapPagesToZero.c)
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiGetHugePageToZero @ 0x140134BB0 (MiGetHugePageToZero.c)
 *     MiGetSinglePageToZero @ 0x14022B680 (MiGetSinglePageToZero.c)
 */

__int64 __fastcall MiGetPagesToZero(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rdi
  unsigned int v6; // r8d
  __int64 result; // rax
  char v9; // cl
  unsigned int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx

  v4 = a3;
  v6 = *a4;
  if ( !(_DWORD)v4 && *(_BYTE *)(a2 + 210) )
    return MiGetHugePageToZero(a1, a2, v6);
  v9 = byte_140388501;
  *(_QWORD *)(a2 + 32) = 0LL;
  v10 = v6 >> v9;
  if ( (unsigned int)v4 >= 3 )
  {
    result = MiGetSinglePageToZero(a1, a2, a4);
    v11 = 1LL;
  }
  else
  {
    result = MiUnlinkNodeLargePage(a1, v4, v10, 4, 1, 0, 0, a2);
    v11 = MiLargePageSizes[v4];
  }
  v12 = result;
  if ( result )
  {
    v13 = (((unsigned __int64)MiGetUltraMapping((unsigned __int64 *)(32 * v4 + a2 + 80), v4, v11, 0) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    if ( (unsigned int)v4 <= 1 )
    {
      v14 = (unsigned int)(2 - v4);
      do
      {
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v14;
      }
      while ( v14 );
    }
    return MiMapPagesToZero(a2, v13, v12, v4);
  }
  return result;
}
