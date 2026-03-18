/*
 * XREFs of ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C002B64C
 * Callers:
 *     vLinkEudcPFEsWorker @ 0x1C0009B7C (vLinkEudcPFEsWorker.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00294BC (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     bAddFlEntry @ 0x1C002BB04 (bAddFlEntry.c)
 *     bDeleteFlEntry @ 0x1C0277AC4 (bDeleteFlEntry.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0278360 (NtGdiGetEudcTimeStampEx.c)
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

  v1 = off_1C03247F0;
  v2 = 0LL;
  if ( off_1C03247F0 != (_UNKNOWN *)&off_1C03247F0 )
  {
    v4 = a1 + 1;
    do
    {
      v5 = 17LL;
      v2 = v1;
      if ( v1[16] != 64 )
        v5 = 16LL;
      v6 = a1;
      v7 = &v1[v5];
      if ( *a1 == 64 )
        v6 = v4;
      if ( !_wcsicmp(v6, v7) )
        break;
      v1 = *(_WORD **)v1;
      v2 = 0LL;
    }
    while ( v1 != (_WORD *)&off_1C03247F0 );
  }
  return (struct _FLENTRY *)v2;
}
