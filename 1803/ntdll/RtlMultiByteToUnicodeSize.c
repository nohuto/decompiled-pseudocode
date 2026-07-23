/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x180083760
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x1800E51A0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180063BE0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( byte_18015ADB1 )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    if ( NlsMbCodePageTag )
    {
      while ( BytesInMultiByteString )
      {
        v5 = *(unsigned __int8 *)MultiByteString;
        --BytesInMultiByteString;
        ++MultiByteString;
        if ( word_18015ADC0[v5] )
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
    }
    else
    {
      v3 = 2 * BytesInMultiByteString;
    }
    *BytesInUnicodeString = v3;
  }
  return 0;
}
