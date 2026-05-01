/*
 * XREFs of ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x1801747A8
 * Callers:
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18017457C (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800C9FC4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<std::wstring,unsigned short * &>(_QWORD *a1, void ***a2)
{
  char *v4; // rsi
  _WORD *v5; // rbx
  void **v6; // rdx

  v4 = (char *)operator new(0x30uLL);
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj<std::wstring>::`vftable';
  v5 = v4 + 16;
  if ( v4 != (char *)-16LL )
  {
    v6 = *a2;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 7LL;
    *v5 = 0;
    std::wstring::assign((void **)v4 + 2, v6);
  }
  a1[1] = v4;
  *a1 = v5;
  return a1;
}
