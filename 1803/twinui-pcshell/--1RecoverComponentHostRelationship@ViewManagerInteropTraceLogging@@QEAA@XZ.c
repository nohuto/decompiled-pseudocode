/*
 * XREFs of ??1RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801C88D8
 * Callers:
 *     _lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator() @ 0x1801C9430 (_lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_--operator().c)
 *     __lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator()_::_1_::dtor$1 @ 0x1801C967E (__lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::~RecoverComponentHostRelationship(
        ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
