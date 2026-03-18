/*
 * XREFs of ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D100
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C012D5D0 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsKanaModeToggleProc(struct tagKE *a1)
{
  int v1; // eax
  __int64 v2; // r10
  __int16 v3; // r9
  __int16 v4; // dx
  __int16 v5; // dx

  v1 = NlsTestKeyStateToggle(0x15u);
  v4 = v3 & 0xF00;
  *(_WORD *)(v2 + 2) = v3 & 0xF00;
  if ( v3 < 0 )
    return 0LL;
  if ( v1 )
    v5 = v4 | 0x8015;
  else
    v5 = v4 | 0x15;
  *(_WORD *)(v2 + 2) = v5;
  return 1LL;
}
