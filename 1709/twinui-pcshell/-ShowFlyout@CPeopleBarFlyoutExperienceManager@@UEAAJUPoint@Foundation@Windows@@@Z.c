/*
 * XREFs of ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1800AD7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AC4E4 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x1800AC6FC (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ACE30 (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800AF364 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AF8B0 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFFD8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800B010C (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::ShowFlyout(__int64 a1, __int64 a2)
{
  CPeopleBarFlyoutExperienceManager *v4; // rcx
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // r8
  struct _TP_TIMER **v8; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+38h] [rbp-D0h]
  _QWORD v18[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h]
  int *v20; // [rsp+70h] [rbp-98h]
  int *v21; // [rsp+78h] [rbp-90h]
  int v22; // [rsp+80h] [rbp-88h] BYREF
  char v23; // [rsp+84h] [rbp-84h]
  int v24; // [rsp+A8h] [rbp-60h] BYREF
  const char *v25; // [rsp+B0h] [rbp-58h]
  __int64 v26; // [rsp+B8h] [rbp-50h]
  char v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+C8h] [rbp-40h]
  _BYTE v29[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+160h] [rbp+58h]
  __int64 v31; // [rsp+168h] [rbp+60h]
  __int64 v32; // [rsp+170h] [rbp+68h]
  __int64 v33; // [rsp+178h] [rbp+70h]
  _QWORD v34[4]; // [rsp+188h] [rbp+80h] BYREF
  int v35; // [rsp+1A8h] [rbp+A0h]
  int *v36; // [rsp+1B0h] [rbp+A8h]
  int *v37; // [rsp+1B8h] [rbp+B0h]
  int v38; // [rsp+1C0h] [rbp+B8h] BYREF
  char v39; // [rsp+1C4h] [rbp+BCh]
  int v40; // [rsp+1E8h] [rbp+E0h] BYREF
  const char *v41; // [rsp+1F0h] [rbp+E8h]
  __int64 v42; // [rsp+1F8h] [rbp+F0h]
  char v43; // [rsp+200h] [rbp+F8h]
  __int64 v44; // [rsp+208h] [rbp+100h]
  _BYTE v45[144]; // [rsp+210h] [rbp+108h] BYREF
  __int64 v46; // [rsp+2A0h] [rbp+198h]
  __int64 v47; // [rsp+2A8h] [rbp+1A0h]
  __int64 v48; // [rsp+2B0h] [rbp+1A8h]
  __int64 v49; // [rsp+2B8h] [rbp+1B0h]
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v17 = -2LL;
  v16 = a2;
  if ( GetTickCount64() - *(_QWORD *)(a1 + 656) > 0x64 )
  {
    v18[1] = 0LL;
    v18[2] = v18;
    v18[3] = 0LL;
    LODWORD(v19) = 0;
    v20 = &v24;
    v21 = &v22;
    v22 = 0;
    v23 = 0;
    v27 = 0;
    v24 = 0;
    v25 = "ShowPeopleBarFlyout";
    v26 = 0LL;
    v28 = 1LL;
    v30 = 0LL;
    v31 = 0LL;
    memset(v29, 0, sizeof(v29));
    v32 = 0LL;
    v33 = 0LL;
    v18[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
    v5 = 0;
    if ( **(_DWORD **)(a1 + 376) != 1 )
    {
      v34[1] = 0LL;
      v34[2] = v34;
      v34[3] = 0LL;
      v35 = 0;
      v36 = &v40;
      v37 = &v38;
      v38 = 0;
      v39 = 0;
      v43 = 0;
      v40 = 0;
      v41 = "ShowPeopleBarFlyout";
      v42 = 0LL;
      v44 = 1LL;
      v46 = 0LL;
      v47 = 0LL;
      memset(v45, 0, sizeof(v45));
      v48 = 0LL;
      v49 = 0LL;
      v34[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      CommonPeopleTelemetry::ShowPeopleBarFlyout::StartActivity((__int64)v34, a2);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=((__int64)v18, (__int64)v34, v6);
      v34[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v34);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v34);
      if ( *v21 != 1 )
        __fastfail(7u);
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        (__int64)v18,
        &SRWLock);
      ++v21[18];
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        v34,
        v18);
      v34[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=(a1 + 328, (__int64)v34, v7);
      v34[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v34);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v34);
      v5 = 1;
    }
    v8 = (struct _TP_TIMER **)(a1 + 680);
    if ( !*(_QWORD *)(a1 + 680) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          lambda_4f232bdb0e1defed5c13f1da76044def_::_lambda_invoker_cdecl_,
                          (PVOID)a1,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 680),
        ThreadpoolTimer);
      v10 = *v8;
      if ( !*v8 )
      {
        v11 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA0,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)0x8007000ELL);
LABEL_16:
        v18[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
        return v11;
      }
      SRWLock = (PSRWLOCK)-50000000LL;
      SetThreadpoolTimer(v10, (PFILETIME)&SRWLock, 0, 0x3E8u);
    }
    v12 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v4);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    *(_QWORD *)(a1 + 312) = v16;
    v13 = CSingleViewShellExperience::Show(a1 + 112, 0LL);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_16;
    }
    if ( v5 )
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v18,
        0LL);
    v18[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  }
  return 0LL;
}
