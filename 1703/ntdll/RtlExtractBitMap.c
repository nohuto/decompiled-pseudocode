/*
 * XREFs of RtlExtractBitMap @ 0x1800EA0F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  unsigned __int64 SizeOfBitMap; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  PULONG v12; // r8
  PULONG Buffer; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  ULONG *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax

  if ( NumberOfBits > Source->SizeOfBitMap - TargetBit )
    NumberOfBits = Source->SizeOfBitMap - TargetBit;
  SizeOfBitMap = Destination->SizeOfBitMap;
  v7 = NumberOfBits;
  if ( NumberOfBits > SizeOfBitMap )
    v7 = (unsigned int)SizeOfBitMap;
  if ( v7 )
  {
    v8 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      Buffer = Destination->Buffer;
      v14 = (unsigned __int64)TargetBit >> 5;
      v15 = TargetBit & 0x1F;
      v16 = &Source->Buffer[v14];
      if ( v7 >= 0x20 )
      {
        v17 = v7 >> 5;
        v7 += -32LL * (v7 >> 5);
        do
        {
          v18 = *v16++ & ~((1 << v15) - 1);
          *Buffer = v18 >> v15;
          *Buffer++ |= (((1 << v15) - 1) & *v16) << (32 - v15);
          --v17;
        }
        while ( v17 );
      }
      if ( v7 )
      {
        if ( v7 > 32 - v15 )
          *Buffer = ((*v16 & ~((1 << v15) - 1)) >> v15) | ((v16[1] & ((1 << (v7 + v15 - 32)) - 1)) << (32 - v15));
        else
          *Buffer = (*v16 & (((1 << v7) - 1) << v15)) >> v15;
      }
    }
    else
    {
      v9 = (unsigned int)v7;
      v10 = v7 & 7;
      v11 = v9 >> 3;
      if ( v11 )
        memmove(Destination->Buffer, (char *)Source->Buffer + v8, v11);
      if ( v10 )
      {
        v12 = Destination->Buffer;
        *((_BYTE *)v12 + v11) &= ~((1 << v10) - 1);
        *((_BYTE *)v12 + v11) |= (unsigned __int8)((1 << v10) - 1) & *((_BYTE *)Source->Buffer + v11 + v8);
      }
    }
  }
}
