/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x140569EB0
 * Callers:
 *     wcstombs @ 0x14018A8C0 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407817D0 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x140577C50 (RtlUnicodeToUTF8N.c)
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
    }
    else
    {
      v3 = v6;
    }
    *BytesInMultiByteString = v3;
  }
  return 0;
}
