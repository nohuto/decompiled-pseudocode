/*
 * XREFs of ??1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800F7248
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 *     _ViewEventDispatcher::OnShellHookMessage_::_1_::dtor$3 @ 0x1800B2C20 (_ViewEventDispatcher--OnShellHookMessage_--_1_--dtor$3.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F04C0 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 *     _ViewEventDispatcher::_HandleWindowCreated_::_1_::dtor$0 @ 0x1800F060D (_ViewEventDispatcher--_HandleWindowCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated(
        ViewManagerInteropTraceLogging::HandleWindowCreated *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
