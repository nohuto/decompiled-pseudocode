/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x140002D1C
 * Callers:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x140002EC0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x140003014 (-_Xbad_alloc@std@@YAXXZ.c)
 *     _callnewh_0 @ 0x140003EE1 (_callnewh_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = malloc(Size);
    if ( result )
      break;
    if ( !callnewh_0(i) )
      std::_Xbad_alloc();
  }
  return result;
}
