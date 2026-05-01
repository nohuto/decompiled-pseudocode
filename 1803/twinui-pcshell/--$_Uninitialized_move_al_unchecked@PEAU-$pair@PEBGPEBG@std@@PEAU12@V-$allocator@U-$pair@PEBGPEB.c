/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEAU10@00AEAV?$allocator@U?$pair@PEBGPEBG@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18019A3CC
 * Callers:
 *     ??$emplace_back@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x18014560C (--$emplace_back@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGP.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801457C8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x18019A350 (--$_Range_construct_or_tidy@PEBU-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocato.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move_al_unchecked<std::pair<unsigned short const *,unsigned short const *> *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
        _OWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  try
  {
    while ( a1 != a2 )
      *a3++ = *a1++;
  }
  catch ( ... )
  {
    throw;
  }
  return a3;
}
