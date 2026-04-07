/*
 * XREFs of ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18002ECB4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180030324 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E32C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E944 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18009046C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800908C0 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800955F0 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000C014 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E9E4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x18002EB38 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetVisual(
        struct CResource **this,
        struct CVisual *a2,
        char a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __m128i v10; // xmm3
  __m128i v11; // xmm2
  __m128i v12; // xmm1
  __m128i v13; // xmm5
  __m128i v14; // xmm4
  unsigned int v15; // eax
  __m128i v16; // xmm6
  float v17; // xmm2_4
  __m128i v18; // xmm0
  int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm5_4
  struct CResource *v22; // rdx
  __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int updated; // eax
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  __int64 v33; // [rsp+58h] [rbp-9h] BYREF
  __int64 v34; // [rsp+60h] [rbp-1h]
  struct tagRECT v35; // [rsp+68h] [rbp+7h] BYREF

  v8 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2CCu);
  }
  else
  {
    v33 = 0LL;
    v34 = 0LL;
    if ( a4 )
    {
      v10 = _mm_cvtsi32_si128(a4->left);
      v11 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 101));
      v12 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 103));
      v13 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 102));
      v14 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104));
      v15 = 0;
      v16 = _mm_cvtsi32_si128(a4->top);
      if ( a4->right - a4->left >= 0 )
        v15 = a4->right - a4->left;
      LODWORD(v17) = _mm_cvtepi32_ps(v11).m128_u32[0];
      v18 = _mm_cvtsi32_si128(v15);
      v19 = 0;
      LODWORD(v20) = _mm_cvtepi32_ps(v18).m128_u32[0];
      if ( a4->bottom - a4->top >= 0 )
        v19 = a4->bottom - a4->top;
      v21 = _mm_cvtepi32_ps(v13).m128_f32[0];
      *(float *)&v33 = _mm_cvtepi32_ps(v10).m128_f32[0];
      *((float *)&v33 + 1) = _mm_cvtepi32_ps(v16).m128_f32[0];
      *(float *)&v34 = fminf(v20, (float)(_mm_cvtepi32_ps(v12).m128_f32[0] + v17) - v17) + *(float *)&v33;
      *((float *)&v34 + 1) = fminf((float)v19, (float)(_mm_cvtepi32_ps(v14).m128_f32[0] + v21) - v21)
                           + *((float *)&v33 + 1);
    }
    else
    {
      v29 = (float)*((int *)a2 + 28);
      v30 = (float)*((int *)a2 + 29);
      *(float *)&v33 = v29;
      *((float *)&v33 + 1) = v30;
      if ( *((int *)a2 + 30) <= 0 || *((int *)a2 + 31) <= 0 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl(0LL, &v35);
        *(float *)&v33 = (float)v35.left;
        *((float *)&v33 + 1) = (float)v35.top;
        *(float *)&v34 = (float)v35.right;
        *((float *)&v34 + 1) = (float)v35.bottom;
      }
      else
      {
        v31 = (float)*((int *)a2 + 30) + v29;
        v32 = (float)*((int *)a2 + 31);
        *(float *)&v34 = v31;
        *((float *)&v34 + 1) = v32 + v30;
      }
    }
    v22 = this[73];
    *(_QWORD *)&v35.left = 0LL;
    *(_QWORD *)&v35.right = 0LL;
    v23 = *((_QWORD *)a2 + 2);
    if ( v23 )
      v24 = *(_DWORD *)(v23 + 24);
    else
      v24 = 0;
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, struct tagRECT *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)v22 + 2) + 992LL))(
            *((_QWORD *)v22 + 2),
            *((unsigned int *)v22 + 6),
            &v33,
            &v35,
            0,
            0,
            v24,
            0);
    v9 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x2FAu);
    }
    else if ( a3
           && (v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[73] + 2) + 1000LL))(
                       *((_QWORD *)this[73] + 2),
                       *((unsigned int *)this[73] + 6)),
               v9 = v26,
               v26 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x301u);
    }
    else
    {
      updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, this[73]);
      v9 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x305u);
    }
  }
  return v9;
}
