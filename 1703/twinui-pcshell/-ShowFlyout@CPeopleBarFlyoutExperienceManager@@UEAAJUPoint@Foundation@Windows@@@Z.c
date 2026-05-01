/*
 * XREFs of ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1800A1C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A0D50 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToMember@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1800A0F68 (-TransferToMember@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A164C (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800A2E80 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A3298 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ??$Start@AEAUPoint@Foundation@Windows@@@ShowPeopleBarFlyout@CommonPeopleTelemetry@@SA?AV01@AEAUPoint@Foundation@Windows@@@Z @ 0x1800A3D7C (--$Start@AEAUPoint@Foundation@Windows@@@ShowPeopleBarFlyout@CommonPeopleTelemetry@@SA-AV01@AEAUP.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::ShowFlyout(__int64 a1, __int64 a2)
{
  CPeopleBarFlyoutExperienceManager *v4; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // r8
  int v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h]
  _QWORD v13[40]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v14[40]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  v12 = -2LL;
  *(_QWORD *)v11 = a2;
  CommonPeopleTelemetry::ShowPeopleBarFlyout::Start<Windows::Foundation::Point &>(v13, v11);
  if ( GetTickCount64() - *(_QWORD *)(a1 + 592) <= 0x64 )
    goto LABEL_6;
  v5 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  *(_QWORD *)(a1 + 248) = a2;
  v6 = CSingleViewShellExperience::Show(a1 + 48, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v8 = CommonPeopleTelemetry::ShowPeopleBarFlyout::TransferToMember((__int64)v13, v14);
    CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=(a1 + 264, (__int64)v8, v9);
    v14[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
  v13[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return v7;
}
