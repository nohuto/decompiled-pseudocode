/*
 * XREFs of _Strxfrm @ 0x1800C03EC
 * Callers:
 *     ?do_transform@?$collate@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBD0@Z @ 0x1800BF8A0 (-do_transform@-$collate@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x1800AD6F8 (_GetLocaleHandleByColl.c)
 *     _GetLocaleHandleById @ 0x1800AD6FC (_GetLocaleHandleById.c)
 *     __crtLCMapStringA_Stub @ 0x1800AD7C4 (__crtLCMapStringA_Stub.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

size_t __cdecl Strxfrm(char *String1, char *End1, const char *a3, const char *a4, const _Collvec *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  size_t v7; // rdi
  __int64 LocaleHandleById; // rbp
  unsigned int v11; // r14d
  __int64 LocaleHandleByColl; // rax
  int v13; // eax

  v5 = a4 - a3;
  v6 = End1 - String1;
  v7 = -1LL;
  if ( a5 )
  {
    LocaleHandleByColl = GetLocaleHandleByColl(&a5->_Page);
    v11 = *(&a5->_Page + 1);
    LocaleHandleById = LocaleHandleByColl;
  }
  else
  {
    LocaleHandleById = GetLocaleHandleById(1u);
    v11 = ___lc_collate_cp_func();
  }
  if ( LocaleHandleById || v11 )
  {
    v13 = _crtLCMapStringA_Stub(0LL, LocaleHandleById, 1024LL, (__int64)a3, v5, 0LL, 0, v11, 1);
    if ( v13 )
    {
      v7 = v13;
      if ( v13 <= (int)v6 )
        _crtLCMapStringA_Stub(0LL, LocaleHandleById, 1024LL, (__int64)a3, v5, (__int64)String1, v6, v11, 1);
    }
  }
  else
  {
    if ( v5 <= v6 )
      memcpy_0(String1, a3, v5);
    return v5;
  }
  return v7;
}
