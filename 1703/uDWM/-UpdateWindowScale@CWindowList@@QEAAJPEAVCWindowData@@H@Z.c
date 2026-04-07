/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800079B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F800 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031A70 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180001F44 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x18000EA6C (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A5DC (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180033BB4 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035260 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003A67C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003D6A8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18006FFC0 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800700A4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007F038 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     PixelAligningFactor @ 0x180084668 (PixelAligningFactor.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(CWindowList *this, struct CWindowData *a2, int a3)
{
  unsigned int v3; // ebp
  char v4; // r14
  double v6; // xmm7_8
  double v9; // xmm8_8
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  int v13; // esi
  int v14; // edi
  float v15; // xmm1_4
  CProjectionBorderVisual *v16; // rcx
  __int64 v17; // rdi
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // edx
  bool v21; // zf
  void (__fastcall *v22)(CVisual *, int); // rax
  CButton *v23; // rcx
  CBaseObject *v24; // rsi
  CWindowIconic *v25; // rcx
  int v26; // edi
  unsigned int i; // esi
  __int64 v29; // rcx
  int v30; // edi
  int v31; // esi
  int v32; // edi
  int v33; // esi
  double v34; // xmm11_8
  __int64 v35; // rcx
  double v36; // xmm0_8
  double v37; // xmm1_8
  float v38; // xmm4_4
  float v39; // xmm3_4
  CBaseObject *v40; // rcx
  int updated; // eax
  CWindowList *v42; // rcx
  CTopLevelWindow *v43; // rcx
  HWND v44; // rdx
  double v45; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+38h] [rbp-A0h] BYREF
  double v47; // [rsp+E8h] [rbp+10h] BYREF
  struct tagPOINT v48; // [rsp+F8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = *((double *)a2 + 38);
  v9 = *((double *)a2 + 39);
  v10 = v6;
  v11 = v9;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a2 + 43) - v10)) & _xmm);
  if ( v12 > 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a2 + 44) - v11)) & _xmm) > 0.0000011920929 )
  {
    *((float *)a2 + 43) = v10;
    v4 = 1;
    *((float *)a2 + 44) = v11;
  }
  if ( v6 == 1.0 && v9 == 1.0 )
  {
    if ( *((float *)a2 + 45) == 1.0 && *((float *)a2 + 46) == 1.0 )
      goto LABEL_7;
    *((_DWORD *)a2 + 46) = 1065353216;
    *((_DWORD *)a2 + 45) = 1065353216;
LABEL_65:
    v4 = 1;
    goto LABEL_7;
  }
  v30 = 0;
  v31 = 0;
  if ( *((_DWORD *)a2 + 49) - *((_DWORD *)a2 + 47) >= 0 )
    v30 = *((_DWORD *)a2 + 49) - *((_DWORD *)a2 + 47);
  v32 = v30 - *((_DWORD *)a2 + 64) - *((_DWORD *)a2 + 63);
  if ( *((_DWORD *)a2 + 50) - *((_DWORD *)a2 + 48) >= 0 )
    v31 = *((_DWORD *)a2 + 50) - *((_DWORD *)a2 + 48);
  v33 = v31 - *((_DWORD *)a2 + 66) - *((_DWORD *)a2 + 65);
  if ( v33 && v32 )
  {
    v34 = PixelAligningFactor(this, (unsigned int)v32, &v45, &v47);
    v36 = PixelAligningFactor(v35, (unsigned int)v33, &v46, &v48);
    if ( v47 <= 0.02 && *(double *)&v48 <= 0.02 )
    {
      v37 = ((double)v32 / (double)v33 - v45 / *(double *)&v46) / ((double)v32 / (double)v33);
      if ( v37 < 0.0 )
        *(_QWORD *)&v37 ^= _xmm;
      if ( v37 <= 0.02 )
      {
        v6 = v34;
        v9 = v36;
      }
    }
    v38 = v6;
    v39 = v9;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a2 + 45) - v38)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a2 + 46) - v39)) & _xmm) > 0.0000011920929 )
    {
      *((float *)a2 + 45) = v38;
      *((float *)a2 + 46) = v39;
      goto LABEL_65;
    }
  }
