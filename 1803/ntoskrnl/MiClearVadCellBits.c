/*
 * XREFs of MiClearVadCellBits @ 0x1400723F0
 * Callers:
 *     MiClearVadBits @ 0x14007230C (MiClearVadBits.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 */

_BOOL8 __fastcall MiClearVadCellBits(
        PRTL_BITMAP BitMapHeader,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v7; // r10d
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // esi
  BOOL v12; // r14d
  unsigned int v13; // r8d
  unsigned int SizeOfBitMap; // r9d

  v7 = a3;
  if ( !a2 )
    a2 = LODWORD(BitMapHeader->Buffer) == qword_1403CBB68;
  if ( a2 > a3 )
    return 1LL;
  v8 = 8 * (LODWORD(BitMapHeader->Buffer) - qword_1403CBB68);
  if ( a3 < v8 )
    return 0LL;
  v9 = v8 + BitMapHeader->SizeOfBitMap;
  if ( a2 >= v9 )
    return 0LL;
  v10 = v8;
  if ( a2 >= v8 )
    v10 = a2;
  if ( a3 >= v9 )
    a3 = v9 - 1;
  v11 = v10 - v8;
  v12 = v7 < v9 && a2 >= v8;
  RtlClearBits(BitMapHeader, v10 - v8, a3 - v10 + 1);
  if ( BitMapHeader[1].SizeOfBitMap > v11 )
    BitMapHeader[1].SizeOfBitMap = v11;
  v13 = 0;
  if ( (!a4
     || (v13 = v8 < (unsigned int)(((((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF)
                                  + 0xFFFF) >> 16)
             ? (((((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF)
               + 0xFFFF) >> 16)
             - v8
             : 0) == 0)
    && !v8 )
  {
    v13 = 1;
  }
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  if ( a5 && ((*(_DWORD *)(a5 + 24) >> 4) | (*(unsigned __int8 *)(a5 + 32) << 28)) <= SizeOfBitMap + v8 )
    SizeOfBitMap = ((*(_DWORD *)(a5 + 24) >> 4) | (*(unsigned __int8 *)(a5 + 32) << 28)) - v8;
  if ( v13 < LODWORD(BitMapHeader[1].Buffer) && SizeOfBitMap - v13 >= *(&BitMapHeader[1].SizeOfBitMap + 1) )
    LODWORD(BitMapHeader[1].Buffer) = v13;
  return v12;
}
