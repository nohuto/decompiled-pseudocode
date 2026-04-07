/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18002906C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800157E8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180020360 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026D5C (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026F0C (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180028F6C (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18002AB80 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18004A600 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x180077DF4 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CTopLevelWindow *this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // r14d
  unsigned int v14; // eax
  int SystemMetricsForDpi; // r8d
  CTopLevelWindow *v16; // rcx
  bool IsSheetOfGlass; // al
  int v18; // r8d
  int v19; // edx
  __int64 WindowColorizationColor; // rax
  float v21; // xmm6_4
  char v22; // dl
  struct CBitmapSource **v23; // rbp
  CButton *v24; // r10
  int v25; // eax
  CButton *v26; // rcx
  int v27; // eax
  CButton *v28; // rcx
  int v29; // eax
  CButton *v30; // rcx
  CVisual *v32; // rcx
  int v33; // eax
  CButton *v34; // rcx
  int v35; // eax
  CButton *v36; // rcx
  int v37; // eax
  CButton *v38; // rcx
  int v39; // eax
  CVisual *v40; // rcx
  CButton *v41; // rcx
  int v42; // eax

  v4 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x904u);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 2);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x905u);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 3);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x906u);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 0);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x907u);
    return v5;
  }
  if ( *((_DWORD *)this + 170) == -1 )
  {
    v9 = *((_QWORD *)this + 90);
    v10 = *(_DWORD *)(v9 + 348) ? *(_DWORD *)(v9 + 328) : GetDpiForSystem();
    if ( v10 >= 192 )
      *((_DWORD *)this + 170) = 3;
    else
      *((_DWORD *)this + 170) = v10 >= MulDiv(96, 3, 2) ? 2 : v10 >= MulDiv(96, 5, 4);
    v11 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v12 = *((_QWORD *)this + 90);
    v13 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    v14 = *(_DWORD *)(v12 + 348) ? *(_DWORD *)(v12 + 328) : GetDpiForSystem();
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, v14);
    if ( v13 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 170) + v11 + 216) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 170) = 0;
      do
      {
        if ( v13 + *(_DWORD *)(**(_QWORD **)(320LL * (*((_DWORD *)this + 170) + 1) + v11 + 216) + 28LL) > SystemMetricsForDpi )
          break;
        ++*((_DWORD *)this + 170);
      }
      while ( *((_DWORD *)this + 170) < 3u );
    }
  }
  if ( a2 )
  {
    CTopLevelWindow::TreatAsActiveWindow(this);
    IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(v16);
    v19 = v18 | 0x40;
    if ( !IsSheetOfGlass )
      v19 = v18;
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor((__int64)this, v19 | 8u);
    if ( BYTE2(WindowColorizationColor)
       + 5 * BYTE1(WindowColorizationColor)
       + 2 * (unsigned int)(unsigned __int8)WindowColorizationColor <= 0x400
      && !CDesktopManager::IsHighContrastMode() )
    {
      IsPPIEdition();
    }
    v21 = FLOAT_1_0;
    if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
      v21 = FLOAT_0_40000001;
    v23 = &a2[40 * *((int *)this + 170) + 27];
    if ( v22 )
    {
      v24 = (CButton *)*((_QWORD *)this + 61);
      if ( v24 )
      {
        v25 = CButton::SetVisualStates(
                v24,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v23
                                                  + ((*((_DWORD *)this + 146) & 0x40000) != 0 ? 0x20 : 0)
                                                  + 96),
                a2[26],
                v21);
        v5 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x956u);
          return v5;
        }
      }
      v26 = (CButton *)*((_QWORD *)this + 62);
      if ( v26 )
      {
        v27 = CButton::SetVisualStates(
                v26,
                (const struct CBitmapSourceArray *)(a2 + 1),
                (const struct CBitmapSourceArray *)((char *)v23 + ((*((_BYTE *)this + 584) & 0x20) != 0 ? 128LL : 64LL)),
                a2[26],
                v21);
        v5 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x962u);
          return v5;
        }
      }
      v28 = (CButton *)*((_QWORD *)this + 63);
      if ( v28 )
      {
        v29 = CButton::SetVisualStates(
                v28,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)((*((_DWORD *)this + 146) & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)v23,
                a2[25],
                v21);
        v5 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x96Fu);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 90) + 592LL) & 0x40) != 0 )
        {
          v32 = (CVisual *)*((_QWORD *)this + 63);
          *((_BYTE *)v32 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v32, 0x8000);
        }
      }
      v30 = (CButton *)*((_QWORD *)this + 60);
      if ( !v30 )
        return v5;
      v33 = CButton::SetVisualStates(
              v30,
              (const struct CBitmapSourceArray *)(a2 + 5),
              (const struct CBitmapSourceArray *)(v23 + 4),
              a2[26],
              v21);
      v5 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x97Eu);
        return v5;
      }
    }
    else
    {
      v34 = (CButton *)*((_QWORD *)this + 61);
      if ( v34 )
      {
        v35 = CButton::SetVisualStates(
                v34,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x1200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v23
                                                  + ((*((_DWORD *)this + 146) & 0x40000 | 0x200000uLL) >> 13)),
                a2[26],
                v21);
        v5 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x990u);
          return v5;
        }
      }
      v36 = (CButton *)*((_QWORD *)this + 62);
      if ( v36 )
      {
        v37 = CButton::SetVisualStates(
                v36,
                (const struct CBitmapSourceArray *)(a2 + 9),
                (const struct CBitmapSourceArray *)((char *)v23 + ((*((_BYTE *)this + 584) & 0x20) != 0 ? 288LL : 224LL)),
                a2[26],
                v21);
        v5 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x99Cu);
          return v5;
        }
      }
      v38 = (CButton *)*((_QWORD *)this + 63);
      if ( v38 )
      {
        v39 = CButton::SetVisualStates(
                v38,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)((*((_DWORD *)this + 146) & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)(v23 + 20),
                a2[25],
                v21);
        v5 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x9A9u);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 90) + 592LL) & 0x40) != 0 )
        {
          v40 = (CVisual *)*((_QWORD *)this + 63);
          *((_BYTE *)v40 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v40, 0x8000);
        }
      }
      v41 = (CButton *)*((_QWORD *)this + 60);
      if ( !v41 )
        return v5;
      v42 = CButton::SetVisualStates(
              v41,
              (const struct CBitmapSourceArray *)(a2 + 13),
              (const struct CBitmapSourceArray *)(v23 + 24),
              a2[26],
              v21);
      v5 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x9B8u);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(*((CButton **)this + 60), (*(_DWORD *)(*((_QWORD *)this + 90) + 356LL) & 8) != 0);
  }
  return v5;
}
