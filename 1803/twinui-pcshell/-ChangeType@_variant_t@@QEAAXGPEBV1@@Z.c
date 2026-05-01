/*
 * XREFs of ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802FC3BC
 * Callers:
 *     ?GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1802FC3E8 (-GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1802FC4E4 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ?GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x1802FC614 (-GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180100340 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::ChangeType(VARIANTARG *pvarSrc, VARTYPE a2, const struct _variant_t *a3)
{
  HRESULT v3; // eax

  if ( a2 != pvarSrc->vt )
  {
    v3 = VariantChangeType(pvarSrc, pvarSrc, 0, a2);
    if ( v3 < 0 )
      _com_issue_error((char *)(unsigned int)v3);
  }
}
