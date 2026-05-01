/*
 * XREFs of ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1800C4ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C1894 (-StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800C6AB8 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$ExperienceManager_PopulateDelayLoadedContactCard_Params@AEAU_GUID@@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1800C8548 (--$ExperienceManager_PopulateDelayLoadedContactCard_Params@AEAU_GUID@@@ExperienceManager_Populat.c)
 *     ??$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@0@Z @ 0x1800C85FC (--$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@Exp.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQuickConnectExperienceManager::PopulateDelayLoadedContactCard(
        CQuickConnectExperienceManager *this,
        struct _GUID *a2,
        struct IContact *a3)
{
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rcx
  int v9; // eax
  _QWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+50h] [rbp-B0h]
  int *v13; // [rsp+58h] [rbp-A8h]
  int *v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h] BYREF
  char v16; // [rsp+6Ch] [rbp-94h]
  int v17; // [rsp+90h] [rbp-70h] BYREF
  const char *v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  char v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  _BYTE v22[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+148h] [rbp+48h]
  __int64 v24; // [rsp+150h] [rbp+50h]
  __int64 v25; // [rsp+158h] [rbp+58h]
  __int64 v26; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v6 = 0;
  v11[1] = 0LL;
  v11[2] = v11;
  v11[3] = 0LL;
  v12 = 0;
  v13 = &v17;
  v14 = &v15;
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v17 = 0;
  v18 = "ExperienceManager_PopulateDelayLoadedContactCard";
  v19 = 0LL;
  v7 = 1;
  v21 = 1LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0LL;
  v26 = 0LL;
  v11[0] = &QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::`vftable';
  QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::StartActivity((QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard *)v11);
  QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::ExperienceManager_PopulateDelayLoadedContactCard_Params<_GUID &>(
    v11,
    a2);
  if ( *(_OWORD *)a2 != *((_OWORD *)this + 17) )
  {
    QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch<_GUID &,_GUID &>(
      v11,
      a2);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
    goto LABEL_11;
  }
  if ( *((struct IContact **)this + 42) != a3 )
  {
    if ( a3 )
      ((void (__fastcall *)(struct IContact *))a3->lpVtbl->AddRef)(a3);
    v8 = *((_QWORD *)this + 42);
    *((_QWORD *)this + 42) = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 24));
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x206,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_11:
    v6 = v7;
    goto LABEL_12;
  }
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
LABEL_12:
  v11[0] = &QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  return v6;
}
