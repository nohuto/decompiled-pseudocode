/*
 * XREFs of LookupAceTypeInTable @ 0x140601958
 * Callers:
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x140795A60 (LocalConvertAclToString.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAceTypeInTable(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rdi
  const wchar_t **v4; // rsi
  unsigned int i; // ebx

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_140397BA8;
  for ( i = 0; i < 0x11; ++i )
  {
    if ( (a3 & (_DWORD)v4[1]) == a3
      && (Str1 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
    {
      break;
    }
    v4 += 3;
  }
  if ( i < 0x11 )
    return &(&off_140397BA0)[3 * i];
  return (wchar_t **)v3;
}
