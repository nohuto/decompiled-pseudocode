/*
 * XREFs of ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180006C7C
 * Callers:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800047A0 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 * Callees:
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180004F80 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800091C0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z @ 0x18000AA38 (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000BDB8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FF94 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x1800769CC (-GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBlurBehindAnimationComponent(
        CTransitionVisualController *this,
        __m128i *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  int v5; // eax
  CAnimatedTransitionVisual *v8; // rsi
  __int64 v9; // r13
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  struct CResource *v13; // r14
  struct CResource *v14; // r15
  CAccent *v15; // rcx
  int AccentBlurBehindBrush; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // xmm0_8
  int v23; // eax
  int v24; // edx
  CAnimatedTransitionVisual *v25; // [rsp+30h] [rbp-40h] BYREF
  struct CCachedVisualImageBrushResource *v26; // [rsp+38h] [rbp-38h] BYREF
  struct CResource *v27; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v28[2]; // [rsp+48h] [rbp-28h] BYREF
  int v29; // [rsp+58h] [rbp-18h] BYREF
  int v30; // [rsp+5Ch] [rbp-14h]
  int v31; // [rsp+60h] [rbp-10h]
  unsigned int v32; // [rsp+B8h] [rbp+48h]
  __int64 v33; // [rsp+B8h] [rbp+48h]

  v5 = a2[37].m128i_i32[2] & 0xFFF;
  v25 = 0LL;
  v32 = v5;
  v29 = 1065353216;
  v30 = 1065353216;
  v8 = 0LL;
  v31 = 1065353216;
  *a5 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, v28) )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0x33Du);
    return v11;
  }
  v10 = CTransitionVisualController::_SetDesktopId(this, v28[0]);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v10,
      0x341u);
    return v11;
  }
  v12 = a2[25].m128i_i64[0];
  v13 = 0LL;
  v11 = 0;
  v26 = 0LL;
  v14 = 0LL;
  v27 = 0LL;
  v29 = 1065353216;
  v15 = *(CAccent **)(v12 + 264);
  v30 = 1065353216;
  v31 = 1065353216;
  if ( v15 )
  {
    AccentBlurBehindBrush = CAccent::GetAccentBlurBehindBrush(v15, &v26, &v27, (struct MilPoint3F *)&v29);
    v11 = AccentBlurBehindBrush;
    if ( AccentBlurBehindBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AccentBlurBehindBrush, 0x5FEu);
    v14 = v26;
    v13 = v27;
  }
  if ( (v11 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      0x343u);
  }
  else
  {
    if ( !v14 || !v13 )
    {
      *a5 = 0LL;
LABEL_7:
      if ( v9 )
        CBaseObject::Release((CBaseObject *)v9);
      if ( v8 )
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
      goto LABEL_11;
    }
    v18 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v18 )
      v9 = CAnimationComponent::CAnimationComponent(v18, a2[2].m128i_i64[1], v32, a3, a4);
    if ( v9 )
    {
      v19 = CAnimatedTransitionVisual::Create(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v25);
      v11 = v19;
      if ( v19 >= 0 )
      {
        v8 = v25;
        v20 = CAnimatedTransitionVisual::SetClientAreaBrush(v25, v14, v13, (struct MilPoint3F *)&v29);
        v11 = v20;
        if ( v20 >= 0 )
        {
          v21 = a2[3].m128i_i64[0];
          v22 = _mm_srli_si128(a2[3], 8).m128i_u64[0];
          v23 = v22 - v21;
          if ( (int)v22 - (int)v21 < 0 )
            v23 = 0;
          LODWORD(v33) = v23;
          v24 = HIDWORD(v22) - HIDWORD(v21);
          if ( HIDWORD(v22) - HIDWORD(v21) < 0 )
            v24 = 0;
          *((_QWORD *)v8 + 118) = 0LL;
          v28[1] = 0LL;
          HIDWORD(v33) = v24;
          *((_QWORD *)v8 + 119) = v33;
          *((_DWORD *)v8 + 184) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v8 + 185) = a3;
          *((_BYTE *)v8 + 972) = CStoryboard::IsRTL();
          *(_QWORD *)(v9 + 40) = v8;
          _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
          *a5 = (struct CAnimationComponent *)v9;
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v8 = v25;
          v14 = v26;
          v13 = v27;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v20,
            0x34Cu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v19,
          0x34Au);
        v8 = v25;
      }
      goto LABEL_7;
    }
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x349u);
  }
LABEL_11:
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v13 )
    CBaseObject::Release(v13);
  return v11;
}
