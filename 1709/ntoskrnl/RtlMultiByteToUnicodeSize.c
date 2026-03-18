/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x1405F2890
 * Callers:
 *     RtlxAnsiStringToUnicodeSize @ 0x1405F2860 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlxOemStringToUnicodeSize @ 0x14071E010 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1405867F0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else if ( (_BYTE)NlsMbCodePageTag )
  {
    while ( BytesInMultiByteString )
    {
      v5 = *(unsigned __int8 *)MultiByteString;
      --BytesInMultiByteString;
      ++MultiByteString;
      if ( NlsLeadByteInfoTable[v5] )
      {
        if ( !BytesInMultiByteString )
        {
          v3 += 2;
          break;
        }
        --BytesInMultiByteString;
        ++MultiByteString;
      }
      v3 += 2;
    }
    *BytesInUnicodeString = v3;
  }
  else
  {
    *BytesInUnicodeString = 2 * BytesInMultiByteString;
  }
  return 0;
}
