/*
 * XREFs of KdpSearchPhysicalPage @ 0x14078A9D0
 * Callers:
 *     KdpSearchPhysicalPageRange @ 0x14078ABE0 (KdpSearchPhysicalPageRange.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x14021B98C (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpSearchPhysicalPage(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned int v9; // esi
  int v10; // r15d
  ULONG v11; // esi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v20[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a1 << 12;
  v6 = 0;
  if ( KdpSearchPfnValue )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (int)MmDbgCopyMemory((char *)(v5 + v9), v20, 8u, 8u, a5 | 2u) >= 0 && ((v20[0] >> 12) & 0xFFFFFFFFFLL) == a2 )
      {
        if ( (unsigned int)KdpSearchPageHitIndex < 0x1000 )
        {
          KdpSearchPageHits[KdpSearchPageHitIndex] = a1;
          KdpSearchPageHitOffsets[KdpSearchPageHitIndex++] = v9;
        }
        if ( (a4 & 1) == 0 )
          break;
      }
      v9 += 8;
      if ( v9 >= 0x1000 )
        return v6;
    }
  }
  else
  {
    v10 = KdpSearchInProgress & 2;
    v19 = 0LL;
    if ( (KdpSearchInProgress & 0x3C) != 0 )
    {
      v11 = ((unsigned int)KdpSearchInProgress >> 2) & 0xF;
      if ( v11 > 8 )
        return 0LL;
    }
    else
    {
      v11 = 8;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( (int)MmDbgCopyMemory((char *)(v5 + v13), &v19, v11, 0, a5 | 2u) >= 0 )
      {
        if ( v19 >= a2 && v19 <= a3 )
          goto LABEL_24;
        if ( !v10 )
        {
          v14 = a2 ^ v19;
          v15 = 64LL;
          v16 = 0;
          do
          {
            v17 = v16 + 1;
            v18 = v14 & 1;
            v14 >>= 1;
            if ( !v18 )
              v17 = v16;
            v16 = v17;
            --v15;
          }
          while ( v15 );
          if ( v17 == 1 )
          {
LABEL_24:
            if ( (unsigned int)KdpSearchPageHitIndex < 0x1000 )
            {
              KdpSearchPageHits[KdpSearchPageHitIndex] = a1;
              KdpSearchPageHitOffsets[KdpSearchPageHitIndex++] = v13;
            }
            if ( (a4 & 1) == 0 )
              break;
          }
        }
      }
      v13 += v11;
      if ( v13 >= 0x1000 )
        return v6;
    }
  }
  return 1;
}
