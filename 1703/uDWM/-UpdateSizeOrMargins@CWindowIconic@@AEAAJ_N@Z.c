/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003D6A8
 * Callers:
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030A10 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003D510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003D654 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003DBAC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800700A4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x1800368A8 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003D918 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18003E42C (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18003E488 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003E4F0 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x180085F90 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  char v3; // r12
  unsigned int v4; // ebx
  struct tagRECT v5; // xmm0
  __int64 v6; // rax
  int v7; // esi
  LONG right; // r13d
  int v9; // r15d
  struct tagSIZE v10; // rax
  LONG bottom; // edx
  int v12; // ecx
  int v13; // eax
  char v14; // r14
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
  v4 = 0;
  v5 = *(struct tagRECT *)(*((_QWORD *)this + 9) + 48LL);
  v6 = *((_QWORD *)this + 10);
  *(_QWORD *)&Rect.left = 0LL;
  v30 = v5;
  *(_QWORD *)&Rect.right = 0LL;
  v26 = *(_OWORD *)(v6 + 48);
  v28 = *(_OWORD *)(v6 + 64);
  AdjustWindowRectEx(&Rect, *(_DWORD *)(v6 + 100), 0, 0);
  v7 = -Rect.left;
  right = Rect.right;
  v9 = -Rect.top;
  LODWORD(v27) = -Rect.left;
  DWORD1(v27) = Rect.right;
  DWORD2(v27) = -Rect.top;
  HIDWORD(v27) = Rect.bottom;
  if ( *((_BYTE *)this + 20) )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v30);
    v4 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WindowRectForLivePreview, 0x168u);
      return v4;
    }
    bottom = Rect.bottom;
  }
  else
  {
    DwmGetIdealIconicThumbnailSize(1, &v29);
    if ( *((_DWORD *)this + 4) == 2 && (v21 = (struct tagSIZE *)*((_QWORD *)this + 3)) != 0LL )
      v10 = v21[3];
    else
      v10 = v29;
    v30.right = v7 + right + v10.cx + v30.left;
    bottom = Rect.bottom;
    v30.bottom = v9 + Rect.bottom + v30.top + v10.cy;
  }
  *(_OWORD *)(*((_QWORD *)this + 10) + 64LL) = v27;
  *(_OWORD *)(*((_QWORD *)this + 10) + 252LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v30;
  *(_OWORD *)(*((_QWORD *)this + 10) + 188LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 176LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 172LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 180LL) = *(_QWORD *)(*((_QWORD *)this + 10) + 172LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 320LL) = 0x3FF0000000000000LL;
  v12 = DWORD2(v26) - v26;
  if ( DWORD2(v26) - (int)v26 < 0 )
    v12 = 0;
  v13 = v30.right - v30.left;
  if ( v30.right - v30.left < 0 )
    v13 = 0;
  if ( v12 != v13 )
    goto LABEL_10;
  v14 = 0;
  v23 = HIDWORD(v26) - DWORD1(v26);
  if ( HIDWORD(v26) - DWORD1(v26) < 0 )
    v23 = 0;
  v24 = v30.bottom - v30.top;
  if ( v30.bottom - v30.top < 0 )
    v24 = 0;
  if ( v23 != v24 )
LABEL_10:
    v14 = 1;
  if ( (_QWORD)v26 != *(_QWORD *)&v30.left )
    v3 = 1;
  v15 = bottom != HIDWORD(v28) || v7 != (_DWORD)v28 || __PAIR64__(v9, right) != *(_QWORD *)((char *)&v28 + 4);
  if ( v14 && (v16 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v4 = v16, v16 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x175u);
  }
  else
  {
    if ( v15 )
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x2000);
    if ( v3 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v14 || v15 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x184u);
      }
      else
      {
        v18 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v4 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x185u);
        }
        else
        {
          v19 = CVisual::RenderRecursive(*((CVisual **)this + 13));
          v4 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x186u);
          }
          else if ( a2 )
          {
            CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
        }
      }
    }
  }
  return v4;
}
