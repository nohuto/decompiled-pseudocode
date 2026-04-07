/*
 * XREFs of ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180094370
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18002EC04 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E32C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18009B840 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnTransitionWindow(struct CStoryboard *a1, __int64 a2, int a3)
{
  int v5; // eax
  CBaseObject *v6; // rbx
  const struct tagRECT *v7; // rsi
  __int64 v8; // rcx
  int DesktopThumbnail; // eax
  CBaseObject *v11; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( (a3 & 0x20000000) != 0 && (a3 & 0xFFFu) - 38 <= 1 )
  {
    v5 = CTransitionVisualController::CreateDesktopAnimationComponent(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
           (struct CWindowData *)a2,
           2,
           (const struct tagRECT *)(a2 + 604),
           1,
           1,
           a1,
           &v12);
    if ( v5 >= 0 )
    {
      v7 = (const struct tagRECT *)(a2 + 620);
      v6 = v12;
      CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v12 + 5), v7);
      v8 = *((_QWORD *)v6 + 5);
      *(struct tagRECT *)(v8 + 872) = *v7;
      CVisual::SetDirtyFlags((CVisual *)(v8 + 8), 4096);
      DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v11);
      if ( DesktopThumbnail >= 0 )
      {
        CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*((CAnimatedTransitionVisual **)v6 + 5), v11, v7);
        *((_QWORD *)a1 + 23) = v6;
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
        v6 = v12;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          DesktopThumbnail,
          0xED4u);
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v5, 0xED1u);
      v6 = v12;
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return 0LL;
}
