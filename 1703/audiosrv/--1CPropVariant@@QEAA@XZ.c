/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x18007AD58
 * Callers:
 *     _SearchForHeadphones_::_1_::dtor$4 @ 0x1800593B4 (_SearchForHeadphones_--_1_--dtor$4.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsUInt32__tagpropertykey__::_1_::dtor$0 @ 0x1800593C0 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsUInt32__tagpropertykey__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
