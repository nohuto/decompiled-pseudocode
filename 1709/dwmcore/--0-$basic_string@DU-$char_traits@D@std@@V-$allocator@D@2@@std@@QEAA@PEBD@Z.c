/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x18011E110
 * Callers:
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1801202A0 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1801200C4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, _BYTE *a2)
{
  size_t v2; // r8
  __int64 v4; // rax

  v2 = 0LL;
  a1[3] = 15LL;
  a1[2] = 0LL;
  *(_BYTE *)a1 = 0;
  if ( *a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v2 = v4;
  }
  std::string::assign(a1, a2, v2);
  return a1;
}
