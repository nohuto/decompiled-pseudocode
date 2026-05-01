/*
 * XREFs of ??1RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18011AD54
 * Callers:
 *     __lambda_3e1390e1d2422aea3f572ae27706a686_::operator()_::_1_::dtor$1 @ 0x1801EE7D4 (__lambda_3e1390e1d2422aea3f572ae27706a686_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::~RecoverComponentHostRelationship(
        ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
