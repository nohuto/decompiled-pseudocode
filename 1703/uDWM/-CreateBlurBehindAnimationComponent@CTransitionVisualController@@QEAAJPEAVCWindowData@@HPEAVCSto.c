/*
 * XREFs of ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800098CC
 * Callers:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180005900 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 * Callees:
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z @ 0x180007574 (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007948 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000A924 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18000BCF4 (-GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVC.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000C988 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016DE8 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBlurBehindAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  int v5; // r12d
  CAnimatedTransitionVisual *v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // ebx
  int AccentBlurBehindBrush; // eax
  struct CResource *v14; // r15
  struct CResource *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // xmm0_8
  int v21; // eax
  int v22; // edx
  struct CResource *v24; // [rsp+30h] [rbp-40h] BYREF
  struct CResource *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h]
  unsigned __int64 v27[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v28[6]; // [rsp+58h] [rbp-18h] BYREF
  CAnimatedTransitionVisual *v29; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+50h]
  struct CStoryboard *v31; // [rsp+C8h] [rbp+58h]

  v31 = a4;
  v30 = a3;
  v5 = *((_DWORD *)a2 + 150);
  v29 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v28[0] = 1065353216;
  v10 = v5 & 0xFFF;
  v28[1] = 1065353216;
  v28[2] = 1065353216;
  if ( !(unsigned int)GetDesktopID(1LL, v27) )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0x347u);
    return v12;
  }
  v11 = CTransitionVisualController::_SetDesktopId(this, v27[0]);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v11, 0x34Bu);
    return v12;
  }
  AccentBlurBehindBrush = CTopLevelWindow::GetAccentBlurBehindBrush(
                            *((CTopLevelWindow **)a2 + 50),
                            &v24,
                            &v25,
                            (struct MilPoint3F *)v28);
  v12 = AccentBlurBehindBrush;
  if ( AccentBlurBehindBrush < 0 )
  {
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      AccentBlurBehindBrush,
      0x34Du);
    v14 = v24;
    v15 = v25;
  }
  else
  {
    v14 = v24;
    v15 = v25;
    if ( !v24 || !v25 )
    {
      *a5 = 0LL;
LABEL_16:
      if ( v9 )
        CBaseObject::Release((CBaseObject *)v9);
      if ( v8 )
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
      goto LABEL_20;
    }
    v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v16 )
      v9 = CAnimationComponent::CAnimationComponent(v16, *((_QWORD *)a2 + 5), v10, v30, v31);
    if ( v9 )
    {
      v17 = CAnimatedTransitionVisual::Create(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v29);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v17, 0x354u);
        v8 = v29;
      }
      else
      {
        v8 = v29;
        v18 = CAnimatedTransitionVisual::SetClientAreaBrush(v29, v14, v15, (struct MilPoint3F *)v28);
        v12 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v18, 0x356u);
        }
        else
        {
          v19 = *((_QWORD *)a2 + 6);
          v20 = _mm_srli_si128(*((__m128i *)a2 + 3), 8).m128i_u64[0];
          v21 = v20 - v19;
          if ( (int)v20 - (int)v19 < 0 )
            v21 = 0;
          LODWORD(v26) = v21;
          v22 = HIDWORD(v20) - HIDWORD(v19);
          if ( HIDWORD(v20) - HIDWORD(v19) < 0 )
            v22 = 0;
          *((_QWORD *)v8 + 118) = 0LL;
          v27[1] = 0LL;
          HIDWORD(v26) = v22;
          *((_QWORD *)v8 + 119) = v26;
          *((_DWORD *)v8 + 184) = *((_DWORD *)v31 + 18);
          *((_DWORD *)v8 + 185) = v30;
          *((_BYTE *)v8 + 972) = CStoryboard::IsRTL();
          *(_QWORD *)(v9 + 40) = v8;
          _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
          *a5 = (struct CAnimationComponent *)v9;
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v8 = v29;
          v14 = v24;
          v15 = v25;
        }
      }
      goto LABEL_16;
    }
    v12 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x353u);
  }
LABEL_20:
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v15 )
    CBaseObject::Release(v15);
  return v12;
}
