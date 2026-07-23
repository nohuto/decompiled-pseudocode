/*
 * XREFs of RtlFindLastBackwardRunClear @ 0x18004C8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindLastBackwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  const signed __int64 *Buffer; // r9
  const signed __int64 *i; // r8
  ULONG v6; // r11d
  ULONG v7; // ecx
  const signed __int64 *j; // r8

  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  else
  {
    Buffer = (const signed __int64 *)BitMapHeader->Buffer;
    i = (const signed __int64 *)((char *)Buffer + 4 * ((unsigned __int64)FromIndex >> 5));
    if ( i != Buffer )
    {
      v6 = FromIndex & 0x1F;
      if ( (*(_DWORD *)i | ~dword_180119840[v6 + 1]) == 0xFFFFFFFF )
      {
        FromIndex = FromIndex - v6 - 1;
        for ( i = (const signed __int64 *)((char *)i - 4);
              i > Buffer && *(_DWORD *)i == -1;
              i = (const signed __int64 *)((char *)i - 4) )
        {
          FromIndex -= 32;
        }
      }
    }
    while ( FromIndex != -1 && _bittest64(Buffer, FromIndex) == 1 )
      --FromIndex;
    v7 = FromIndex;
    if ( (dword_180119840[FromIndex & 0x1F] & *(_DWORD *)i) == 0 )
    {
      v7 = (FromIndex & 0xFFFFFFE0) - 1;
      for ( j = (const signed __int64 *)((char *)i - 4);
            j > Buffer && !*(_DWORD *)j;
            j = (const signed __int64 *)((char *)j - 4) )
      {
        v7 -= 32;
      }
    }
    while ( v7 != -1 && !_bittest64(Buffer, v7) )
      --v7;
    *StartingRunIndex = v7 + 1;
    return FromIndex - v7;
  }
}
