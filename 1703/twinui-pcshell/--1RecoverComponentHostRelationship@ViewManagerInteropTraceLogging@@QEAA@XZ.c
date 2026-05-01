/*
 * XREFs of ??1RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800F0324
 * Callers:
 *     __lambda_166d3a698f4a828bb68fc489a415f587_::operator()_::_1_::dtor$1 @ 0x18019E5C1 (__lambda_166d3a698f4a828bb68fc489a415f587_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::~RecoverComponentHostRelationship(
        ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
