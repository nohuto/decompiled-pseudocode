/*
 * XREFs of ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C012CD24
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012CC40 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012CD90 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012CF90 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D160 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D3B0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D4C0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsClearKeyStateToggle(unsigned __int8 a1)
{
  if ( gpqForeground )
    *(_BYTE *)(((unsigned __int64)a1 >> 2) + gpqForeground + 224) &= ~(1 << (2 * (a1 & 3) + 1));
  *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)a1 >> 2)) &= ~(1 << (2 * (a1 & 3) + 1));
}
