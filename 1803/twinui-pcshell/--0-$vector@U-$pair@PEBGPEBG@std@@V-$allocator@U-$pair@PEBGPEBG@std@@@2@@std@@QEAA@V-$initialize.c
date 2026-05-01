/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x18019A410
 * Callers:
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019B510 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019B678 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x18019A350 (--$_Range_construct_or_tidy@PEBU-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocato.c)
 */

_QWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        __int64 *a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Range_construct_or_tidy<std::pair<unsigned short const *,unsigned short const *> const *>(
    a1,
    *a2,
    a2[1]);
  return a1;
}
