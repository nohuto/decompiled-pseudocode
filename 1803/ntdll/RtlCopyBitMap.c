/*
 * XREFs of RtlCopyBitMap @ 0x1800E5350
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E626C @ 0x1800E626C (sub_1800E626C.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  ULONG v4; // eax
  ULONG SizeOfBitMap; // ecx
  unsigned __int64 v7; // rbx
  PULONG Buffer; // rdx
  PULONG v9; // r11
  PULONG v10; // r10
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r8
  __int64 v15; // r8
  int v16; // esi
  int v17; // r13d
  unsigned __int64 v18; // rbp
  unsigned int v19; // eax
  ULONG v20; // esi
  char v21; // di

  v4 = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= v4 )
    SizeOfBitMap = Source->SizeOfBitMap;
  else
    SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= v4 )
    v4 = Source->SizeOfBitMap;
  v7 = v4;
  if ( v4 )
  {
    Buffer = Destination->Buffer;
    v9 = Source->Buffer;
    v10 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v9 > v10 || v10 > &v9[((unsigned __int64)v4 - 1) >> 5] )
    {
      v11 = (unsigned __int64)TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v15 = TargetBit & 0x1F;
        if ( v4 >= 0x20uLL )
        {
          v16 = *v10;
          v17 = 1 << (32 - v15);
          v18 = (unsigned __int64)v4 >> 5;
          v7 = -32LL * v18 + v4;
          do
          {
            *v10++ = ((*v9 & (v17 - 1)) << v15) | v16 & ((1 << v15) - 1);
            v19 = *v9++ & ~(v17 - 1);
            v16 = (v19 >> (32 - v15)) | *v10 & ~((1 << v15) - 1);
            *v10 = v16;
            --v18;
          }
          while ( v18 );
        }
        if ( v7 )
        {
          v20 = *v9;
          v21 = 32 - v15;
          if ( v7 > 32 - v15 )
          {
            *v10 = *v10 & ((1 << v15) - 1) | ((v20 & ((1 << v21) - 1)) << v15);
            v10[1] = ((*v9 & (((1 << (v7 + v15 - 32)) - 1) << v21)) >> v21) | v10[1] & ~((1 << (v7 + v15 - 32)) - 1);
          }
          else
          {
            *v10 = ((v20 & ((1 << v7) - 1)) << v15) | *v10 & ~(((1 << v7) - 1) << v15);
          }
        }
      }
      else
      {
        v12 = v4 & 7;
        v13 = (unsigned __int64)v4 >> 3;
        if ( v13 )
          memmove((char *)Buffer + v11, Source->Buffer, v13);
        if ( v12 )
        {
          v14 = (char *)Destination->Buffer + v13 + v11;
          *v14 &= ~((1 << v12) - 1);
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *((_BYTE *)Source->Buffer + v13);
        }
      }
    }
    else
    {
      sub_1800E626C(Source, Destination, TargetBit, SizeOfBitMap);
    }
  }
}
