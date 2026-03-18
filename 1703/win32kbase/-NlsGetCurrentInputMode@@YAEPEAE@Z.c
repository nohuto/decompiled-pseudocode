/*
 * XREFs of ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C012D8F4
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D660 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D7B0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D9B0 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DB80 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DDD0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DEE0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C012DFF0 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

unsigned __int8 __fastcall NlsGetCurrentInputMode(unsigned __int8 *a1)
{
  unsigned __int8 v1; // r10
  unsigned __int8 v2; // al
  _BYTE *v3; // r9

  v1 = *a1;
  if ( !*a1 )
    return v1;
  v2 = *a1;
  while ( !(unsigned int)NlsTestKeyStateToggle(v2) )
  {
    v2 = v3[1];
    if ( !v2 )
      return v1;
  }
  return *v3;
}
