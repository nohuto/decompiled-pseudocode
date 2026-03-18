/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x140598BA0
 * Callers:
 *     wcstombs @ 0x140160710 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x14071E040 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x14058FB50 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r9d
  PCWCH v4; // r11
  ULONG v6; // r8d
  __int64 v8; // rcx

  v3 = 0;
  v4 = UnicodeString;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    v6 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      for ( ; v6; --v6 )
      {
        v8 = *v4++;
        v3 += (HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v8)) != 0) + 1;
      }
      *BytesInMultiByteString = v3;
    }
    else
    {
      *BytesInMultiByteString = v6;
    }
  }
  return 0;
}
