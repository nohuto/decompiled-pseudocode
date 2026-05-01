/*
 * XREFs of ??1OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB8E8
 * Callers:
 *     _ViewManagerBridge::OnSystemKeyPressedComplete_::_1_::dtor$0 @ 0x1801DDBBF (_ViewManagerBridge--OnSystemKeyPressedComplete_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::~OnSystemKeyPressedComplete(
        ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
