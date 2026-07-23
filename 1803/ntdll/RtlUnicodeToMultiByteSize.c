/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x180079570
 * Callers:
 *     wcstombs @ 0x180091250 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E51D0 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180065170 (RtlUnicodeToUTF8N.c)
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
  if ( byte_18015ADB1 )
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
        v3 += (HIBYTE(*(_WORD *)(qword_18015ADB8 + 2 * v6)) != 0) + 1;
      }
    }
    else
    {
      v3 = v4;
    }
    *BytesInMultiByteString = v3;
  }
  return 0;
}
