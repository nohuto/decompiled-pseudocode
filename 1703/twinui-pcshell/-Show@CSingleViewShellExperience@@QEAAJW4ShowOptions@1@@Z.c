/*
 * XREFs of ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128
 * Callers:
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009335C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     _lambda_0cfb79e9f82d4b070b46ace9fa651aa3_::operator() @ 0x18009FC58 (_lambda_0cfb79e9f82d4b070b46ace9fa651aa3_--operator().c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1800A1C00 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800A49E0 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A5010 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     ?OnViewPropertiesChanging@CPeopleTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A64E0 (-OnViewPropertiesChanging@CPeopleTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z @ 0x1800A7118 (-Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@00HH00@Z @ 0x1800A7410 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@00HH00@Z.c)
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1800ABE40 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 *     ?Show@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B3280 (-Show@CWelcomeScreenExperienceManager@@UEAAJXZ.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800B7360 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 *     ?Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800C1140 (-Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180180AE0 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180181FD4 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x1801848E8 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180188E30 (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::Show(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  unsigned int v2; // esi
  ExperienceManagerUtils *v4; // rcx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v10[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v9[3] = -2LL;
  v2 = (unsigned int)a2;
  v4 = *(ExperienceManagerUtils **)(a1 + 24);
  if ( v4 )
    v9[0] = (__int64)ExperienceManagerUtils::WindowFromViewWrapper(v4, a2);
  else
    v9[0] = 0LL;
  v9[1] = (__int64)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v9[2] = (__int64)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::Show::Start<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
    (SingleViewExperienceTelemetry::Show *)v10,
    (__int64)v9);
  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    if ( *(_DWORD *)(a1 + 40) != 2 )
    {
      *(_DWORD *)(a1 + 64) = 1;
      *(_DWORD *)(a1 + 68) = 0;
      if ( (v2 & 1) != 0 )
        *(_DWORD *)(a1 + 68) |= 1u;
      if ( (v2 & 2) != 0 )
        *(_DWORD *)(a1 + 68) |= 2u;
      if ( (v2 & 4) != 0 )
        *(_DWORD *)(a1 + 68) |= 4u;
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v5 = CSingleViewShellExperience::Launch((CSingleViewShellExperience *)a1);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 744LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v7,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v5);
          goto LABEL_20;
        }
      }
    }
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88), a1);
  if ( v6 >= 0 )
  {
    v5 = CSingleViewShellExperience::ShowViewAsync(a1, v2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 726LL;
      goto LABEL_18;
    }
LABEL_19:
    SingleViewExperienceTelemetry::Show::Stop((SingleViewExperienceTelemetry::Show *)v10, *(_DWORD *)(a1 + 40));
    v6 = 0;
  }
LABEL_20:
  v10[0] = &SingleViewExperienceTelemetry::Show::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v10);
  return (unsigned int)v6;
}
