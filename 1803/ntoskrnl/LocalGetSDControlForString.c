/*
 * XREFs of LocalGetSDControlForString @ 0x140601C9C
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140600EC4 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 */

__int64 __fastcall LocalGetSDControlForString(wchar_t *Str1, int a2, _WORD *a3, const wchar_t **a4)
{
  wchar_t v7; // ax
  wchar_t *v8; // rdx
  const wchar_t *v9; // rbx
  unsigned int v10; // esi
  const wchar_t **v11; // rdi

  if ( !Str1 || !a3 || !a4 )
    return 87LL;
  *a3 = 0;
  do
  {
    v7 = *Str1;
    v8 = Str1;
    if ( *Str1 != 32 )
      break;
    ++Str1;
  }
  while ( Str1 );
  v9 = v8 + 1;
  if ( v7 != 32 )
    v9 = v8;
LABEL_8:
  v10 = 0;
  v11 = (const wchar_t **)&unk_1402F2FB8;
  do
  {
    if ( (a2 & (_DWORD)v11[1]) == a2 && !wcsnicmp(v9, *(v11 - 1), *(unsigned int *)v11) )
    {
      *a3 |= *((_WORD *)&ControlLookup + 12 * v10 + 6);
      for ( v9 += *((unsigned int *)&ControlLookup + 6 * v10 + 2); v9; ++v9 )
      {
        if ( *v9 != 32 )
          break;
      }
      goto LABEL_8;
    }
    ++v10;
    v11 += 3;
  }
  while ( v10 < 6 );
  *a4 = v9;
  return 0LL;
}
