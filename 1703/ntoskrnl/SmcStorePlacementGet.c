/*
 * XREFs of SmcStorePlacementGet @ 0x140704A74
 * Callers:
 *     SmcStoreResize @ 0x140704BA4 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x140704FA0 (SmcStoreSlotReserve.c)
 * Callees:
 *     RtlFindSetBits @ 0x140052C70 (RtlFindSetBits.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 */

__int64 __fastcall SmcStorePlacementGet(__int64 a1, ULONG a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned int *v4; // rax
  unsigned __int64 v6; // r10
  unsigned int v8; // edi
  _DWORD *v9; // rdx
  _DWORD *v10; // r8
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rbx
  ULONG SetBits; // eax
  ULONG v14; // ebx
  signed int v15; // ebx
  int v16; // esi
  signed int v17; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 + 168;
  v4 = *(unsigned int **)(a3 + 8);
  BitMapHeader.SizeOfBitMap = *(_DWORD *)(a1 + 8);
  BitMapHeader.Buffer = v4;
  v6 = ((unsigned __int64)BitMapHeader.SizeOfBitMap + 31) >> 5;
  v8 = 0;
  while ( v3 < a1 + 552 )
  {
    if ( v3 != a3 )
    {
      v9 = *(_DWORD **)(v3 + 8);
      if ( v9 )
      {
        v10 = *(_DWORD **)(a3 + 8);
        v11 = 0LL;
        v12 = (4 * (unsigned __int64)(unsigned int)v6 + 3) >> 2;
        if ( v9 > &v9[(unsigned int)v6] )
          v12 = 0LL;
        if ( v12 )
        {
          do
          {
            ++v11;
            *v10++ ^= *v9++;
          }
          while ( v11 < v12 );
        }
      }
    }
    v3 += 24LL;
  }
  SetBits = RtlFindSetBits(&BitMapHeader, a2, 0);
  v14 = SetBits;
  if ( SetBits == -1 )
  {
    v16 = 0;
    v17 = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( v17 < 0 )
      return (unsigned int)-1073741697;
    while ( 1 )
    {
      ++v16;
      v15 = v17 + 1;
      if ( v16 == a2 )
        break;
      v17 = RtlFindSetBits(&BitMapHeader, 1u, v15);
      if ( v17 < v15 )
        return (unsigned int)-1073741697;
    }
  }
  else
  {
    RtlClearBits(&BitMapHeader, 0, SetBits);
    v15 = a2 + v14;
  }
  RtlClearBits(&BitMapHeader, v15, BitMapHeader.SizeOfBitMap - v15);
  return v8;
}
