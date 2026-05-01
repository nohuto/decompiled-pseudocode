/*
 * XREFs of ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1800A1D40
 * Callers:
 *     ?OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1800A1E20 (-OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A28D0 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A164C (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A3298 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A39C8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ??$Start@AEAW4PeopleFlyoutAction@@@HidePeopleBarFlyout@CommonPeopleTelemetry@@SA?AV01@AEAW4PeopleFlyoutAction@@@Z @ 0x1800A3E38 (--$Start@AEAW4PeopleFlyoutAction@@@HidePeopleBarFlyout@CommonPeopleTelemetry@@SA-AV01@AEAW4Peopl.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801815C8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::HideFlyout(CPeopleBarFlyoutExperienceManager *this)
{
  _DWORD *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v2 = (_DWORD *)((char *)this + 612);
  if ( !*((_DWORD *)this + 153) )
    *v2 = 1;
  CommonPeopleTelemetry::HidePeopleBarFlyout::Start<enum PeopleFlyoutAction &>(v6, (char *)this + 612);
  *v2 = 0;
  v3 = CSingleViewShellExperience::DestroyView((CPeopleBarFlyoutExperienceManager *)((char *)this + 48));
  v4 = v3;
  if ( v3 >= 0 )
  {
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x70,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  v6[0] = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
  return v4;
}
