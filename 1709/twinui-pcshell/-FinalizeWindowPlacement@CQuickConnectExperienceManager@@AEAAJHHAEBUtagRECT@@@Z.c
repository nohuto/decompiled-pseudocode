/*
 * XREFs of ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1800C6564
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C6168 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C349C (-StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x1800C8BE0 (--$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@Experie.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x1800C8C90 (--$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@Experi.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPlacement(
        CQuickConnectExperienceManager *this,
        int a2,
        int a3,
        const struct tagRECT *a4)
{
  unsigned int v4; // ebx
  int *v9; // r8
  int v10; // r10d
  unsigned int v11; // r9d
  float v12; // xmm1_4
  __m128i v13; // xmm0
  bool v14; // cf
  float v15; // xmm1_4
  __m128i v16; // xmm0
  int v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D8h]
  int *v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h]
  int *v23; // [rsp+48h] [rbp-B8h]
  int *v24; // [rsp+50h] [rbp-B0h]
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  char v26; // [rsp+5Ch] [rbp-A4h]
  int v27; // [rsp+80h] [rbp-80h] BYREF
  const char *v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  char v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  _BYTE v32[144]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v33; // [rsp+138h] [rbp+38h]
  __int64 v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]
  __int64 v36; // [rsp+150h] [rbp+50h]
  int v37; // [rsp+160h] [rbp+60h] BYREF
  __m128i si128; // [rsp+164h] [rbp+64h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v4 = 0;
  v31 = 1LL;
  v19 = 0LL;
  v20 = v18;
  v21 = 0LL;
  v23 = &v27;
  v22 = 0;
  v24 = &v25;
  v25 = 0;
  v28 = "ExperienceManager_FinalizeWindowPlacement";
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v29 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v32, 0, sizeof(v32));
  v35 = 0LL;
  *(_QWORD *)v18 = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::`vftable';
  v36 = 0LL;
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v18);
  if ( !*((_BYTE *)this + 380) )
  {
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Prefered<enum Windows::UI::Popups::Placement &>(
      v18,
      (char *)this + 352);
    v9 = &v37;
    v10 = *((_DWORD *)this + 88);
    v11 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v37 = v10;
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
          v15 = (float)(*((float *)this + 84) + *((float *)this + 86)) + (float)a2;
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
        v4 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x394,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)0x80004005LL);
        break;
      }
    }
  }
  *(_QWORD *)v18 = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  return v4;
}
