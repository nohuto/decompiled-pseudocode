/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180042044
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180001470 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEAU?$pair@G_N@std@@PEAU12@V?$allocator@U?$pair@G_N@std@@@2@@std@@YAPEAU?$pair@G_N@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@G_N@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800420E8 (--$_Uninitialized_copy_al_unchecked@PEAU-$pair@G_N@std@@PEAU12@V-$allocator@U-$pair@G_N@std@@@2@.c)
 */

void __fastcall std::vector<std::pair<unsigned short,bool>>::_Range_construct_or_tidy<std::pair<unsigned short,bool> const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // rbx
  void *v6; // rax

  v5 = (a3 - a2) >> 2;
  xmmword_18010F050 = 0LL;
  qword_18010F060 = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v6 = std::_Allocate(v5, 4uLL);
    *(_QWORD *)&xmmword_18010F050 = v6;
    *((_QWORD *)&xmmword_18010F050 + 1) = v6;
    qword_18010F060 = (__int64)v6 + 4 * v5;
    try
    {
      *((_QWORD *)&xmmword_18010F050 + 1) = std::_Uninitialized_copy_al_unchecked<std::pair<unsigned short,bool> *,std::pair<unsigned short,bool> *,std::allocator<std::pair<unsigned short,bool>>>(
                                              a2,
                                              a3,
                                              v6);
    }
    catch ( ... )
    {
      std::vector<enum Windows::Gaming::Input::GamepadButtons>::~vector<enum Windows::Gaming::Input::GamepadButtons>((unsigned __int64 *)&xmmword_18010F050);
      throw;
    }
  }
}
