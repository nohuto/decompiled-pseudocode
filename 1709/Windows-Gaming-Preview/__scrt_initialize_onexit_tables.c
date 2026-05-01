/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x1800413B0
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180041268 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180041660 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x180041AFC (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180041E7C (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x180042046 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  _PVFV *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-20h]

  if ( !byte_18005BA50 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18004148ELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      v3 = (_PVFV *)(_security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)));
      *(_QWORD *)&v4 = v3;
      *((_QWORD *)&v4 + 1) = v3;
      *(_OWORD *)&Table._first = v4;
      *(_QWORD *)&v4 = v3;
      *((_QWORD *)&v4 + 1) = v3;
      Table._end = v3;
      *(_OWORD *)&stru_18005BA38._first = v4;
      stru_18005BA38._end = v3;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_18005BA38) )
    {
      return 0;
    }
    byte_18005BA50 = 1;
  }
  return 1;
}
