/*
 * XREFs of ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800980D0
 * Callers:
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x18009785C (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 * Callees:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000677C (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180006808 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180006ED8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x180093E14 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_CreateSingleGutterAnimationComponent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // edi
  int v12; // eax
  struct CAnimatedTransitionVisual *v13; // rbx
  int v14; // edx
  struct CAnimatedTransitionVisual *v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         144LL);
  if ( v9 )
    v10 = CAnimationComponent::CAnimationComponent(v9, a2, a3, *(_DWORD *)a4, *(_QWORD *)(a4 + 8));
  else
    v10 = 0LL;
  if ( v10 )
  {
    v12 = CAnimatedTransitionVisual::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v16);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = v16;
      CAnimatedTransitionVisual::SetBitmap((CBaseObject **)v16, *(struct CResource ***)(a1 + 184));
      *((_QWORD *)v13 + 119) = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
      *(_BYTE *)(v10 + 72) = 1;
      v14 = *(_DWORD *)a4;
      *((_DWORD *)v13 + 184) = *(_DWORD *)(*(_QWORD *)(a4 + 8) + 72LL);
      *((_DWORD *)v13 + 185) = v14;
      *((_BYTE *)v13 + 972) = CStoryboard::IsRTL();
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v13, (const struct tagRECT *)(a4 + 16));
      *(_OWORD *)((char *)v13 + 872) = *(_OWORD *)(a4 + 32);
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v13 + 8), 4096);
      *(_QWORD *)(v10 + 40) = v13;
      _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
      *a5 = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v12,
        0x666u);
    }
    if ( v16 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v16 + 8));
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x664u);
  }
  return v11;
}
