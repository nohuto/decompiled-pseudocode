/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027A40
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180004FEC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180009C40 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800263D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028630 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x18000B008 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C938 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18000C960 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000E7A4 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x180046742 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180074D90 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180076F64 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x1800790B0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     McTemplateU0pq @ 0x180079638 (McTemplateU0pq.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct tagRECT *a2, char a3)
{
  int bottom; // edi
  int left; // esi
  float v8; // xmm2_4
  __int64 v9; // rdi
  unsigned int v10; // ebp
  bool v11; // zf
  __int64 v12; // rax
  int v13; // ecx
  int v14; // edx
  void (__fastcall *v15)(CVisual *, int); // rax
  CDesktopThumbnailCVIVisual *v16; // rcx
  CButton *v17; // rcx
  volatile signed __int32 *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  CProjectionBorderVisual *v22; // rcx
  unsigned int i; // edi
  __int64 v24; // rcx
  CBaseObject *v25; // rcx
  int SnapshotIndex; // eax
  CTransitionVisualController *v27; // rcx
  __int64 v28; // rcx
  int started; // eax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdi
  CAccentBlurBehind *v33; // rcx
  struct CTransitionWindowSnapshot *v34; // [rsp+60h] [rbp+8h] BYREF

  bottom = a2[11].bottom;
  left = a2[12].left;
  if ( (double)a2[21].left != 0.0 || (double)a2[21].top != 0.0 )
  {
    bottom -= (int)floor_0((float)a2[21].left + 0.5);
    left -= (int)floor_0((float)a2[21].top + 0.5);
  }
  v8 = *(float *)&a2[10].bottom;
  if ( v8 != 1.0 || *(float *)&a2[11].left != 1.0 )
  {
    bottom = (int)floor_0((float)((float)bottom * v8) + 0.5);
    left = (int)floor_0((float)((float)left * *(float *)&a2[11].left) + 0.5);
  }
  if ( (double)a2[21].right != 0.0 || (double)a2[21].bottom != 0.0 )
  {
    bottom += (int)floor_0((float)a2[21].right + 0.5);
    left += (int)floor_0((float)a2[21].bottom + 0.5);
  }
  OffsetRect(a2 + 3, bottom - a2[3].left, left - a2[3].top);
  v9 = *(_QWORD *)&a2[25].left;
  v10 = 0;
  if ( v9 )
  {
    v11 = (*(_BYTE *)(v9 + 241) & 2) == 0;
    v12 = *(_QWORD *)(v9 + 720);
    v13 = *(_DWORD *)(v12 + 48);
    v14 = *(_DWORD *)(v12 + 52);
    v34 = (struct CTransitionWindowSnapshot *)__PAIR64__(v14, v13);
    if ( !v11 )
    {
      v13 = -32000;
      v34 = (struct CTransitionWindowSnapshot *)0xFFFF8300FFFF8300LL;
      v14 = -32000;
    }
    if ( v13 != *(_DWORD *)(v9 + 112) || v14 != *(_DWORD *)(v9 + 116) )
    {
      *(_QWORD *)(v9 + 112) = v34;
      v15 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v9 + 24LL);
      if ( v15 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags((CVisual *)v9, 8);
      else
        v15((CVisual *)v9, 8);
    }
    v16 = *(CDesktopThumbnailCVIVisual **)(*(_QWORD *)(v9 + 720) + 584LL);
    if ( v16 )
      CDesktopThumbnailCVIVisual::SetDirtyFlags(v16, 0x1000u);
    v17 = *(CButton **)(v9 + 736);
    if ( v17 )
    {
      CButton::SetMouseCapture(v17, 0);
      v25 = *(CBaseObject **)(v9 + 736);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *(_QWORD *)(v9 + 736) = 0LL;
      }
    }
    v18 = *(volatile signed __int32 **)(v9 + 728);
    if ( v18 )
    {
      *(_QWORD *)(v9 + 728) = 0LL;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 104LL))(v18);
      v19 = *(_QWORD *)(v9 + 728);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 96LL))(v19);
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v18)(v18, 1LL);
    }
  }
  v20 = *(_QWORD *)&a2[25].right;
  if ( v20 )
  {
    if ( !a3
      || (v21 = *(_QWORD *)(v20 + 328), (*(_BYTE *)(v21 + 596) & 1) != 0)
      || (*(_DWORD *)(v21 + 600) & 0xFFF) == 0xFFF
      || (SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
                            *(HWND *)(v21 + 40)),
          (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v27, SnapshotIndex, &v34) < 0) )
    {
      if ( !*(_BYTE *)(v20 + 288) && !*(_DWORD *)(v20 + 372) )
        *(_OWORD *)(v20 + 308) = *(_OWORD *)(*(_QWORD *)(v20 + 328) + 48LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0pq(v28, &UdwmSystemAnimation_DelayShowHide, *(_QWORD *)(v21 + 40), 0LL);
      started = CTopLevelWindow3D::StartAnimation(v20, 9u);
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x16Bu);
    }
  }
  v22 = *(CProjectionBorderVisual **)&a2[26].left;
  if ( v22 )
    CProjectionBorderVisual::UpdateRectFromWindow(v22, (struct CWindowData *)a2);
  for ( i = 0; i < a2[29].left; ++i )
  {
    v24 = *(_QWORD *)(*(_QWORD *)&a2[27].right + 8LL * i);
    if ( *(struct tagRECT **)(v24 + 64) == a2 && *(_DWORD *)(v24 + 72) == 1 )
      CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v24);
  }
  if ( *((_DWORD *)this + 142) )
  {
    do
    {
      v30 = *(_QWORD *)(*((_QWORD *)this + 68) + 8LL * v10);
      v31 = *(_QWORD *)(v30 + 400);
      if ( v31 )
      {
        if ( *(_QWORD *)(v30 + 120) == *(_QWORD *)&a2[7].right )
        {
          v32 = *(_QWORD *)(v31 + 264);
          if ( v32 )
          {
            v33 = *(CAccentBlurBehind **)(v32 + 336);
            if ( v33 )
            {
              if ( *(_QWORD *)&a2[2].right == *(_QWORD *)(v32 + 376)
                || CAccentBlurBehind::IsBlurBehindDirty(
                     v33,
                     (struct CWindowData *)a2,
                     (const struct tagRECT *)(v32 + 592),
                     *(_QWORD *)(v32 + 384),
                     *(HWND *)(v32 + 376)) )
              {
                CVisual::SetDirtyFlags((CVisual *)v32, 0x10000);
              }
            }
          }
        }
      }
      ++v10;
    }
    while ( v10 < *((_DWORD *)this + 142) );
  }
}
