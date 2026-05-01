/*
 * XREFs of ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x180180960
 * Callers:
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180180AA0 (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x180180CA0 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18018177C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x180181E70 (-OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExp.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180182E20 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 *     _CVirtualTouchpadExperienceManager::Show_::_1_::dtor$1 @ 0x18018308E (_CVirtualTouchpadExperienceManager--Show_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180180820 (--1-$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801813FC (-Destroy@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgR.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180183D08 (-reset@-$shared_object@V-$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflect.c)
 */

void __fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  *(_QWORD *)this = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchpadControllerExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchpadControllerExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchpadControllerExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)((char *)this + 8));
}
