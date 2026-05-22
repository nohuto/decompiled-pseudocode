/*
 * XREFs of ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180036770
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180036718 (--$_Range_construct_or_tidy@PEBU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180036CD0 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B7F00 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800B8060 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800B8720 (--$_Range_construct_or_tidy@PEBW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@st.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

char __fastcall std::vector<enum _Button>::_Buy(_QWORD *a1, unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v4; // rdi
  void *v5; // rax
  _QWORD *v6; // rcx

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v4 = 4 * a2;
    if ( 4 * a2 < 0x1000 )
    {
      v6 = operator new(4 * a2);
    }
    else
    {
      if ( v4 + 39 < v4 )
        std::_Default_allocate_traits<1>::_Fail();
      v5 = operator new(v4 + 39);
      v6 = (_QWORD *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v6 - 1) = v5;
    }
    *a1 = v6;
    a1[1] = v6;
    result = 1;
    a1[2] = v4 + *a1;
  }
  return result;
}
