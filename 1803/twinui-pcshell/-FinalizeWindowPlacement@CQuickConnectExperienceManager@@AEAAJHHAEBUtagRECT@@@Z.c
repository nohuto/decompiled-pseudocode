/*
 * XREFs of ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18017B9FC
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017F688 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x1801790D8 (--$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@Experi.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x180179180 (--$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@Experie.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017A154 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18017A154.c)
 *     ??1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A534 (--1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ @ 0x18017D99C (-StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017DFFC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x18017FA0C (-ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagR.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPlacement(
        CQuickConnectExperienceManager *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagRECT *a4)
{
  unsigned int v7; // ebx
  int *v8; // rdi
  int v9; // r14d
  unsigned int v10; // r11d
  __int64 v11; // r8
  _BYTE v13[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-CCh]
  _QWORD v15[40]; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+188h] [rbp+80h] BYREF
  __m128i si128; // [rsp+18Ch] [rbp+84h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v14 = a2;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"ExperienceManager_FinalizeWindowPlacement");
  v15[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::`vftable';
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v15);
  v7 = 0;
  if ( !*((_BYTE *)this + 380) )
  {
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Prefered<enum Windows::UI::Popups::Placement &>(
      (__int64)v15,
      (int *)this + 88);
    v8 = &v16;
    v9 = *((_DWORD *)this + 88);
    v10 = 0;
    v11 = v14;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v16 = v9;
    v13[0] = 0;
    while ( 1 )
    {
      if ( !v10 || *v8 != v9 )
      {
        CQuickConnectExperienceManager::ValidateBoundary(this, (unsigned int)*v8, v11, a3, a4, v13);
        if ( v13[0] )
          break;
      }
      ++v10;
      ++v8;
      if ( v10 >= 5 )
      {
        v7 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x394,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)0x80004005LL);
        goto LABEL_9;
      }
    }
    *((_DWORD *)this + 88) = *(&v16 + (int)v10);
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Finalized<enum Windows::UI::Popups::Placement &>(
      (__int64)v15,
      (int *)this + 88);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
  }
LABEL_9:
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::~ExperienceManager_FinalizeWindowPlacement((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v15);
  return v7;
}
