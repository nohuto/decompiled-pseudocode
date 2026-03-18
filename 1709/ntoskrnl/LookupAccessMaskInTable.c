/*
 * XREFs of LookupAccessMaskInTable @ 0x14057C44C
 * Callers:
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x14073215C (LocalConvertAclToString.c)
 * Callees:
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAccessMaskInTable(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rdi
  const wchar_t **v4; // rsi
  unsigned int i; // ebx

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_1403544B8;
  for ( i = 0; i < 0x1C; ++i )
  {
    if ( (a3 & (_DWORD)v4[1]) == a3
      && (Str1 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
    {
      break;
    }
    v4 += 3;
  }
  if ( i < 0x1C )
    return &(&off_1403544B0)[3 * i];
  return (wchar_t **)v3;
}
