/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D92C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180017400 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001B868 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x18001B91C (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001D82C (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18001F29C (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003137C (-IsPPIEdition@@YA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x180074488 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CTopLevelWindow *this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  CTopLevelWindow *v9; // rcx
  bool IsSheetOfGlass; // al
  int v11; // r8d
  int v12; // edx
  __int64 WindowColorizationColor; // rax
  float v14; // xmm6_4
  char v15; // dl
  CButton *v16; // r10
  struct CBitmapSource **v17; // rbp
  int v18; // eax
  CButton *v19; // rcx
  int v20; // eax
  CButton *v21; // rcx
  int v22; // eax
  CButton *v23; // rcx
  int v25; // ebp
  __int64 v26; // rbp
  int v27; // r14d
  int SystemMetricsForDpi; // r8d
  unsigned int i; // edx
  CVisual *v30; // rcx
  int v31; // eax
  int v32; // eax
  CButton *v33; // rcx
  int v34; // eax
  CButton *v35; // rcx
  int v36; // eax
  CVisual *v37; // rcx
  CButton *v38; // rcx
  int v39; // eax

  v4 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x93Au);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 2);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x93Bu);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 3);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x93Cu);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 0);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x93Du);
    return v5;
  }
  if ( *((_DWORD *)this + 170) == -1 )
  {
    v25 = *(_DWORD *)(*((_QWORD *)this + 90) + 324LL);
    if ( v25 >= 192 )
      *((_DWORD *)this + 170) = 3;
    else
      *((_DWORD *)this + 170) = v25 >= MulDiv(96, 3, 2) ? 2 : v25 >= MulDiv(96, 5, 4);
    v26 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v27 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    if ( v27 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 170) + v26 + 216) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 170) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 170) = i )
      {
        if ( v27 + *(_DWORD *)(**(_QWORD **)(320LL * (int)++i + v26 + 216) + 28LL) > SystemMetricsForDpi )
          break;
      }
    }
  }
  if ( a2 )
  {
    CTopLevelWindow::TreatAsActiveWindow(this);
    IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(v9);
    v12 = v11 | 0x40;
    if ( !IsSheetOfGlass )
      v12 = v11;
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor((__int64)this, v12 | 8u);
    if ( BYTE2(WindowColorizationColor)
       + 5 * BYTE1(WindowColorizationColor)
       + 2 * (unsigned int)(unsigned __int8)WindowColorizationColor <= 0x400
      && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) )
    {
      IsPPIEdition();
    }
    v14 = FLOAT_1_0;
    if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
      v14 = FLOAT_0_40000001;
    v16 = (CButton *)*((_QWORD *)this + 61);
    v17 = &a2[40 * *((int *)this + 170) + 27];
    if ( v15 )
    {
      if ( v16 )
      {
        v18 = CButton::SetVisualStates(
                v16,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v17
                                                  + ((*((_DWORD *)this + 146) & 0x40000) != 0 ? 128LL : 96LL)),
                a2[26],
                v14);
        v5 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x98Bu);
          return v5;
        }
      }
      v19 = (CButton *)*((_QWORD *)this + 62);
      if ( v19 )
      {
        v20 = CButton::SetVisualStates(
                v19,
                (const struct CBitmapSourceArray *)(a2 + 1),
                (const struct CBitmapSourceArray *)((char *)v17 + ((*((_DWORD *)this + 146) & 0x20) != 0 ? 128LL : 64LL)),
                a2[26],
                v14);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x997u);
          return v5;
        }
      }
      v21 = (CButton *)*((_QWORD *)this + 63);
      if ( v21 )
      {
        v22 = CButton::SetVisualStates(
                v21,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)((*((_DWORD *)this + 146) & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)v17,
                a2[25],
                v14);
        v5 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x9A4u);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 90) + 592LL) & 0x40) != 0 )
        {
          v30 = (CVisual *)*((_QWORD *)this + 63);
          *((_BYTE *)v30 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v30, 0x8000u);
        }
      }
      v23 = (CButton *)*((_QWORD *)this + 60);
      if ( !v23 )
        return v5;
      v31 = CButton::SetVisualStates(
              v23,
              (const struct CBitmapSourceArray *)(a2 + 5),
              (const struct CBitmapSourceArray *)(v17 + 4),
              a2[26],
              v14);
      v5 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x9B3u);
        return v5;
      }
    }
    else
    {
      if ( v16 )
      {
        v32 = CButton::SetVisualStates(
                *((CButton **)this + 61),
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x1200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v17
                                                  + ((*((_DWORD *)this + 146) & 0x40000 | 0x200000uLL) >> 13)),
                a2[26],
                v14);
        v5 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x9C5u);
          return v5;
        }
      }
      v33 = (CButton *)*((_QWORD *)this + 62);
      if ( v33 )
      {
        v34 = CButton::SetVisualStates(
                v33,
                (const struct CBitmapSourceArray *)(a2 + 9),
                (const struct CBitmapSourceArray *)((char *)v17 + ((*((_DWORD *)this + 146) & 0x20) != 0 ? 288LL : 224LL)),
                a2[26],
                v14);
        v5 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x9D1u);
          return v5;
        }
      }
      v35 = (CButton *)*((_QWORD *)this + 63);
      if ( v35 )
      {
        v36 = CButton::SetVisualStates(
                v35,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)((*((_DWORD *)this + 146) & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)(v17 + 20),
                a2[25],
                v14);
        v5 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x9DEu);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 90) + 592LL) & 0x40) != 0 )
        {
          v37 = (CVisual *)*((_QWORD *)this + 63);
          *((_BYTE *)v37 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v37, 0x8000u);
        }
      }
      v38 = (CButton *)*((_QWORD *)this + 60);
      if ( !v38 )
        return v5;
      v39 = CButton::SetVisualStates(
              v38,
              (const struct CBitmapSourceArray *)(a2 + 13),
              (const struct CBitmapSourceArray *)(v17 + 24),
              a2[26],
              v14);
      v5 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x9EDu);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(*((CButton **)this + 60), (*(_DWORD *)(*((_QWORD *)this + 90) + 348LL) & 8) != 0);
  }
  return v5;
}
