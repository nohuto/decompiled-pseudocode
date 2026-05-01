/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18014705C
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1801470DC (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1801E2E90 (_vsnwprintf.c)
 */

wchar_t *wil::details::LogStringPrintf(wil::details *this, wchar_t *a2, const wchar_t *a3, const wchar_t *a4, ...)
{
  signed __int64 v5; // r10
  wchar_t *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  const wchar_t *Args; // [rsp+58h] [rbp+20h] BYREF

  Args = a4;
  v5 = ((char *)a2 - (char *)this) >> 1;
  v6 = (wchar_t *)this;
  if ( (unsigned __int64)(v5 - 1) > 0x7FFFFFFE )
  {
    if ( v5 )
      *(_WORD *)this = 0;
  }
  else
  {
    v7 = v5 - 1;
    v8 = vsnwprintf((wchar_t *)this, v5 - 1, a3, (va_list)&Args);
    if ( v8 < 0 || v8 >= v7 )
      v6[v7] = 0;
  }
  if ( a2 != v6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    v6 += v9;
  }
  return v6;
}
