/*
 * XREFs of mbstowcs @ 0x180099970
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180043840 (RtlMultiByteToUnicodeN.c)
 *     _errno @ 0x180088F50 (_errno.c)
 *     sub_18009EE30 @ 0x18009EE30 (sub_18009EE30.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  int *v7; // rax
  unsigned __int64 v8; // rdx
  size_t v9; // rdx
  ULONG BytesInUnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( Dest )
  {
    BytesInUnicodeString = sub_18009EE30(Source);
    if ( RtlMultiByteToUnicodeN(Dest, 2 * v3, &BytesInUnicodeString, Source, BytesInUnicodeString + 1) >= 0 )
    {
      v8 = (unsigned __int64)(int)BytesInUnicodeString >> 1;
      BytesInUnicodeString = v8;
      if ( !Dest[(int)v8 - 1] )
        LODWORD(v8) = v8 - 1;
    }
    else
    {
      v7 = errno();
      LODWORD(v8) = -1;
      *v7 = 42;
      *Dest = 0;
    }
    return (int)v8;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Source[v9] );
    return v9;
  }
}
