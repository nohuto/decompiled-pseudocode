/*
 * XREFs of RtlCopyBitMap @ 0x1800E9EF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800EACCC @ 0x1800EACCC (sub_1800EACCC.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  ULONG v4; // eax
  unsigned __int64 SizeOfBitMap; // rbx
  PULONG Buffer; // rcx
  PULONG v8; // r11
  ULONG *v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  int v17; // r12d
  unsigned int v18; // edx
  char v19; // di

  v4 = Destination->SizeOfBitMap - TargetBit;
  SizeOfBitMap = v4;
  if ( Source->SizeOfBitMap <= v4 )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Destination->Buffer;
    v8 = Source->Buffer;
    v9 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v8 > v9 || v9 > &v8[(SizeOfBitMap - 1) >> 5] )
    {
      v10 = (unsigned __int64)TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v15 = TargetBit & 0x1F;
        if ( SizeOfBitMap >= 0x20 )
        {
          v16 = SizeOfBitMap >> 5;
          v17 = 1 << (32 - v15);
          SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
          do
          {
            *v9 = ((*v8 & (v17 - 1)) << v15) | ((1 << v15) - 1) & *v9;
            ++v9;
            v18 = *v8++ & ~(v17 - 1);
            *v9 = (v18 >> (32 - v15)) | ~((1 << v15) - 1) & *v9;
            --v16;
          }
          while ( v16 );
        }
        if ( SizeOfBitMap )
        {
          v19 = 32 - v15;
          if ( SizeOfBitMap > 32 - v15 )
          {
            *v9 = ((*v8 & ((1 << v19) - 1)) << v15) | *v9 & ((1 << v15) - 1);
            v9[1] = ((*v8 & (((1 << (SizeOfBitMap + v15 - 32)) - 1) << v19)) >> v19) | v9[1] & ~((1 << (SizeOfBitMap + v15 - 32))
                                                                                               - 1);
          }
          else
          {
            *v9 = ((*v8 & ((1 << SizeOfBitMap) - 1)) << v15) | *v9 & ~(((1 << SizeOfBitMap) - 1) << v15);
          }
        }
      }
      else
      {
        v11 = SizeOfBitMap;
        v12 = SizeOfBitMap & 7;
        v13 = v11 >> 3;
        if ( v13 )
          memmove((char *)Buffer + v10, Source->Buffer, v13);
        if ( v12 )
        {
          v14 = (char *)Destination->Buffer + v13 + v10;
          *v14 &= ~((1 << v12) - 1);
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *((_BYTE *)Source->Buffer + v13);
        }
      }
    }
    else
    {
      sub_1800EACCC(Source, Destination, TargetBit, (unsigned int)SizeOfBitMap);
    }
  }
}
