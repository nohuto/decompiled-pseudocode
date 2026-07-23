/*
 * XREFs of SmcStorePlacementGet @ 0x14079FD84
 * Callers:
 *     SmcStoreResize @ 0x14079FEA0 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1407A0278 (SmcStoreSlotReserve.c)
 * Callees:
 *     RtlFindSetBits @ 0x140072850 (RtlFindSetBits.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 */

__int64 __fastcall SmcStorePlacementGet(__int64 a1, ULONG a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int *v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // r9
  unsigned int v9; // edi
  unsigned __int64 v10; // rsi
  _DWORD *v11; // rdx
  _DWORD *v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  ULONG SetBits; // eax
  ULONG v16; // ebx
  signed int v17; // ebx
  int v18; // esi
  signed int v19; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 8);
  v5 = *(unsigned int **)(a3 + 8);
  v6 = a1 + 168;
  BitMapHeader.SizeOfBitMap = v3;
  BitMapHeader.Buffer = v5;
  v8 = (unsigned __int64)(v3 + 31) >> 5;
  v9 = 0;
  v10 = v6 + 384;
  while ( v6 < v10 )
  {
    if ( v6 != a3 )
    {
      v11 = *(_DWORD **)(v6 + 8);
      if ( v11 )
      {
        v12 = *(_DWORD **)(a3 + 8);
        v13 = 0LL;
        v14 = (unsigned int)v8;
        if ( v11 > &v11[(unsigned int)v8] )
          v14 = 0LL;
        if ( v14 )
        {
          do
          {
            ++v13;
            *v12++ ^= *v11++;
          }
          while ( v13 < v14 );
        }
      }
    }
    v6 += 24LL;
  }
  SetBits = RtlFindSetBits(&BitMapHeader, a2, 0);
  v16 = SetBits;
  if ( SetBits == -1 )
  {
    v18 = 0;
    v19 = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( v19 < 0 )
      return (unsigned int)-1073741697;
    while ( 1 )
    {
      ++v18;
      v17 = v19 + 1;
      if ( v18 == a2 )
        break;
      v19 = RtlFindSetBits(&BitMapHeader, 1u, v17);
      if ( v19 < v17 )
        return (unsigned int)-1073741697;
    }
  }
  else
  {
    RtlClearBits(&BitMapHeader, 0, SetBits);
    v17 = a2 + v16;
  }
  RtlClearBits(&BitMapHeader, v17, BitMapHeader.SizeOfBitMap - v17);
  return v9;
}
