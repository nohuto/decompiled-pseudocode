/*
 * XREFs of ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180011A54
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180006204 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800083B8 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180096F58 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180097558 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180098C1C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x18009906C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009DCD0 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180005E4C (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011780 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x1800118D8 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetVisual(
        struct CResource **this,
        struct CVisual *a2,
        char a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __m128i v11; // xmm3
  __m128i v12; // xmm2
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  float v15; // xmm0_4
  __m128i v16; // xmm1
  int v17; // eax
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  struct CResource *v24; // rdx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  int updated; // eax
  int v30; // eax
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h]
  struct tagRECT v37; // [rsp+60h] [rbp-20h] BYREF

  v8 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2CDu);
    return v9;
  }
  v10 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( a4 )
  {
    v11 = _mm_cvtsi32_si128(a4->left);
    v12 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 101));
    if ( a4->right - a4->left >= 0 )
      v10 = a4->right - a4->left;
    v13 = _mm_cvtsi32_si128(*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 102));
    v14 = _mm_cvtsi32_si128(a4->top);
    v15 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 103);
    v16 = _mm_cvtsi32_si128(v10);
    v17 = 0;
    LODWORD(v18) = _mm_cvtepi32_ps(v16).m128_u32[0];
    if ( a4->bottom - a4->top >= 0 )
      v17 = a4->bottom - a4->top;
    v19 = _mm_cvtepi32_ps(v12).m128_f32[0];
    v20 = _mm_cvtepi32_ps(v13).m128_f32[0];
    *(float *)&v35 = _mm_cvtepi32_ps(v11).m128_f32[0];
    v21 = fminf(v18, (float)(v15 + v19) - v19);
    v22 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 104);
    *((float *)&v35 + 1) = _mm_cvtepi32_ps(v14).m128_f32[0];
    *(float *)&v36 = v21 + *(float *)&v35;
    v23 = fminf((float)v17, (float)(v22 + v20) - v20) + *((float *)&v35 + 1);
  }
  else
  {
    v31 = (float)*((int *)a2 + 28);
    v32 = (float)*((int *)a2 + 29);
    *(float *)&v35 = v31;
    *((float *)&v35 + 1) = v32;
    if ( *((int *)a2 + 30) <= 0 || *((int *)a2 + 31) <= 0 )
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(0LL, &v37);
      *(float *)&v35 = (float)v37.left;
      *((float *)&v35 + 1) = (float)v37.top;
      *(float *)&v36 = (float)v37.right;
      *((float *)&v36 + 1) = (float)v37.bottom;
      goto LABEL_9;
    }
    v33 = (float)*((int *)a2 + 30) + v31;
    v34 = (float)*((int *)a2 + 31);
    *(float *)&v36 = v33;
    v23 = v34 + v32;
  }
  *((float *)&v36 + 1) = v23;
LABEL_9:
  v24 = this[73];
  *(_QWORD *)&v37.left = 0LL;
  *(_QWORD *)&v37.right = 0LL;
  v25 = *((_QWORD *)a2 + 2);
  if ( v25 )
    v26 = *(_DWORD *)(v25 + 24);
  else
    v26 = 0;
  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, struct tagRECT *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)v24 + 2) + 1008LL))(
          *((_QWORD *)v24 + 2),
          *((unsigned int *)v24 + 6),
          &v35,
          &v37,
          0,
          0,
          v26,
          0);
  v9 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x2FBu);
  }
  else if ( a3
         && (v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[73] + 2) + 1016LL))(
                     *((_QWORD *)this[73] + 2),
                     *((unsigned int *)this[73] + 6)),
             v9 = v30,
             v30 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x302u);
  }
  else
  {
    updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, this[73]);
    v9 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x306u);
  }
  return v9;
}
