/*
 * XREFs of zzzDestroyCaret @ 0x1C00AFE40
 * Callers:
 *     xxxCheckFocus @ 0x1C0020200 (xxxCheckFocus.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00B006C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00B031C (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret(v1, v0, v2, v3);
  return 1LL;
}
