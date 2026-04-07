/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800908C0
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180090AA0 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800256E8 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18002ECB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18002EF3C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FF94 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800913C0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(CScreenRotation *this)
{
  struct CResource ***v2; // rsi
  struct CVisual *RootVisualForDesktop; // rbx
  __int64 v4; // rax
  LONG v5; // r9d
  LONG v6; // edx
  int v7; // r10d
  struct IDwmChannel *v8; // rcx
  int v9; // edx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  struct CResource *v13; // rbx
  struct CResource **v14; // rcx
  struct CResource *v16; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-20h] BYREF

  GetDesktopID(1LL, &v17);
  v2 = (struct CResource ***)((char *)this + 320);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           v17);
  v4 = *((_QWORD *)this + 2);
  v18.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 101);
  v18.right = v18.left + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 103);
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 102);
  v18.top = v5;
  v6 = v5 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104);
  v18.bottom = v6;
  v7 = v18.right - v18.left;
  v8 = *(struct IDwmChannel **)(v4 + 16);
  if ( v18.right - v18.left < 0 )
    v7 = 0;
  v9 = v6 - v5;
  LODWORD(v16) = v7;
  if ( v9 < 0 )
    v9 = 0;
  HIDWORD(v16) = v9;
  v10 = CAnimatedTransitionVisual::Create(v8, (struct CAnimatedTransitionVisual **)this + 40);
  v11 = v10;
  if ( v10 >= 0 )
  {
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      (struct CVisual **)((unsigned __int64)(*v2 + 1) & -(__int64)(*v2 != 0LL)),
      (struct CVisual *)((*((_QWORD *)this + 39) + 8LL) & -(__int64)(*((_QWORD *)this + 39) != 0LL)),
      1u,
      1);
    v12 = CAnimatedTransitionVisual::SetVisual(*v2, RootVisualForDesktop, 0, &v18);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = v16;
      (*((void (__fastcall **)(struct CResource **, struct CResource **))(*v2)[1] + 10))(*v2 + 1, &v16);
      (*v2)[119] = v13;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v2, &v18);
      v14 = *v2;
      *(struct tagRECT *)(v14 + 109) = v18;
      CVisual::SetDirtyFlags((CVisual *)(v14 + 1), 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v2, 0.0);
      CVisual::SetInterpolationMode((CVisual *)(*v2 + 1), 1);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2B7u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2B5u);
  }
  if ( v11 < 0 )
    CScreenRotation::Stop(this, 0);
  return (unsigned int)v11;
}
