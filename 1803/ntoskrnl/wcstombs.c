/*
 * XREFs of wcstombs @ 0x14018A8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x140569EB0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1405C49A0 (RtlUnicodeToMultiByteN.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  __int64 v3; // rax
  NTSTATUS v4; // eax
  __int64 BytesInMultiByteString; // [rsp+40h] [rbp+8h] BYREF

  BytesInMultiByteString = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( Dest )
    v4 = RtlUnicodeToMultiByteN(Dest, MaxCount, (PULONG)&BytesInMultiByteString, Source, 2 * v3 + 2);
  else
    v4 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, Source, 2 * v3 + 2);
  if ( v4 >= 0 )
    return BytesInMultiByteString - 1;
  gbl_errno = 42;
  return -1LL;
}
