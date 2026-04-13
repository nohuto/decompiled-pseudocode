/*
 * XREFs of _Wcsxfrm @ 0x1800C02C0
 * Callers:
 *     ?do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z @ 0x1800B9E60 (-do_transform@-$collate@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x1800AD6F8 (_GetLocaleHandleByColl.c)
 *     _GetLocaleHandleById @ 0x1800AD6FC (_GetLocaleHandleById.c)
 *     __crtLCMapStringW_Stub @ 0x1800AD7CC (__crtLCMapStringW_Stub.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

size_t __cdecl Wcsxfrm(wchar_t *String1, wchar_t *End1, const wchar_t *a3, const wchar_t *a4, const _Collvec *a5)
{
  unsigned __int64 v6; // r14
  size_t v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 LocaleHandleByColl; // rax
  unsigned int v12; // r15d
  unsigned __int8 *v13; // rbp
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax

  v6 = End1 - String1;
  v7 = -1LL;
  v8 = a4 - a3;
  v9 = 0LL;
  if ( a5 )
    LocaleHandleByColl = GetLocaleHandleByColl(&a5->_Page);
  else
    LocaleHandleByColl = GetLocaleHandleById(1u);
  v12 = LocaleHandleByColl;
  if ( LocaleHandleByColl )
  {
    v13 = (unsigned __int8 *)malloc(v6);
    if ( v13 )
    {
      v14 = ___lc_collate_cp_func();
      v15 = _crtLCMapStringW_Stub(v12, 0x400u, (__int64)a3, v8, (__int64)v13, v6, v14);
      v7 = v15;
      if ( v15 )
      {
        do
        {
          String1[v9] = v13[v9];
          ++v9;
        }
        while ( v9 < v15 );
      }
      else
      {
        v16 = ___lc_collate_cp_func();
        v17 = _crtLCMapStringW_Stub(v12, 0x400u, (__int64)a3, v8, 0LL, 0, v16);
        v7 = v17;
        if ( !v17 )
          v7 = 0x7FFFFFFFLL;
      }
      free(v13);
    }
  }
  else
  {
    if ( v8 <= v6 )
      memcpy_0(String1, a3, 2 * v8);
    return v8;
  }
  return v7;
}
