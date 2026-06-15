/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x18007AE3C
 * Callers:
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001A510 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 * Callees:
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( a2[3] < 0x10uLL )
  {
    memcpy_0(a1, a2, a2[2] + 1LL);
  }
  else
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[2];
  a1[3] = a2[3];
  result = a1;
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
