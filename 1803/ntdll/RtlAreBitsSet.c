/*
 * XREFs of RtlAreBitsSet @ 0x18007BC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  ULONG v4; // r10d
  PULONG Buffer; // rcx
  ULONG *v7; // rdx
  ULONG v8; // r11d
  ULONG *v9; // rbx

  v3 = StartingIndex;
  v4 = StartingIndex + Length - 1;
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
    v8 = *v7;
    v9 = &Buffer[(unsigned __int64)v4 >> 5];
    if ( v7 == v9 )
      return ((0xFFFFFFFF >> (32 - Length) << v3) & v8) == 0xFFFFFFFF >> (32 - Length) << v3;
    if ( ((-1 << v3) & v8) == -1 << v3 )
    {
      while ( ++v7 != v9 )
      {
        if ( *v7 != -1 )
          return 0;
      }
      return ((0xFFFFFFFF >> ~(_BYTE)v4) & *v7) == 0xFFFFFFFF >> ~(_BYTE)v4;
    }
  }
  return 0;
}
