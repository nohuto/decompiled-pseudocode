/*
 * XREFs of ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180096D80
 * Callers:
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x18009D6C4 (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 * Callees:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000677C (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180006808 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180006ED8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x180093E14 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180098348 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBitmapAnimationComponent(
        CTransitionVisualController *a1,
        HWND a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6)
{
  int TransitionBitmapIndex; // eax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  struct CAnimatedTransitionVisual *v17; // rdi
  struct CAnimatedTransitionVisual *v19; // [rsp+30h] [rbp-28h] BYREF

  v19 = 0LL;
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(a1, a2);
  v11 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x6B3u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v12 )
      v13 = CAnimationComponent::CAnimationComponent(v12, (__int64)a2, a3, a4, a5);
    else
      v13 = 0LL;
    if ( v13 )
    {
      v15 = CAnimatedTransitionVisual::Create(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v19);
      v14 = v15;
      if ( v15 >= 0 )
      {
        _mm_lfence();
        v16 = 56 * v11;
        v17 = v19;
        CAnimatedTransitionVisual::SetBitmap(
          (CBaseObject **)v19,
          *(struct CResource ***)(v16 + *((_QWORD *)a1 + 19) + 48));
        *((_QWORD *)v17 + 119) = *(_QWORD *)(*(_QWORD *)(v16 + *((_QWORD *)a1 + 19) + 48) + 24LL);
        *(_BYTE *)(v13 + 72) = 1;
        *((_DWORD *)v17 + 184) = *(_DWORD *)(a5 + 72);
        *((_DWORD *)v17 + 185) = a4;
        *((_BYTE *)v17 + 972) = CStoryboard::IsRTL();
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v17,
          (const struct tagRECT *)(v16 + *((_QWORD *)a1 + 19) + 12LL));
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v17,
          (const struct tagRECT *)(v16 + *((_QWORD *)a1 + 19) + 28LL));
        *(_QWORD *)(v13 + 40) = v17;
        _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
        *a6 = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v15,
          0x6A2u);
      }
      if ( v19 )
        CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v19 + 8));
      CBaseObject::Release((CBaseObject *)v13);
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x6A0u);
    }
  }
  return v14;
}
