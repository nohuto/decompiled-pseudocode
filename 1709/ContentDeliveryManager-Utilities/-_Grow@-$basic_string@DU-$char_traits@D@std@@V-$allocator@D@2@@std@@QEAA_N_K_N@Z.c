/*
 * XREFs of ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180015E38
 * Callers:
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18004BBF8 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180015E24 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800163DC (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800B4279 (memcpy_0.c)
 */

bool __fastcall std::string::_Grow(void **a1, unsigned __int64 a2, char a3)
{
  _QWORD *v4; // rbx
  size_t v5; // rsi
  void *v6; // rbp
  bool v7; // zf

  v4 = a1;
  if ( a2 == -1LL )
    std::wstring::_Xlen();
  if ( (unsigned __int64)a1[3] < a2 )
  {
    std::string::_Copy(a1);
LABEL_17:
    v7 = a2 == 0;
    return !v7;
  }
  if ( a3 && a2 < 0x10 )
  {
    v5 = (size_t)a1[2];
    if ( a2 < v5 )
      v5 = a2;
    if ( (unsigned __int64)a1[3] >= 0x10 )
    {
      v6 = *a1;
      if ( v5 )
        memcpy_0(a1, *a1, v5);
      operator delete(v6);
    }
    v4[3] = 15LL;
    v4[2] = v5;
    *((_BYTE *)v4 + v5) = 0;
    goto LABEL_17;
  }
  v7 = a2 == 0;
  if ( !a2 )
  {
    a1[2] = 0LL;
    if ( (unsigned __int64)a1[3] >= 0x10 )
      v4 = *a1;
    *(_BYTE *)v4 = 0;
    goto LABEL_17;
  }
  return !v7;
}
