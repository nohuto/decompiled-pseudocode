/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180036718
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180001560 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180036770 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEBU?$pair@G_N@std@@PEAU12@V?$allocator@U?$pair@G_N@std@@@2@@std@@YAPEAU?$pair@G_N@0@PEBU10@0PEAU10@AEAV?$allocator@U?$pair@G_N@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180036800 (--$_Uninitialized_copy_al_unchecked@PEBU-$pair@G_N@std@@PEAU12@V-$allocator@U-$pair@G_N@std@@@2@.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned short,bool>>::_Range_construct_or_tidy<std::pair<unsigned short,bool> const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = std::vector<enum _Button>::_Buy(&qword_180136558, (a3 - a2) >> 2);
  if ( (_BYTE)result )
  {
    try
    {
      result = std::_Uninitialized_copy_al_unchecked<std::pair<unsigned short,bool> const *,std::pair<unsigned short,bool> *,std::allocator<std::pair<unsigned short,bool>>>(
                 a2,
                 a3,
                 qword_180136558);
      qword_180136560 = result;
    }
    catch ( ... )
    {
      std::vector<enum _Button>::_Tidy((unsigned __int64 *)&qword_180136558);
      throw;
    }
  }
  return result;
}
