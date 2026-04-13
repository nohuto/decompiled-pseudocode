/*
 * XREFs of ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x180096244
 * Callers:
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800960B8 (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 * Callees:
 *     memcpy_0 @ 0x1800B4279 (memcpy_0.c)
 */

void **__fastcall std::_Yarn<wchar_t>::operator=(void **a1, char *a2)
{
  char *v4; // rcx
  char *i; // rbx
  signed __int64 v6; // rbx
  void *v7; // rax

  v4 = (char *)*a1;
  if ( v4 != a2 )
  {
    if ( v4 )
      free(v4);
    *a1 = 0LL;
    if ( a2 )
    {
      for ( i = a2; *(_WORD *)i; i += 2 )
        ;
      v6 = i - a2;
      v7 = malloc(v6 + 2);
      *a1 = v7;
      if ( v7 )
        memcpy_0(v7, a2, v6 + 2);
    }
  }
  return a1;
}
