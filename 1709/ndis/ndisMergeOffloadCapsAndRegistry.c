/*
 * XREFs of ndisMergeOffloadCapsAndRegistry @ 0x1C000857C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

void __fastcall ndisMergeOffloadCapsAndRegistry(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx

  if ( *(_BYTE *)a2 == 0xA7 && *(_WORD *)(a2 + 2) >= 0x70u && *(_BYTE *)(a2 + 1) )
  {
    if ( (*(_DWORD *)(a1 + 3696) & 0x400) != 0 )
    {
      *(_DWORD *)(a2 + 48) &= 0xFFFFFFF0;
      *(_QWORD *)(a2 + 36) = 0LL;
      *(_DWORD *)(a2 + 44) = 0;
    }
    if ( (*(_DWORD *)(a1 + 3696) & 0x1000) != 0 )
    {
      *(_DWORD *)(a2 + 104) &= 0xFFFFFFF0;
      *(_QWORD *)(a2 + 92) = 0LL;
      *(_DWORD *)(a2 + 100) = 0;
    }
    if ( (*(_DWORD *)(a1 + 3696) & 0x800) != 0 )
    {
      *(_QWORD *)(a2 + 80) = 0LL;
      *(_DWORD *)(a2 + 88) = 0;
    }
    if ( (*(_DWORD *)(a1 + 3696) & 1) != 0 )
      *(_DWORD *)(a2 + 8) &= 0xFFFFFCFC;
    if ( (*(_DWORD *)(a1 + 3696) & 4) != 0 )
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3696) & 0x10) != 0 )
      *(_DWORD *)(a2 + 8) &= 0xFFFFFF3F;
    if ( (((unsigned __int8)*(_DWORD *)(a2 + 8) | (unsigned __int8)((unsigned int)(*(_DWORD *)(a2 + 8) | (*(_DWORD *)(a2 + 8) >> 2)) >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 4) = 0;
    if ( (*(_DWORD *)(a1 + 3696) & 2) != 0 )
      *(_DWORD *)(a2 + 16) &= 0xFFFFFCFC;
    if ( (*(_DWORD *)(a1 + 3696) & 8) != 0 )
      *(_DWORD *)(a2 + 16) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3696) & 0x20) != 0 )
      *(_DWORD *)(a2 + 16) &= 0xFFFFFF3F;
    if ( (((unsigned __int8)*(_DWORD *)(a2 + 16) | (unsigned __int8)((unsigned int)(*(_DWORD *)(a2 + 16) | (*(_DWORD *)(a2 + 16) >> 2)) >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 12) = 0;
    if ( (*(_DWORD *)(a1 + 3696) & 0x40) != 0 )
      *(_DWORD *)(a2 + 24) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3696) & 0x100) != 0 )
      *(_DWORD *)(a2 + 24) &= 0xFFFFFF3F;
    v4 = *(_DWORD *)(a2 + 24);
    if ( (v4 & 3) == 0 && (((unsigned __int8)v4 | (unsigned __int8)(v4 >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 20) = 0;
    if ( (*(_DWORD *)(a1 + 3696) & 0x80u) != 0 )
      *(_DWORD *)(a2 + 32) &= 0xFFFFFFC3;
    if ( (*(_DWORD *)(a1 + 3696) & 0x200) != 0 )
      *(_DWORD *)(a2 + 32) &= 0xFFFFFF3F;
    v5 = *(_DWORD *)(a2 + 32);
    if ( (((unsigned __int8)v5 | (unsigned __int8)(v5 >> 6)) & 3) == 0 && (v5 & 0x30) == 0 )
      *(_DWORD *)(a2 + 28) = 0;
    if ( (*(_DWORD *)(a1 + 3696) & 0x2000) != 0 )
      *(_DWORD *)(a2 + 72) = 0;
    if ( (*(_DWORD *)(a1 + 3696) & 0x4000) != 0 )
      *(_DWORD *)(a2 + 76) = 0;
    if ( *(_BYTE *)(a2 + 1) >= 2u && *(_WORD *)(a2 + 2) >= 0x90u )
    {
      v6 = *(_DWORD *)(a1 + 3696);
      if ( (v6 & 0x400000) != 0 )
      {
        *(_BYTE *)(a2 + 116) = 0;
        if ( (*(_DWORD *)(a1 + 3696) & 0x100000) != 0 )
          *(_BYTE *)(a2 + 119) = 0;
        if ( (*(_DWORD *)(a1 + 3696) & 0x200000) != 0 )
          *(_BYTE *)(a2 + 120) = 0;
        v7 = 3145728;
      }
      else
      {
        if ( (v6 & 0x40000) != 0 )
          *(_BYTE *)(a2 + 119) = 0;
        if ( (*(_DWORD *)(a1 + 3696) & 0x80000) != 0 )
          *(_BYTE *)(a2 + 120) = 0;
        v7 = 786432;
      }
      if ( (v7 & *(_DWORD *)(a1 + 3696)) == v7 )
        *(_WORD *)(a2 + 119) = 0;
      if ( (*(_DWORD *)(a1 + 3696) & 0x3C0000) == 0x3C0000 )
        memset((void *)(a2 + 112), 0, 0x20uLL);
      if ( *(_BYTE *)(a2 + 1) >= 3u && *(_WORD *)(a2 + 2) >= 0x9Cu )
      {
        if ( (*(_DWORD *)(a1 + 3696) & 0x800000) != 0 )
          *(_BYTE *)(a2 + 144) = 0;
        if ( (*(_DWORD *)(a1 + 3696) & 0x1000000) != 0 )
          *(_BYTE *)(a2 + 145) = 0;
        if ( (*(_DWORD *)(a1 + 3696) & 0x2000000) != 0 )
          *(_QWORD *)(a2 + 148) = 0LL;
      }
    }
  }
}
