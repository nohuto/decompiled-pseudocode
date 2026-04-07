/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D8C8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800163AC (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001BA18 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18001BA98 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001D7B4 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18001EFB0 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800346A8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18003DD64 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x18006D6E8 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CTopLevelWindow *this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  __int64 v10; // rbp
  int v11; // r14d
  int SystemMetricsForDpi; // r8d
  _DWORD *CurrentDefaultColorizationFlags; // rax
  __int64 WindowColorizationColor; // rax
  float v15; // xmm6_4
  char v16; // dl
  struct CBitmapSource **v17; // rbp
  CButton *v18; // r10
  int v19; // eax
  CButton *v20; // rcx
  int v21; // eax
  CButton *v22; // rcx
  int v23; // eax
  CButton *v24; // rcx
  int v26; // edx
  CVisual *v27; // rcx
  int v28; // eax
  CButton *v29; // rcx
  int v30; // eax
  CButton *v31; // rcx
  int v32; // eax
  CButton *v33; // rcx
  int v34; // eax
  CVisual *v35; // rcx
  CButton *v36; // rcx
  int v37; // eax
  int v38; // [rsp+70h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x8FDu);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 2);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x8FEu);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 3);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x8FFu);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton((__int64)this, 0);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x900u);
    return v5;
  }
  if ( *((_DWORD *)this + 170) == -1 )
  {
    v9 = *(_DWORD *)(*((_QWORD *)this + 90) + 332LL);
    if ( v9 >= 192 )
      *((_DWORD *)this + 170) = 3;
    else
      *((_DWORD *)this + 170) = v9 >= MulDiv(96, 3, 2) ? 2 : v9 >= MulDiv(96, 5, 4);
    v10 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v11 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 90) + 332LL));
    if ( v11 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 170) + v10 + 216) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 170) = 0;
      do
      {
        v26 = *((_DWORD *)this + 170) + 1;
        if ( v11 + *(_DWORD *)(**(_QWORD **)(320LL * v26 + v10 + 216) + 28LL) > SystemMetricsForDpi )
          break;
        *((_DWORD *)this + 170) = v26;
      }
      while ( (unsigned int)v26 < 3 );
    }
  }
  if ( a2 )
  {
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, &v38);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                (__int64)this,
                                *CurrentDefaultColorizationFlags | 8u);
    if ( BYTE2(WindowColorizationColor)
       + 5 * BYTE1(WindowColorizationColor)
       + 2 * (unsigned int)(unsigned __int8)WindowColorizationColor <= 0x400
      && !CDesktopManager::IsHighContrastMode() )
    {
      IsPPIEdition();
    }
    v15 = FLOAT_1_0;
    if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
      v15 = FLOAT_0_40000001;
    v17 = &a2[40 * *((int *)this + 170) + 27];
    if ( v16 )
    {
      v18 = (CButton *)*((_QWORD *)this + 61);
      if ( v18 )
      {
        v19 = CButton::SetVisualStates(
                v18,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v17
                                                  + ((*((_DWORD *)this + 146) & 0x40000) != 0 ? 128LL : 96LL)),
                a2[26],
                v15);
        v5 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x94Eu);
          return v5;
        }
      }
      v20 = (CButton *)*((_QWORD *)this + 62);
      if ( v20 )
      {
        v21 = CButton::SetVisualStates(
                v20,
                (const struct CBitmapSourceArray *)(a2 + 1),
                (const struct CBitmapSourceArray *)((char *)v17 + ((*((_DWORD *)this + 146) & 0x20) != 0 ? 128LL : 64LL)),
                a2[26],
                v15);
        v5 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x95Au);
          return v5;
        }
      }
      v22 = (CButton *)*((_QWORD *)this + 63);
      if ( v22 )
      {
        v23 = CButton::SetVisualStates(
                v22,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)((*((_DWORD *)this + 146) & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)v17,
                a2[25],
                v15);
        v5 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x967u);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 90) + 592LL) & 0x40) != 0 )
        {
          v27 = (CVisual *)*((_QWORD *)this + 63);
          *((_BYTE *)v27 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v27, 0x8000);
        }
      }
      v24 = (CButton *)*((_QWORD *)this + 60);
      if ( !v24 )
        return v5;
      v28 = CButton::SetVisualStates(
              v24,
              (const struct CBitmapSourceArray *)(a2 + 5),
              (const struct CBitmapSourceArray *)(v17 + 4),
              a2[26],
              v15);
      v5 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x976u);
        return v5;
      }
    }
    else
    {
      v29 = (CButton *)*((_QWORD *)this + 61);
      if ( v29 )
      {
        v30 = CButton::SetVisualStates(
                v29,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x1200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v17
                                                  + ((*((_DWORD *)this + 146) & 0x40000 | 0x200000uLL) >> 13)),
                a2[26],
                v15);
        v5 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x988u);
          return v5;
        }
      }
      v31 = (CButton *)*((_QWORD *)this + 62);
      if ( v31 )
      {
        v32 = CButton::SetVisualStates(
                v31,
                (const struct CBitmapSourceArray *)(a2 + 9),
                (const struct CBitmapSourceArray *)((char *)v17 + ((*((_DWORD *)this + 146) & 0x20) != 0 ? 288LL : 224LL)),
                a2[26],
                v15);
        v5 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x994u);
          return v5;
        }
      }
      v33 = (CButton *)*((_QWORD *)this + 63);
      if ( v33 )
      {
        v34 = CButton::SetVisualStates(
                v33,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)((*((_DWORD *)this + 146) & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)(v17 + 20),
                a2[25],
                v15);
        v5 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x9A1u);
          return v5;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 90) + 592LL) & 0x40) != 0 )
        {
          v35 = (CVisual *)*((_QWORD *)this + 63);
          *((_BYTE *)v35 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v35, 0x8000);
        }
      }
      v36 = (CButton *)*((_QWORD *)this + 60);
      if ( !v36 )
        return v5;
      v37 = CButton::SetVisualStates(
              v36,
              (const struct CBitmapSourceArray *)(a2 + 13),
              (const struct CBitmapSourceArray *)(v17 + 24),
              a2[26],
              v15);
      v5 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x9B0u);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(*((CButton **)this + 60), (*(_DWORD *)(*((_QWORD *)this + 90) + 356LL) & 8) != 0);
  }
  return v5;
}
