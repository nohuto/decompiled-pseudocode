/*
 * XREFs of ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x18016D060
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18007AE68 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18016A83C (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_18016A83C.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016A8E8 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_18016A8E8.c)
 *     ??0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x18016AB64 (--0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x18016AD40 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016AF04 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ @ 0x18016B3D0 (-CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ.c)
 *     ?IncrementExpectedStopCount@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18016BCC8 (-IncrementExpectedStopCount@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18016CF98 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x18016D39C (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016D4C4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::ShowFlyout(__int64 a1, __int64 a2)
{
  CPeopleBarFlyoutExperienceManager *v4; // rcx
  char v5; // si
  struct _TP_TIMER **v6; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h]
  _QWORD v18[40]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[40]; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v17 = -2LL;
  if ( CPeopleBarFlyoutExperienceManager::DebounceDetection::CanShow((CPeopleBarFlyoutExperienceManager::DebounceDetection *)(a1 + 656)) )
  {
    CommonPeopleTelemetry::ShowPeopleBarFlyout::ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v19);
    v5 = 0;
    if ( **(_DWORD **)(a1 + 376) != 1 )
    {
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v18,
        (__int64)"ShowPeopleBarFlyout");
      v18[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      CommonPeopleTelemetry::ShowPeopleBarFlyout::StartActivity(v18, a2);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=(v19, (__int64)v18);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v18);
      if ( *(_DWORD *)v19[6] != 1 )
        __fastfail(7u);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::IncrementExpectedStopCount((__int64)v19);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v18,
        (__int64)v19);
      v18[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=((_QWORD *)(a1 + 328), (__int64)v18);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v18);
      v5 = 1;
    }
    v6 = (struct _TP_TIMER **)(a1 + 680);
    if ( !*(_QWORD *)(a1 + 680) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)lambda_abca3fe783134c9474c9cbbdcdb80191_::_lambda_invoker_cdecl_,
                          (PVOID)a1,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 680),
        ThreadpoolTimer);
      v8 = *v6;
      if ( !*v6 )
      {
        v9 = -2147024882;
        v10 = 2147942414LL;
        v11 = 164LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)v10);
        CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v19);
        return v9;
      }
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v8, &pftDueTime, 0, 0x3E8u);
    }
    v12 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v4);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        176LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    *(_QWORD *)(a1 + 312) = a2;
    v13 = CSingleViewShellExperience::Show(a1 + 112, 0LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      v10 = (unsigned int)v13;
      v11 = 182LL;
      goto LABEL_14;
    }
    if ( v5 )
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v19,
        0LL);
    CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v19);
  }
  return 0LL;
}
