/*
 * XREFs of ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800B8720
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800B7758 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180036770 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 */

char __fastcall std::vector<enum _Button>::_Range_construct_or_tidy<enum _Button const *>(
        unsigned __int64 *a1,
        const void *a2,
        __int64 a3)
{
  size_t v5; // rdi
  char result; // al
  unsigned __int64 v7; // rbx

  v5 = a3 - (_QWORD)a2;
  result = std::vector<enum _Button>::_Buy(a1, (a3 - (__int64)a2) >> 2);
  if ( result )
  {
    try
    {
      v7 = *a1;
      memmove((void *)*a1, a2, v5);
      result = v5 + v7;
      a1[1] = v5 + v7;
    }
    catch ( ... )
    {
      std::vector<enum _Button>::_Tidy(a1);
      throw;
    }
  }
  return result;
}
