/*
 * XREFs of DownLevelGetParentLanguageName @ 0x1402C04A0
 * Callers:
 *     LdrpGetParentLangId @ 0x14014D810 (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14016CB10 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140188C00 (bsearch.c)
 */

__int64 __fastcall DownLevelGetParentLanguageName(const void *a1, char *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rbx
  char *v5; // r8
  unsigned __int64 v6; // rbx

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = bsearch(a1, &off_1402EEA20, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (char *)(&off_1402EF7C0)[2 * dword_1402EF7CC[4 * word_140305A20[(v3 - (_BYTE *)&off_1402EEA20) >> 3]]];
  do
    ++v4;
  while ( *(_WORD *)&v5[2 * v4] );
  v6 = v4 + 1;
  if ( (int)StringCchCopyNW(a2, 85LL, v5, v6) < 0 )
    LODWORD(v6) = 0;
  return (unsigned int)v6;
}
