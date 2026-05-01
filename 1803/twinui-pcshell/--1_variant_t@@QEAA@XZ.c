/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x180145B64
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180148B08 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019B4CF (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$3 @ 0x1802FBE55 (_StartLayout--AddSchemaToCollection_--_1_--dtor$3.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$4 @ 0x1802FC205 (_StartLayout--ValidateLayoutFile_--_1_--dtor$4.c)
 *     _StartLayout::GetBoolAttributeValue_::_1_::dtor$0 @ 0x1802FC4D6 (_StartLayout--GetBoolAttributeValue_--_1_--dtor$0.c)
 *     _StartLayout::GetStringAttributeValue_::_1_::dtor$1 @ 0x1802FC608 (_StartLayout--GetStringAttributeValue_--_1_--dtor$1.c)
 *     _StartLayout::GetUintAttributeValue_::_1_::dtor$0 @ 0x1802FC6EF (_StartLayout--GetUintAttributeValue_--_1_--dtor$0.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180100340 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  HRESULT v1; // eax

  v1 = VariantClear(this);
  if ( v1 < 0 )
    _com_issue_error((char *)(unsigned int)v1);
}