LABEL_7:
  v13 = *((_DWORD *)a2 + 49) - *((_DWORD *)a2 + 47);
  if ( v13 < 0 )
    v13 = 0;
  v14 = *((_DWORD *)a2 + 50) - *((_DWORD *)a2 + 48);
  if ( v14 < 0 )
    v14 = 0;
  v15 = *((float *)a2 + 43);
  if ( v15 != 1.0 || *((float *)a2 + 44) != 1.0 )
  {
    v13 = (int)floor_0((float)((float)v13 * v15) + 0.5);
    v14 = (int)floor_0((float)((float)v14 * *((float *)a2 + 44)) + 0.5);
  }
  *((_DWORD *)a2 + 14) = v13 + *((_DWORD *)a2 + 12);
  v16 = (CProjectionBorderVisual *)(unsigned int)(v14 + *((_DWORD *)a2 + 13));
  v17 = *((_QWORD *)a2 + 50);
  *((_DWORD *)a2 + 15) = (_DWORD)v16;
  if ( !v17 )
    goto LABEL_32;
  v18 = *(_DWORD **)(v17 + 720);
  v19 = v18[14] - v18[12];
  if ( v19 < 0 )
    v19 = 0;
  v20 = v18[15] - v18[13];
  LODWORD(v47) = v19;
  if ( v20 < 0 )
    v20 = 0;
  HIDWORD(v47) = v20;
  if ( *(_DWORD *)(v17 + 120) != v19 || *(_DWORD *)(v17 + 124) != v20 )
  {
    v21 = (*(_BYTE *)(v17 + 84) & 1) == 0;
    *(double *)(v17 + 120) = v47;
    if ( !v21 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 16LL);
    v22 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v17 + 24LL);
    if ( v22 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags((CVisual *)v17, 2);
    else
      v22((CVisual *)v17, 2);
  }
  v23 = *(CButton **)(v17 + 736);
  if ( v23 )
  {
    CButton::SetMouseCapture(v23, 0);
    v40 = *(CBaseObject **)(v17 + 736);
    if ( v40 )
    {
      CBaseObject::Release(v40);
      *(_QWORD *)(v17 + 736) = 0LL;
    }
  }
  v24 = *(CBaseObject **)(v17 + 728);
  if ( v24 )
  {
    *(_QWORD *)(v17 + 728) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v24 + 104LL))(v24);
    v29 = *(_QWORD *)(v17 + 728);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 96LL))(v29);
    CBaseObject::Release(v24);
  }
  v25 = (CWindowIconic *)*((_QWORD *)a2 + 54);
  v26 = 0;
  if ( v25 && (updated = CWindowIconic::UpdateSizeOrMargins(v25, 0), v26 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x18B8u);
  }
  else
  {
    v16 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 52);
    if ( v16 )
      CProjectionBorderVisual::UpdateRectFromWindow(v16, a2);
    for ( i = 0; i < *((_DWORD *)a2 + 116); ++i )
    {
      v16 = *(CProjectionBorderVisual **)(*((_QWORD *)a2 + 55) + 8LL * i);
      v46 = *((_OWORD *)v16 + 4);
      if ( (struct CWindowData *)v46 == a2 && ((DWORD2(v46) - 1) & 0xFFFFFFFD) == 0 )
        CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v16);
    }
    if ( *((_DWORD *)a2 + 126) )
    {
      do
      {
        v16 = *(CProjectionBorderVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 60) + 8LL * v3) + 88LL);
        if ( v16 )
          CThumbnailVisual::SetDirtyFlags(v16, 0x1000u);
        ++v3;
      }
      while ( v3 < *((_DWORD *)a2 + 126) );
    }
  }
  v3 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x9E7u);
  }
  else
  {
LABEL_32:
    if ( v4 || a3 )
    {
      CWindowList::OnClientMarginsChange(v16, a2);
      CWindowList::OnClientGlassChange(v42, a2);
      v43 = (CTopLevelWindow *)*((_QWORD *)a2 + 50);
      if ( v43 )
        CTopLevelWindow::OnWindowScaleUpdated(v43);
      v44 = (HWND)*((_QWORD *)a2 + 5);
      v48 = *(struct tagPOINT *)((char *)a2 + 48);
      LOBYTE(v47) = 0;
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
        v44,
        &v48);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
        a2,
        v48,
        (bool *)&v47);
      if ( !LOBYTE(v47) )
        CWindowList::OnPositionChange(this, a2, 1);
    }
  }
  return v3;
}
