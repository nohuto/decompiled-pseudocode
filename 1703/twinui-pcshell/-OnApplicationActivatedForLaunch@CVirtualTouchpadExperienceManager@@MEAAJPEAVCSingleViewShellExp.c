/*
 * XREFs of ?OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800B8310
 * Callers:
 *     <none>
 * Callees:
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B5A88 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x1800B5F04 (-TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV1.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9164 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgRefl.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnApplicationActivatedForLaunch(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        __int64 a3)
{
  _QWORD v4[40]; // [rsp+20h] [rbp-158h] BYREF

  if ( (int)a3 < 0 )
  {
    *((_DWORD *)this + 172) = 0;
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread((__int64)this + 312, v4, a3);
    wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v4);
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v4);
  }
  return 0LL;
}
