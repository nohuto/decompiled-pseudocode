/*
 * XREFs of ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00B241C
 * Callers:
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B4870 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     vLinkEudcPFEsWorker @ 0x1C00B5CE8 (vLinkEudcPFEsWorker.c)
 *     bDeleteFlEntry @ 0x1C0274498 (bDeleteFlEntry.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0274D30 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     <none>
 */

struct _FLENTRY *__fastcall FindBaseFontEntry(const unsigned __int16 *a1)
{
  _WORD *v1; // rbx
  _WORD *v2; // rdi
  const unsigned __int16 *v4; // rbp
  __int64 v5; // rdx
  const wchar_t *v6; // rcx
  const wchar_t *v7; // rdx

  v1 = off_1C03207F0;
  v2 = 0LL;
  if ( off_1C03207F0 != (_UNKNOWN *)&off_1C03207F0 )
  {
    v4 = a1 + 1;
    do
    {
      v5 = 16LL;
      v6 = a1;
      v2 = v1;
      if ( v1[16] == 64 )
        v5 = 17LL;
      v7 = &v1[v5];
      if ( *a1 == 64 )
        v6 = v4;
      if ( !_wcsicmp(v6, v7) )
        break;
      v1 = *(_WORD **)v1;
      v2 = 0LL;
    }
    while ( v1 != (_WORD *)&off_1C03207F0 );
  }
  return (struct _FLENTRY *)v2;
}
