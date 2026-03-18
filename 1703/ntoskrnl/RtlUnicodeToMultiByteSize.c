/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x140443EC0
 * Callers:
 *     wcstombs @ 0x14016BE30 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406E5B30 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r10d
  ULONG v4; // r8d
  __int64 v6; // rax

  v3 = 0;
  v4 = BytesInUnicodeString >> 1;
  if ( (_BYTE)NlsMbCodePageTag )
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
  return 0;
}
