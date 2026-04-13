/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004E260
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18004E310 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800BA228 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( a2[3] >= 0x10uLL )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  else if ( a2[2] != -1LL )
  {
    memmove(a1, a2, a2[2] + 1LL);
  }
  a1[2] = a2[2];
  a1[3] = a2[3];
  result = a1;
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
