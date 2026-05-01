/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x18008AA98
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019B87F (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019CFA4 (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$3 @ 0x1801A503E (_StartLayout--AddSchemaToCollection_--_1_--dtor$3.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$4 @ 0x1801A509E (_StartLayout--ValidateLayoutFile_--_1_--dtor$4.c)
 *     _StartLayout::GetUintAttributeValue_::_1_::dtor$0 @ 0x1801A50DF (_StartLayout--GetUintAttributeValue_--_1_--dtor$0.c)
 *     _StartLayout::GetStringAttributeValue_::_1_::dtor$1 @ 0x1801A50EB (_StartLayout--GetStringAttributeValue_--_1_--dtor$1.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180004D30 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  if ( VariantClear(this) < 0 )
    _com_issue_error();
}
