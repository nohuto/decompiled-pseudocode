/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C0145018
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B4870 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     SearchInCHSBaseFontFileNameSuffixes @ 0x1C01450B4 (SearchInCHSBaseFontFileNameSuffixes.c)
 */

__int64 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  const UNICODE_STRING *v6; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( gcwcFontsDirectory )
  {
    v3 = gcwcFontsDirectory - 1;
    v4 = (unsigned int)v3;
    if ( a2 - (int)v3 >= 8 )
    {
      v5 = *(_QWORD *)&a1[v3];
      if ( v5 == gMSYHFontFileNamePrefix )
      {
        v6 = &gMSYHFontFileNameSuffixes;
LABEL_7:
        RtlInitUnicodeString(&DestinationString, &a1[v4 + 4]);
        LOBYTE(v2) = (int)SearchInCHSBaseFontFileNameSuffixes(&DestinationString, v6) >= 0;
        return v2;
      }
      if ( v5 == gSimsunFontFileNamePrefix )
      {
        v6 = (const UNICODE_STRING *)&gSimSunFontFileNameSuffixes;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
