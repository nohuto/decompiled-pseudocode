/*
 * XREFs of _GetLocaleName @ 0x1800AD714
 * Callers:
 *     _Getctype @ 0x1800A599C (_Getctype.c)
 *     _Getcvt @ 0x1800A5BB4 (_Getcvt.c)
 *     _Getcoll @ 0x1800C0044 (_Getcoll.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(unsigned int a1)
{
  wchar_t *wlocale; // rbx
  _locale_t current_locale; // rax
  struct localeinfo_struct *v4; // rdi
  __int64 v5; // rdx

  wlocale = 0LL;
  current_locale = _get_current_locale();
  v4 = current_locale;
  if ( current_locale )
  {
    v5 = a1;
    wlocale = current_locale->locinfo->lc_category[v5].wlocale;
    if ( wlocale )
      wlocale = _wcsdup(current_locale->locinfo->lc_category[v5].wlocale);
    _free_locale(v4);
  }
  return wlocale;
}
