/*
 * XREFs of ??1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800EDF04
 * Callers:
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$0 @ 0x18019EA60 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::~CrashRecovery(
        ViewManagerInteropTraceLogging::CrashRecovery *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
