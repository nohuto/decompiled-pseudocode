/*
 * XREFs of ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ACA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExperienceManager_OnViewDestroyed_UnregisteredLightDismiss@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A9834 (-ExperienceManager_OnViewDestroyed_UnregisteredLightDismiss@ExperienceManager_OnViewDestroyed@Qu.c)
 *     ?ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A98B4 (-ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManage.c)
 *     ?ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A9934 (-ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConne.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB6EC (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AEE48 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$Start@$$V@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@SA?AV01@XZ @ 0x1800AFBB4 (--$Start@$$V@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@SA-AV01@XZ.c)
 *     ??$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1800AFC60 (--$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickC.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18018DC08 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQuickConnectExperienceManager::OnViewDestroyed(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v10[1] = -2LL;
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::Start<>((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v11);
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_Params<_GUID &>(
    v11,
    (char *)this + 248);
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CQuickConnectExperienceManager *)((char *)this + 224));
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_UnregisteredLightDismiss((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v11);
  v10[0] = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))a2 + 3))(
         *((_QWORD *)a2 + 3),
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 649LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10[0] + 88LL))(v10[0], *((_QWORD *)this + 2));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 650LL;
    goto LABEL_5;
  }
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v11);
  *((_QWORD *)this + 2) = 0LL;
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_ReleasedLifeTime((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v11);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
  v5 = 0;
LABEL_9:
  v8 = v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v11[0] = &QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  return v5;
}
