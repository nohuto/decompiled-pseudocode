/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x1800F0130
 * Callers:
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800EFC38 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800EFD54 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEBU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEBU10@0PEAU10@AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008C9F8 (--$_Uninitialized_copy_al_unchecked@PEBU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPEB.c)
 */

_OWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Range_construct_or_tidy<std::pair<unsigned short const *,unsigned short const *> const *>(
        unsigned __int64 *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  unsigned __int64 v6; // rbx
  _OWORD *result; // rax
  _OWORD *v8; // rax

  v6 = a3 - a2;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v8 = std::_Allocate(v6, 0x10uLL);
    *a1 = (unsigned __int64)v8;
    a1[1] = (unsigned __int64)v8;
    a1[2] = *a1 + 16 * v6;
    try
    {
      result = std::_Uninitialized_copy_al_unchecked<std::pair<unsigned short const *,unsigned short const *> const *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
                 a2,
                 a3,
                 v8);
      a1[1] = (unsigned __int64)result;
    }
    catch ( ... )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(a1);
      throw;
    }
  }
  return result;
}
