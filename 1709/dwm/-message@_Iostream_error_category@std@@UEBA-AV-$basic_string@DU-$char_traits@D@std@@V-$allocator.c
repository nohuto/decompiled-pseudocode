/*
 * XREFs of ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x140003450
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1400031B4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?_Syserror_map@std@@YAPEBDH@Z @ 0x140003558 (-_Syserror_map@std@@YAPEBDH@Z.c)
 */

_QWORD *__fastcall std::_Iostream_error_category::message(__int64 a1, _QWORD *a2, int a3)
{
  size_t v4; // r8
  char *v5; // rdx
  const char *v6; // rax
  __int64 v7; // rax

  if ( a3 == 1 )
  {
    a2[3] = 15LL;
    a2[2] = 0LL;
    *(_BYTE *)a2 = 0;
    v4 = 21LL;
    v5 = "iostream stream error";
  }
  else
  {
    v6 = std::_Syserror_map(a3);
    v4 = 0LL;
    a2[3] = 15LL;
    a2[2] = 0LL;
    v5 = "unknown error";
    *(_BYTE *)a2 = 0;
    if ( v6 )
      v5 = (char *)v6;
    if ( *v5 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v5[v7] );
      v4 = v7;
    }
  }
  std::string::assign(a2, v5, v4);
  return a2;
}
