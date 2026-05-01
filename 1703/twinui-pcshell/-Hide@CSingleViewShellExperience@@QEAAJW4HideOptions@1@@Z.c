/*
 * XREFs of ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18018300C
 * Callers:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092D5C (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x1800A4970 (-OnDismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1800A5778 (-Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A75D0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Hide@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B31D0 (-Hide@CWelcomeScreenExperienceManager@@UEAAJXZ.c)
 *     ?Hide@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800C11F0 (-Hide@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801815C8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180182EA0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18018392C (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180183A78 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x180184CF8 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 *     ??$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x180184DD4 (--$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$Q.c)
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180187660 (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x18018A190 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18018BE38 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::Hide(__int64 a1, int a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  ExperienceManagerUtils *v5; // rcx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // esi
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-C0h] BYREF
  PCWSTR v16; // [rsp+50h] [rbp-B8h] BYREF
  CSingleViewShellExperience *v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  _QWORD v20[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v19 = -2LL;
  v14 = a1;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v17, &v14);
  v5 = *(ExperienceManagerUtils **)(a1 + 24);
  if ( v5 )
    v14 = (__int64)ExperienceManagerUtils::WindowFromViewWrapper(v5, v4);
  else
    v14 = 0LL;
  LODWORD(v13) = *(_DWORD *)(a1 + 40);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v16 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::Hide::Start<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
    (SingleViewExperienceTelemetry::Hide *)v20,
    (__int64)&v14);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation((HSTRING *)a1);
  v6 = *(_DWORD *)(a1 + 40);
  if ( !v6 )
  {
    if ( *(_DWORD *)(a1 + 64) != 1 )
    {
LABEL_19:
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
      goto LABEL_20;
    }
LABEL_18:
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    goto LABEL_19;
  }
  if ( v6 == 1 )
    goto LABEL_18;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(*(_QWORD *)(a1 + 88), a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3BB,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_21;
  }
  if ( *(_QWORD *)(a1 + 24) && *(_DWORD *)(a1 + 40) == 2 )
  {
    *(_DWORD *)(a1 + 40) = 1;
    v9 = 1;
    if ( a2 == 1 )
    {
      v9 = 4;
      LODWORD(v13) = 1;
      v16 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
      SingleViewExperienceTelemetry::Hide::ViewKeptAlive<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
        (unsigned int)v20,
        (unsigned int)&StringRawBuffer,
        (unsigned int)&v16,
        (unsigned int)&v13,
        (__int64)&v14);
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 48LL))(*(_QWORD *)(a1 + 80));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3CA,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
    v11 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(a1 + 72, *(_QWORD *)(a1 + 24), v9);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3CB,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v11);
  }
  SingleViewExperienceTelemetry::Hide::Stop((SingleViewExperienceTelemetry::Hide *)v20, *(_DWORD *)(a1 + 40));
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 80LL))(*(_QWORD *)(a1 + 88), a1);
LABEL_20:
  v8 = 0;
LABEL_21:
  v20[0] = &SingleViewExperienceTelemetry::Hide::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v20);
  if ( (_BYTE)v18 )
  {
    CSingleViewShellExperience::UnboostPriority(v17, 1LL);
    CSingleViewShellExperience::UnboostDiskIo(v17);
  }
  return v8;
}
