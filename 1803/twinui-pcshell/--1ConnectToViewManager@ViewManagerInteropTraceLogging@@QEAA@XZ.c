/*
 * XREFs of ??1ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB7F8
 * Callers:
 *     ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1801E14B4 (-WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::ConnectToViewManager::~ConnectToViewManager(
        ViewManagerInteropTraceLogging::ConnectToViewManager *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
