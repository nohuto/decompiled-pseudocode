/*
 * XREFs of RtlAreBitsClear @ 0x180089350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r10
  ULONG v4; // r9d
  BOOLEAN v5; // cl
  PULONG Buffer; // rcx
  ULONG *v8; // rdx
  ULONG *v9; // r11
  bool i; // zf
  unsigned int v11; // r8d

  v3 = StartingIndex;
  v4 = StartingIndex + Length - 1;
  if ( v4 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v8 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v9 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v8 == v9 )
  {
    v11 = 0xFFFFFFFF >> (32 - Length) << v3;
    return (v11 & *v8) == 0;
  }
  else
  {
    v5 = 0;
    for ( i = ((-1 << v3) & *v8) == 0; i; i = *v8 == 0 )
    {
      if ( ++v8 == v9 )
      {
        v11 = 0xFFFFFFFF >> ~(_BYTE)v4;
        return (v11 & *v8) == 0;
      }
    }
  }
  return v5;
}
