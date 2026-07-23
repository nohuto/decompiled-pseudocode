/*
 * XREFs of RtlExtractBitMap @ 0x1800E94A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  size_t v10; // rdi
  unsigned int *Buffer; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int *v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // edx

  SizeOfBitMap = Destination->SizeOfBitMap;
  if ( NumberOfBits > Source->SizeOfBitMap - TargetBit )
    NumberOfBits = Source->SizeOfBitMap - TargetBit;
  if ( NumberOfBits <= SizeOfBitMap )
    SizeOfBitMap = NumberOfBits;
  if ( SizeOfBitMap )
  {
    v7 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      Buffer = Destination->Buffer;
      v12 = (unsigned __int64)TargetBit >> 5;
      v13 = TargetBit & 0x1F;
      v14 = &Source->Buffer[v12];
      if ( SizeOfBitMap >= 0x20 )
      {
        v15 = SizeOfBitMap >> 5;
        SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
        do
        {
          v16 = ~((1 << v13) - 1) & *v14++;
          *Buffer = v16 >> v13;
          *Buffer++ |= (((1 << v13) - 1) & *v14) << (32 - v13);
          --v15;
        }
        while ( v15 );
      }
      if ( SizeOfBitMap )
      {
        if ( SizeOfBitMap > 32 - v13 )
        {
          v18 = ((*v14 & ~((1 << v13) - 1)) >> v13) | ((v14[1] & ((1 << (SizeOfBitMap + v13 - 32)) - 1)) << (32 - v13));
          v17 = (1 << SizeOfBitMap) - 1;
        }
        else
        {
          v17 = (1 << SizeOfBitMap) - 1;
          v18 = (*v14 & (v17 << v13)) >> v13;
        }
        *Buffer = v18 | *Buffer & ~v17;
      }
    }
    else
    {
      v8 = (unsigned int)SizeOfBitMap;
      v9 = SizeOfBitMap & 7;
      v10 = v8 >> 3;
      if ( v10 )
        memmove(Destination->Buffer, (char *)Source->Buffer + v7, v10);
      if ( v9 )
        *((_BYTE *)Destination->Buffer + v10) = *((_BYTE *)Source->Buffer + v10 + v7) & ((1 << v9) - 1) | *((_BYTE *)Destination->Buffer + v10) & ~((1 << v9) - 1);
    }
  }
}
