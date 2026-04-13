/*
 * XREFs of ?do_curr_symbol@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180082530
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

_QWORD *__fastcall std::_Mpunct<wchar_t>::do_curr_symbol(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // r8
  char *v4; // rdx
  __int64 v5; // rax

  v3 = 0LL;
  v4 = *(char **)(a1 + 32);
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  if ( *(_WORD *)v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v4[2 * v5] );
    v3 = v5;
  }
  std::wstring::assign(a2, v4, v3);
  return a2;
}
