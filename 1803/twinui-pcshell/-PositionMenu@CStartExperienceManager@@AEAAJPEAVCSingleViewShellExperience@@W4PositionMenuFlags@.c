/*
 * XREFs of ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180076B2C
 * Callers:
 *     ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180077500 (-OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x180174840 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800760F0 (-ReportStopActivity@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Para.c)
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180076184 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x180076230 (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800763CC (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800764E0 (--1-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180095B84 (-reset@-$shared_object@V-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::PositionMenu(CStartExperienceManager *a1, __int64 a2, int a3)
{
  char v3; // r14
  struct CSingleViewShellExperience *v6; // rdx
  int MonitorInformation; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  char v11; // di
  int v12; // eax
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v15[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  HMONITOR v21; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v22; // [rsp+80h] [rbp-80h] BYREF
  void **v23; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v24[3]; // [rsp+98h] [rbp-68h] BYREF
  int v25; // [rsp+B0h] [rbp-50h]
  int *v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h] BYREF
  char v29; // [rsp+CCh] [rbp-34h]
  int v30; // [rsp+F0h] [rbp-10h] BYREF
  const char *v31; // [rsp+F8h] [rbp-8h]
  __int64 v32; // [rsp+100h] [rbp+0h]
  char v33; // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+110h] [rbp+10h]
  _BYTE v35[144]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v36; // [rsp+1A8h] [rbp+A8h]
  __int64 v37; // [rsp+1B0h] [rbp+B0h]
  __int64 v38; // [rsp+1B8h] [rbp+B8h]
  _QWORD v39[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v20 = -2LL;
  v3 = a3;
  v16 = a3;
  v24[0] = 0LL;
  v24[1] = &v23;
  v24[2] = 0LL;
  v25 = 0;
  v26 = &v30;
  v27 = &v28;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "StartMenuReposition";
  v32 = 0LL;
  v34 = 1LL;
  v36 = 0LL;
  memset_0(v35, 0, sizeof(v35));
  v37 = 0LL;
  v38 = 0LL;
  v39[0] = 0LL;
  v23 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  StartMenuExperienceTelemetry::StartMenuReposition::StartActivity((StartMenuExperienceTelemetry::StartMenuReposition *)&v23);
  v22 = 0LL;
  *(_QWORD *)&v19.left = 0LL;
  *(_QWORD *)&v19.right = 0LL;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         a1,
                         v6,
                         &v22,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&SRWLock,
                         (bool *)v15,
                         &v19,
                         &v21);
  v8 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    v10 = 812LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v14);
    goto LABEL_7;
  }
  v15[0] = 1;
  v17 = v22.bottom - v22.top;
  LODWORD(v21) = v22.right - v22.left;
  StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
    (__int64)&v23,
    &v22.left,
    &v22.top,
    (int *)&v21,
    &v17,
    (unsigned __int8 *)(a2 + 52),
    v15,
    &v16);
  *((_DWORD *)a1 + 158) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)a1 + 159) = *(_DWORD *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 24) )
  {
    MonitorInformation = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)a2, &v22);
    v8 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v10 = 822LL;
      goto LABEL_14;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    LODWORD(v21) = 4;
    HIDWORD(v21) = (unsigned __int16)SRWLock;
    RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v21, 8LL, 0LL);
  }
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v23);
  v8 = 0;
LABEL_7:
  v23 = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  if ( !v39[0] )
    goto LABEL_8;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v23,
    &SRWLock);
  if ( v39[0] && *(_DWORD *)v39[0] == 1 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    wil::details::shared_object<wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v39);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v11 )
  {
LABEL_8:
    if ( *v27 == 1 )
    {
      v12 = v27[21];
      v16 = v12;
      v13 = 2147942974LL;
      if ( v12 < 0 )
        v13 = (unsigned int)v12;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v27,
        v13,
        &v16);
      wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        (StartMenuExperienceTelemetry::StartMenuReposition *)&v23,
        v16);
    }
  }
  wil::details::shared_object<wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v39);
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)&v28);
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  return v8;
}
