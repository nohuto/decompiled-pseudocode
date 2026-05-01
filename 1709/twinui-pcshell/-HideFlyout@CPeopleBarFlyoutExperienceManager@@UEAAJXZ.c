/*
 * XREFs of ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1800ADC10
 * Callers:
 *     ?OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1800ADDF0 (-OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800AEDB0 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x1800ACCD4 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ACE30 (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AF8B0 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFFD8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::HideFlyout(CPeopleBarFlyoutExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+50h] [rbp-B0h]
  int *v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  int v9; // [rsp+68h] [rbp-98h] BYREF
  char v10; // [rsp+6Ch] [rbp-94h]
  int v11; // [rsp+90h] [rbp-70h] BYREF
  const char *v12; // [rsp+98h] [rbp-68h]
  __int64 v13; // [rsp+A0h] [rbp-60h]
  char v14; // [rsp+A8h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp-50h]
  _BYTE v16[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+148h] [rbp+48h]
  __int64 v18; // [rsp+150h] [rbp+50h]
  __int64 v19; // [rsp+158h] [rbp+58h]
  __int64 v20; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  if ( *((_DWORD *)this + 38) == 2 )
  {
    if ( !*((_DWORD *)this + 172) )
      *((_DWORD *)this + 172) = 1;
    v5[1] = 0LL;
    v5[2] = v5;
    v5[3] = 0LL;
    v6 = 0;
    v7 = &v11;
    v8 = &v9;
    v9 = 0;
    v10 = 0;
    v14 = 0;
    v11 = 0;
    v12 = "HidePeopleBarFlyout";
    v13 = 0LL;
    v15 = 1LL;
    v17 = 0LL;
    v18 = 0LL;
    memset(v16, 0, sizeof(v16));
    v19 = 0LL;
    v20 = 0LL;
    v5[0] = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
    CommonPeopleTelemetry::HidePeopleBarFlyout::StartActivity((__int64)v5, *((_DWORD *)this + 172));
    *((_DWORD *)this + 172) = 0;
    v2 = CSingleViewShellExperience::Hide((char *)this + 112, 0LL);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xDA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      v5[0] = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
      return v3;
    }
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v5,
      0LL);
    v5[0] = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  }
  return 0LL;
}
