/*
 * XREFs of ?TransferToMember@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x1800B5F38
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800B7360 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800B9290 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflect.c)
 */

_QWORD *__fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToMember(
        __int64 a1,
        _QWORD *a2)
{
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    0LL);
  *a2 = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  return a2;
}
