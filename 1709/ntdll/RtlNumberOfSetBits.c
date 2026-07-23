/*
 * XREFs of RtlNumberOfSetBits @ 0x18008E5F0
 * Callers:
 *     RtlNumberOfClearBits @ 0x18008E5D0 (RtlNumberOfClearBits.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r10
  unsigned int v2; // edx
  unsigned int SizeOfBitMap; // r14d
  unsigned int v4; // esi
  ULONG v5; // edi
  int v6; // r8d
  unsigned int v7; // r11d
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // ebx
  unsigned int v11; // edx
  int i; // r8d
  char v13; // cl
  unsigned int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int v18; // r11d
  char v19; // cl

  Buffer = BitMapHeader->Buffer;
  v2 = BitMapHeader->SizeOfBitMap >> 3;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = BitMapHeader->SizeOfBitMap & 7;
  v5 = 0;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v2 + (v4 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v10 = 0;
    v8 = v2 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v11 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v2 - (8 - (_BYTE)v6)) & 7;
    v10 = v9 + 1;
    if ( !v4 )
      v10 = v9;
    v11 = v7 - v10 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v13 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && v4 )
      v13 &= byte_1801265C8[SizeOfBitMap & 7];
    ++i;
    v5 += RtlpBitsClearTotal[(unsigned __int8)~v13];
  }
  if ( v11 )
  {
    v14 = ((v11 - 1) >> 3) + 1;
    v15 = v14;
    i += 8 * v14;
    do
    {
      v16 = *(_QWORD *)Buffer;
      v17 = *(_QWORD *)Buffer;
      Buffer += 2;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v15;
    }
    while ( v15 );
  }
  if ( v10 )
  {
    v18 = v7 - 1;
    do
    {
      v19 = *(_BYTE *)Buffer;
      Buffer = (unsigned int *)((char *)Buffer + 1);
      if ( i == v18 && v4 )
        v19 &= byte_1801265C8[SizeOfBitMap & 7];
      ++i;
      v5 += RtlpBitsClearTotal[(unsigned __int8)~v19];
      --v10;
    }
    while ( v10 );
  }
  return v5;
}
