/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A078
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180016664 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029320 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180039EE0 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A024 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A580 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18006C6A0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180015640 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EEF0 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EF88 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003A2E4 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003AD18 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800869FC (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  unsigned int v3; // ebx
  struct tagRECT v4; // xmm0
  __int64 v5; // rax
  int v6; // esi
  LONG right; // r13d
  int v8; // r12d
  struct tagSIZE v9; // rax
  LONG bottom; // r8d
  int v11; // ecx
  int v12; // eax
  char v13; // r14
  bool v14; // r15
  bool v15; // si
  int v16; // eax
  int updated; // eax
  int v18; // eax
  int v19; // eax
  struct tagSIZE *v21; // rax
  int WindowRectForLivePreview; // eax
  int v23; // ecx
  int v24; // eax
  __int128 v26; // [rsp+40h] [rbp-31h]
  __int128 v27; // [rsp+50h] [rbp-21h]
  __int128 v28; // [rsp+60h] [rbp-11h]
  struct tagSIZE v29; // [rsp+70h] [rbp-1h] BYREF
  struct tagRECT v30; // [rsp+78h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+88h] [rbp+17h] BYREF

  v3 = 0;
  v4 = *(struct tagRECT *)(*((_QWORD *)this + 9) + 48LL);
  v5 = *((_QWORD *)this + 10);
  *(_QWORD *)&Rect.left = 0LL;
  v30 = v4;
  *(_QWORD *)&Rect.right = 0LL;
  v26 = *(_OWORD *)(v5 + 48);
  v28 = *(_OWORD *)(v5 + 64);
  AdjustWindowRectEx(&Rect, *(_DWORD *)(v5 + 100), 0, 0);
  v6 = -Rect.left;
  right = Rect.right;
  v8 = -Rect.top;
  LODWORD(v27) = -Rect.left;
  DWORD1(v27) = Rect.right;
  DWORD2(v27) = -Rect.top;
  HIDWORD(v27) = Rect.bottom;
  if ( *((_BYTE *)this + 20) )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v30);
    v3 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowRectForLivePreview, 0x169u);
      return v3;
    }
    bottom = Rect.bottom;
  }
  else
  {
    DwmGetIdealIconicThumbnailSize(1, &v29);
    if ( *((_DWORD *)this + 4) == 2 && (v21 = (struct tagSIZE *)*((_QWORD *)this + 3)) != 0LL )
      v9 = v21[3];
    else
      v9 = v29;
    bottom = Rect.bottom;
    v30.right = right + v30.left + v6 + v9.cx;
    v30.bottom = Rect.bottom + v30.top + v8 + v9.cy;
  }
  *(_OWORD *)(*((_QWORD *)this + 10) + 64LL) = v27;
  *(_OWORD *)(*((_QWORD *)this + 10) + 244LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v30;
  *(_OWORD *)(*((_QWORD *)this + 10) + 180LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 304LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 172LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 176LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 312LL) = 0x3FF0000000000000LL;
  v11 = 0;
  if ( v30.right - v30.left >= 0 )
    v11 = v30.right - v30.left;
  v12 = 0;
  if ( DWORD2(v26) - (int)v26 >= 0 )
    v12 = DWORD2(v26) - v26;
  if ( v12 != v11 )
    goto LABEL_10;
  v23 = 0;
  if ( v30.bottom - v30.top >= 0 )
    v23 = v30.bottom - v30.top;
  v24 = 0;
  if ( HIDWORD(v26) - DWORD1(v26) >= 0 )
    v24 = HIDWORD(v26) - DWORD1(v26);
  if ( v24 == v23 )
    v13 = 0;
  else
LABEL_10:
    v13 = 1;
  v14 = (_QWORD)v26 != *(_QWORD *)&v30.left;
  v15 = v6 != (_DWORD)v28 || __PAIR64__(v8, right) != *(_QWORD *)((char *)&v28 + 4) || bottom != HIDWORD(v28);
  if ( v13 && (v16 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v3 = v16, v16 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x176u);
  }
  else
  {
    if ( v15 )
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x2000);
    if ( v14 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v13 || v15 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x185u);
      }
      else
      {
        v18 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x186u);
        }
        else
        {
          v19 = CVisual::RenderRecursive(*((CVisual **)this + 13));
          v3 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x187u);
          }
          else if ( a2 )
          {
            CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
        }
      }
    }
  }
  return v3;
}
