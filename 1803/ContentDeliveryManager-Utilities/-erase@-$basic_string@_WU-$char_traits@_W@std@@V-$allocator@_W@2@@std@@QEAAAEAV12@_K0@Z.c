/*
 * XREFs of ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x180037B9C
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800366EC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18009F9F4 (-RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180018090 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rbx
  bool v5; // cf
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  char *v9; // rcx
  _QWORD *v10; // rax

  v3 = a1[2];
  v4 = a1;
  if ( v3 < a2 )
    std::wstring::_Xran();
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      v7 = a1[3];
      if ( v7 >= 8 )
        a1 = (_QWORD *)*a1;
      v8 = v3 - a3;
      v9 = (char *)a1 + 2 * a2;
      if ( v8 != a2 )
      {
        memmove(v9, &v9[2 * a3], 2 * (v8 - a2));
        v7 = v4[3];
      }
      v4[2] = v8;
      if ( v7 < 8 )
        v10 = v4;
      else
        v10 = (_QWORD *)*v4;
      *((_WORD *)v10 + v8) = 0;
    }
  }
  else
  {
    v5 = a1[3] < 8uLL;
    a1[2] = a2;
    if ( v5 )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    *((_WORD *)v6 + a2) = 0;
  }
  return v4;
}
