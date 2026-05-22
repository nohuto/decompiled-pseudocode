/*
 * XREFs of ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x180080C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::UnregisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  struct ISupportedInputUpdateObserver **v2; // rax
  struct ISupportedInputUpdateObserver **i; // rcx

  v2 = (struct ISupportedInputUpdateObserver **)*((_QWORD *)this + 79);
  for ( i = (struct ISupportedInputUpdateObserver **)*((_QWORD *)this + 78); i != v2 && *i != a2; ++i )
    ;
  memmove(i, i + 1, (char *)v2 - (char *)(i + 1));
  *((_QWORD *)this + 79) -= 8LL;
  return 0LL;
}
