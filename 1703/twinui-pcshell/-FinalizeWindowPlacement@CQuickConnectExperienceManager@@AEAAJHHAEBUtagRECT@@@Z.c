/*
 * XREFs of ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1800AD6C0
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AD344 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB6EC (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AEE48 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$Start@$$V@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@SA?AV01@XZ @ 0x1800B0014 (--$Start@$$V@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@SA-AV01@XZ.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x1800B00C0 (--$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@Experie.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x1800B0174 (--$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@Experi.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPlacement(
        CQuickConnectExperienceManager *this,
        int a2,
        int a3,
        const struct tagRECT *a4)
{
  unsigned int v8; // ebx
  int *v9; // r8
  int v10; // r10d
  unsigned int v11; // r9d
  float v12; // xmm1_4
  __m128i v13; // xmm0
  bool v14; // cf
  float v15; // xmm1_4
  __m128i v16; // xmm0
  _QWORD v18[40]; // [rsp+20h] [rbp-178h] BYREF
  int v19; // [rsp+160h] [rbp-38h] BYREF
  __m128i si128; // [rsp+164h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::Start<>((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v18);
  v8 = 0;
  if ( !*((_BYTE *)this + 380) )
  {
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Prefered<enum Windows::UI::Popups::Placement &>(
      v18,
      (char *)this + 352);
    v9 = &v19;
    v10 = *((_DWORD *)this + 88);
    v11 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v19 = v10;
    while ( 1 )
    {
      if ( v11 && *v9 == v10 )
        goto LABEL_15;
      switch ( *v9 )
      {
        case 2:
          v15 = (float)(*((float *)this + 87) + *((float *)this + 85)) + (float)a3;
          v16 = _mm_cvtsi32_si128(a4->bottom);
          break;
        case 3:
          v12 = *((float *)this + 84) - (float)a2;
          v13 = _mm_cvtsi32_si128(a4->left);
          goto LABEL_9;
        case 4:
          v15 = (float)(*((float *)this + 86) + *((float *)this + 84)) + (float)a2;
          v16 = _mm_cvtsi32_si128(a4->right);
          break;
        default:
          v12 = *((float *)this + 85) - (float)a3;
          v13 = _mm_cvtsi32_si128(a4->top);
LABEL_9:
          v14 = v12 < _mm_cvtepi32_ps(v13).m128_f32[0];
          goto LABEL_14;
      }
      v14 = _mm_cvtepi32_ps(v16).m128_f32[0] < v15;
LABEL_14:
      if ( !v14 )
      {
        *((_DWORD *)this + 88) = *v9;
        QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Finalized<enum Windows::UI::Popups::Placement &>(
          v18,
          (char *)this + 352);
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
        break;
      }
LABEL_15:
      ++v11;
      ++v9;
      if ( v11 >= 5 )
      {
        v8 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x394,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)0x80004005LL);
        break;
      }
    }
  }
  v18[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  return v8;
}
