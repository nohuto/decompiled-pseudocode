/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x18007D660
 * Callers:
 *     wcstombs @ 0x180096D70 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E9110 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180067AA0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r9d
  ULONG v4; // r8d
  __int64 v6; // rax

  v3 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    v4 = BytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      for ( ; v4; --v4 )
      {
        v6 = *UnicodeString++;
        v3 += (HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v6)) != 0) + 1;
      }
      *BytesInMultiByteString = v3;
    }
    else
    {
      *BytesInMultiByteString = v4;
    }
  }
  return 0;
}
