/*
 * XREFs of BuildAndLoadLinkedFontRoutine @ 0x1C00B1B80
 * Callers:
 *     <none>
 * Callees:
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall BuildAndLoadLinkedFontRoutine(
        wchar_t *Str1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8

  v6 = a4;
  if ( a4 > 0x7FFFFFFE )
    return 3221225495LL;
  v9 = (void *)PALLOCMEM2(2 * a4 + 2);
  if ( !v9 )
    return 3221225495LL;
  if ( _wcsicmp(Str1, L"SystemDefaultEUDCFont") )
  {
    memmove(v9, a3, (unsigned int)v6);
    *((_WORD *)v9 + (v6 >> 1)) = 0;
    bAddFlEntry(Str1, v9, a6, 0xFFFFFFFFLL, 0LL);
  }
  Win32FreePool(v9, v10, v11);
  return 0LL;
}
