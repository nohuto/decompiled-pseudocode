/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x180096ED4
 * Callers:
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsUInt32__tagpropertykey__::_1_::dtor$0 @ 0x18006B322 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsUInt32__tagpropertykey__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
