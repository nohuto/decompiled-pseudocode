/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x18007FB60
 * Callers:
 *     RtlxUnicodeStringToOemSize @ 0x18007FB30 (RtlxUnicodeStringToOemSize.c)
 *     wcstombs @ 0x18009C000 (wcstombs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r10d
  ULONG v4; // r8d
  __int64 v6; // rax

  v3 = 0;
  v4 = BytesInUnicodeString >> 1;
  if ( NlsMbCodePageTag )
  {
    for ( ; v4; --v4 )
    {
      v6 = *UnicodeString++;
      v3 += (HIBYTE(*(_WORD *)(qword_180159D70 + 2 * v6)) != 0) + 1;
    }
    *BytesInMultiByteString = v3;
  }
  else
  {
    *BytesInMultiByteString = v4;
  }
  return 0;
}
