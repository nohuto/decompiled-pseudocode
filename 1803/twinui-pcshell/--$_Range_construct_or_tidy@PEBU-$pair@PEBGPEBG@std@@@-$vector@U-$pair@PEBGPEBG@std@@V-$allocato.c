/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x18019A350
 * Callers:
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x18019A410 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 * Callees:
 *     ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x18014972C (-_Buy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEAU10@00AEAV?$allocator@U?$pair@PEBGPEBG@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18019A3CC (--$_Uninitialized_move_al_unchecked@PEAU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPEB.c)
 */

char __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Range_construct_or_tidy<std::pair<unsigned short const *,unsigned short const *> const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax

  LOBYTE(v6) = std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy(a1, (a3 - a2) >> 4);
  if ( (_BYTE)v6 )
  {
    try
    {
      v6 = std::_Uninitialized_move_al_unchecked<std::pair<unsigned short const *,unsigned short const *> *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
             a2,
             a3,
             *a1);
      a1[1] = v6;
    }
    catch ( ... )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)a1);
      throw;
    }
  }
  return v6;
}
