/*
 * XREFs of ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C012D744
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D660 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D7B0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D9B0 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DB80 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DDD0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DEE0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsClearKeyStateToggle(unsigned __int8 a1)
{
  if ( gpqForeground )
    *(_BYTE *)(((unsigned __int64)a1 >> 2) + gpqForeground + 192) &= ~(1 << (2 * (a1 & 3) + 1));
  *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)a1 >> 2)) &= ~(1 << (2 * (a1 & 3) + 1));
}
