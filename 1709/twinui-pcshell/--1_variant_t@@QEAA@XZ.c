/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x18008CE4C
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801EA221 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801ECC84 (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$3 @ 0x1801F7505 (_StartLayout--AddSchemaToCollection_--_1_--dtor$3.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$4 @ 0x1801F7559 (_StartLayout--ValidateLayoutFile_--_1_--dtor$4.c)
 *     _StartLayout::GetUintAttributeValue_::_1_::dtor$0 @ 0x1801F759D (_StartLayout--GetUintAttributeValue_--_1_--dtor$0.c)
 *     _StartLayout::GetStringAttributeValue_::_1_::dtor$1 @ 0x1801F75A9 (_StartLayout--GetStringAttributeValue_--_1_--dtor$1.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18000506C (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  if ( VariantClear(this) < 0 )
    _com_issue_error();
}
