/*
 * XREFs of ?Hide@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B31D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B26D8 (--1-$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag.c)
 *     ?Destroy@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3C80 (-Destroy@-$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflec.c)
 *     ?Stop@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B43A8 (-Stop@-$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector.c)
 *     ??$Start@$$V@Hide@WelcomeScreenExperienceManagerTelemetry@@SA?AV01@XZ @ 0x1800B4AE0 (--$Start@$$V@Hide@WelcomeScreenExperienceManagerTelemetry@@SA-AV01@XZ.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18018300C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWelcomeScreenExperienceManager::Hide(CWelcomeScreenExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  WelcomeScreenExperienceManagerTelemetry::Hide::Start<>((WelcomeScreenExperienceManagerTelemetry::Hide *)v5);
  v2 = CSingleViewShellExperience::Hide((char *)this + 136, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  v5[0] = &WelcomeScreenExperienceManagerTelemetry::Hide::`vftable';
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  return v3;
}
