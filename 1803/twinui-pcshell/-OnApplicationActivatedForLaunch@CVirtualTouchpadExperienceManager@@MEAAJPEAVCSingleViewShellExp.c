/*
 * XREFs of ?OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x180181E70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x180180960 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801831C4 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgRefl.c)
 *     ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x180183548 (-TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV1.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnApplicationActivatedForLaunch(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        int a3)
{
  _BYTE v5[320]; // [rsp+20h] [rbp-158h] BYREF

  if ( a3 < 0 )
  {
    *((_DWORD *)this + 172) = 0;
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread((char *)this + 312, v5);
    wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v5,
      (unsigned int)a3);
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v5);
  }
  return 0LL;
}
