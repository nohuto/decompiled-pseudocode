/*
 * XREFs of ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800964C4
 * Callers:
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098EB0 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180099360 (-_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180099400 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800996D0 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180099CA0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180004820 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002EF3C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180065FE8 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18009630C (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18009A698 (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindow(
        CSlide *this,
        struct CWindowData *a2,
        float a3,
        struct CAnimationComponent **a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  int v9; // eax
  int v10; // eax
  struct CAnimationComponent *v11; // rbx
  int v12; // esi
  HWND v13; // rdx
  CWindowPropertyTracker *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct CAnimationComponent *v18; // [rsp+58h] [rbp-39h] BYREF
  struct tagPOINT v19; // [rsp+60h] [rbp-31h] BYREF
  struct tagPOINT v20; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT v21; // [rsp+78h] [rbp-19h]
  struct tagRECT rc; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v23; // [rsp+98h] [rbp+7h] BYREF

  v4 = *(_QWORD *)this;
  v6 = *((unsigned int *)a2 + 150);
  v18 = 0LL;
  v9 = (*(__int64 (__fastcall **)(CSlide *, __int64))(v4 + 88))(this, v6);
  v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v9, 0LL, 0LL, -1, 1, &v18);
  v11 = v18;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = (HWND)*((_QWORD *)a2 + 5);
    rc = *(struct tagRECT *)((char *)v18 + 88);
    v23 = rc;
    v14 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL);
    v21 = rc;
    if ( (int)CWindowPropertyTracker::GetWindowBeginPosition(v14, v13, &v19) >= 0
      && (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
                *((HWND *)a2 + 5),
                &v20) >= 0 )
    {
      OffsetRect(&rc, v19.x - v21.left, v19.y - v21.top);
      OffsetRect(&v23, v20.x - v21.left, v20.y - v21.top);
    }
    v15 = *((_DWORD *)a2 + 150);
    if ( (v15 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 620);
    if ( (v15 & 0x800000) != 0 )
      v23 = *(struct tagRECT *)((char *)a2 + 652);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v11 + 5), &rc);
    v16 = *((_QWORD *)v11 + 5);
    *(struct tagRECT *)(v16 + 872) = v23;
    CVisual::SetDirtyFlags((CVisual *)(v16 + 8), 4096);
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v11 + 5), a3);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v10, 0xDDu);
  }
  if ( v12 < 0 && v11 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v11);
  if ( a4 )
  {
    if ( v12 < 0 )
    {
      *a4 = 0LL;
    }
    else
    {
      *a4 = v11;
      if ( !v11 )
        return (unsigned int)v12;
      _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
      v11 = v18;
    }
  }
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)v12;
}
