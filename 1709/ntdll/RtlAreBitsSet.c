/*
 * XREFs of RtlAreBitsSet @ 0x18007ECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r10d
  unsigned int *Buffer; // rcx
  unsigned int *v7; // r8
  unsigned int *v8; // r11
  unsigned int v9; // eax
  unsigned int v10; // r9d

  v3 = Length;
  v4 = Length + StartingIndex - 1;
  if ( v4 < BitMapHeader->SizeOfBitMap )
  {
    if ( Length <= 1 )
    {
      if ( Length == 1 )
        return _bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
      return 0;
    }
    Buffer = BitMapHeader->Buffer;
    v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
    v8 = &Buffer[(unsigned __int64)v4 >> 5];
    v9 = *v7;
    if ( v7 == v8 )
    {
      v10 = 0xFFFFFFFF >> (32 - v3) << StartingIndex;
      return (v10 & v9) == v10;
    }
    if ( ((-1 << StartingIndex) & v9) == -1 << StartingIndex )
    {
      while ( ++v7 != v8 )
      {
        if ( *v7 != -1 )
          return 0;
      }
      v9 = *v7;
      v10 = 0xFFFFFFFF >> ~(_BYTE)v4;
      return (v10 & v9) == v10;
    }
  }
  return 0;
}
