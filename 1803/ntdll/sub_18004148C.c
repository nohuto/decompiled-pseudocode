/*
 * XREFs of sub_18004148C @ 0x18004148C
 * Callers:
 *     sub_180041510 @ 0x180041510 (sub_180041510.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 *     _wcsnicmp @ 0x18008CC10 (_wcsnicmp.c)
 */

__int64 __fastcall sub_18004148C(wchar_t *String1, wchar_t **a2)
{
  const wchar_t *NtSystemRoot; // rax
  size_t v5; // rbx
  wchar_t *v6; // rax

  NtSystemRoot = RtlGetNtSystemRoot();
  v5 = -1LL;
  do
    ++v5;
  while ( NtSystemRoot[v5] );
  if ( !String1 )
    return 3221225485LL;
  if ( !*String1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( wcsnicmp(String1, NtSystemRoot, v5) )
    return 3221225485LL;
  v6 = &String1[v5];
  if ( *v6 != 92 )
  {
    if ( *v6 )
      return 3221225485LL;
  }
  *a2 = v6;
  return 0LL;
}
