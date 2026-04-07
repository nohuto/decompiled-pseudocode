/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180028460
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B7F0 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023840 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023874 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180027A50 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x1800282B0 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEBAHH@Z @ 0x180035A24 (-GetSystemMetrics@CWindowData@@QEBAHH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  int v2; // eax
  CVisual *v3; // rcx
  CVisual *v4; // rcx
  int v5; // eax
  CVisual *v6; // rcx
  int v7; // eax
  CVisual *v8; // rcx
  int v9; // eax
  struct _MARGINS *v10; // rcx
  int v11; // eax
  char v12; // r12
  char v13; // dl
  __int64 v14; // rcx
  __int128 v15; // xmm1
  int v16; // esi
  LONG v17; // ecx
  int v18; // eax
  int v19; // esi
  LONG v20; // r13d
  __int64 v21; // rax
  unsigned int DpiForSystem; // eax
  int SystemMetricsForDpi; // eax
  LONG SystemMetrics; // edi
  LONG v25; // eax
  int v26; // r15d
  int updated; // eax
  unsigned int v28; // r12d
  int v29; // r12d
  float v30; // xmm6_4
  unsigned int v31; // edi
  CVisual *v32; // rcx
  int v33; // eax
  unsigned int v34; // ebx
  CVisual *v36; // rcx
  LONG *v37; // rcx
  __int64 (__fastcall *v38)(CText *, const struct tagSIZE *); // rax
  int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // eax
  LONG v42; // eax
  __int64 v43; // rcx
  LONG v44; // edi
  unsigned int v45; // eax
  struct tagSIZE *v46; // rcx
  __int64 (__fastcall *v47)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v48; // eax
  int v49; // ecx
  __int64 v50; // rax
  unsigned int v51; // eax
  int v52; // eax
  double v53; // xmm0_8
  LONG v54; // eax
  LONG v55; // r12d
  CVisual *v56; // rcx
  CVisual *v57; // rcx
  struct tagSIZE *v58; // rcx
  __int64 (__fastcall *v59)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // eax
  int v63; // eax
  int v64; // eax
  LONG v65; // eax
  LONG v66; // r12d
  CVisual *v67; // rcx
  CVisual *v68; // rcx
  struct tagSIZE *v69; // rcx
  __int64 (__fastcall *v70)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v71; // eax
  void (__fastcall *v72)(CVisual *, int); // rax
  void (__fastcall *v73)(CVisual *, int); // rax
  void (__fastcall *v74)(CVisual *, int); // rax
  void (__fastcall *v75)(CVisual *, int); // rax
  void (__fastcall *v76)(CVisual *, int); // rax
  void (__fastcall *v77)(CVisual *, int); // rax
  void (__fastcall *v78)(CVisual *, int); // rax
  int v79; // eax
  int v80; // eax
  struct tagSIZE v81; // [rsp+A0h] [rbp+40h] BYREF
  struct tagSIZE v82; // [rsp+A8h] [rbp+48h] BYREF

  if ( *((_QWORD *)this + 59) )
  {
    v2 = *((_DWORD *)this + 147);
    v3 = (CVisual *)*((_QWORD *)this + 67);
    if ( *((_DWORD *)v3 + 32) != v2 )
    {
      *((_DWORD *)v3 + 32) = v2;
      v74 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
      if ( v74 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 2);
      else
        v74(v3, 2);
    }
    v4 = (CVisual *)*((_QWORD *)this + 67);
    v5 = *((_DWORD *)this + 149);
    if ( *((_DWORD *)v4 + 34) != v5 )
    {
      *((_DWORD *)v4 + 34) = v5;
      v72 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v4 + 24LL);
      if ( v72 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v4, 2);
      else
        v72(v4, 2);
    }
    v6 = (CVisual *)*((_QWORD *)this + 67);
    v7 = *((_DWORD *)this + 148);
    if ( *((_DWORD *)v6 + 33) != v7 )
    {
      *((_DWORD *)v6 + 33) = v7;
      v75 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v75 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 2);
      else
        v75(v6, 2);
    }
    v8 = (CVisual *)*((_QWORD *)this + 67);
    v9 = *((_DWORD *)this + 150);
    if ( *((_DWORD *)v8 + 35) != v9 )
    {
      *((_DWORD *)v8 + 35) = v9;
      v73 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v8 + 24LL);
      if ( v73 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v8, 2);
      else
        v73(v8, 2);
    }
    v10 = (struct _MARGINS *)*((_QWORD *)this + 36);
    if ( v10 )
      CVisual::SetInsetFromParent(v10, (const struct _MARGINS *)(*((_QWORD *)this + 67) + 128LL));
  }
  v11 = *((_DWORD *)this + 148);
  if ( v11 <= 0 )
    v11 = *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
  if ( (*((_BYTE *)this + 584) & 2) != 0 )
  {
    v12 = 1;
    ++v11;
  }
  else
  {
    v12 = 0;
  }
  v13 = *((_BYTE *)this + 240) & 8;
  if ( v13 )
    v14 = 636LL;
  else
    v14 = 620LL;
  v15 = *(_OWORD *)((char *)this + v14);
  v16 = *((_DWORD *)this + 147);
  v17 = DWORD1(v15) + 1;
  v18 = v11 - 1;
  if ( v18 > DWORD1(v15) + 1 )
    v17 = v18;
  v81.cx = v17;
  if ( v13 )
    v19 = v16 + 2;
  else
    v19 = 2 * v16 - v15;
  v20 = 0;
  if ( v12 )
  {
    SystemMetrics = CWindowData::GetSystemMetrics(*((CWindowData **)this + 90), 53);
  }
  else
  {
    v21 = *((_QWORD *)this + 90);
    if ( *(_DWORD *)(v21 + 348) )
      DpiForSystem = *(_DWORD *)(v21 + 328);
    else
      DpiForSystem = GetDpiForSystem();
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, DpiForSystem);
    SystemMetrics = *((_DWORD *)this + 153) - DWORD2(v15);
    v25 = *(_DWORD *)(*((_QWORD *)this + 90) + 96LL) + SystemMetricsForDpi;
    if ( v25 < SystemMetrics )
      SystemMetrics = v25;
    if ( SystemMetrics < 0 )
    {
      SystemMetrics = 0;
      v26 = DWORD2(v15);
      goto LABEL_25;
    }
  }
  v26 = DWORD2(v15);
  if ( !v12 )
  {
LABEL_25:
    if ( (*((_BYTE *)this + 240) & 8) != 0 && *((_DWORD *)this + 161) > *((_DWORD *)this + 157) )
    {
      if ( --SystemMetrics < 0 )
        SystemMetrics = 0;
    }
    else
    {
      v26 = DWORD2(v15) + 1;
    }
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 149) - SystemMetrics - 2 > SDWORD2(v15) )
    v26 = *((_DWORD *)this + 149) - SystemMetrics - 2;
LABEL_27:
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 3, SystemMetrics, v26, &v81);
  v28 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xBE8u);
    return v28;
  }
  v29 = 0;
  v30 = FLOAT_2_1818182;
  if ( *((_QWORD *)this + 62) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
    {
      v79 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 90), 53);
      v54 = (int)floor_0((float)((float)v79 * 0.95454544) + 0.5);
      v55 = v54;
    }
    else
    {
      v50 = *((_QWORD *)this + 90);
      if ( *(_DWORD *)(v50 + 348) )
        v51 = *(_DWORD *)(v50 + 328);
      else
        v51 = GetDpiForSystem();
      v52 = GetSystemMetricsForDpi(31LL, v51);
      v53 = floor_0((float)((float)v52 * 0.95454544) + 0.5);
      v54 = (int)floor_0((float)((float)(int)v53 * 2.1818182) + 0.5);
      v55 = SystemMetrics;
    }
    v56 = (CVisual *)*((_QWORD *)this + 62);
    v82.cx = v54;
    CVisual::SetInsetFromParentTop(v56, v26);
    v57 = (CVisual *)*((_QWORD *)this + 62);
    if ( *((_DWORD *)v57 + 33) != v81.cx )
    {
      *((_DWORD *)v57 + 33) = v81.cx;
      v77 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v57 + 24LL);
      if ( v77 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v57, 2);
      else
        v77(v57, 2);
    }
    v58 = (struct tagSIZE *)*((_QWORD *)this + 62);
    v82.cy = v55;
    v59 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v58 + 80LL);
    if ( v59 == CVisual::SetSize )
      v60 = CVisual::SetSize(v58, &v82);
    else
      v60 = v59(v58, &v82);
    v29 = v60;
    if ( v60 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0xC50u);
    else
      v81.cx += *(_DWORD *)(*((_QWORD *)this + 62) + 120LL);
  }
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xBE9u);
    return (unsigned int)v29;
  }
  v29 = 0;
  if ( *((_QWORD *)this + 61) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
    {
      v80 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 90), 53);
      v65 = (int)floor_0((float)((float)v80 * 0.95454544) + 0.5);
      v66 = v65;
    }
    else
    {
      v61 = *((_QWORD *)this + 90);
      if ( *(_DWORD *)(v61 + 348) )
        v62 = *(_DWORD *)(v61 + 328);
      else
        v62 = GetDpiForSystem();
      v63 = GetSystemMetricsForDpi(31LL, v62);
      v64 = (int)floor_0((float)((float)v63 * 0.95454544) + 0.5);
      if ( !*((_QWORD *)this + 60) )
        v30 = FLOAT_2_2272727;
      v65 = (int)floor_0((float)((float)v64 * v30) + 0.5);
      v66 = SystemMetrics;
    }
    v67 = (CVisual *)*((_QWORD *)this + 61);
    v82.cx = v65;
    CVisual::SetInsetFromParentTop(v67, v26);
    v68 = (CVisual *)*((_QWORD *)this + 61);
    if ( *((_DWORD *)v68 + 33) != v81.cx )
    {
      *((_DWORD *)v68 + 33) = v81.cx;
      v78 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v68 + 24LL);
      if ( v78 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v68, 2);
      else
        v78(v68, 2);
    }
    v69 = (struct tagSIZE *)*((_QWORD *)this + 61);
    v82.cy = v66;
    v70 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v69 + 80LL);
    if ( v70 == CVisual::SetSize )
      v71 = CVisual::SetSize(v69, &v82);
    else
      v71 = v70(v69, &v82);
    v29 = v71;
    if ( v71 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v71, 0xC50u);
    else
      v81.cx += *(_DWORD *)(*((_QWORD *)this + 61) + 120LL);
  }
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xBEAu);
    return (unsigned int)v29;
  }
  v31 = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 0, SystemMetrics, v26, &v81);
  if ( (v31 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xBEBu);
    return v31;
  }
  if ( *((_QWORD *)this + 65) )
  {
    v40 = *((_QWORD *)this + 90);
    if ( *(_QWORD *)(v40 + 136) || (*((_DWORD *)this + 146) & 0x10000) == 0 )
    {
      if ( *(_DWORD *)(v40 + 348) )
        v41 = *(_DWORD *)(v40 + 328);
      else
        v41 = GetDpiForSystem();
      v42 = GetSystemMetricsForDpi(49LL, v41);
      v43 = *((_QWORD *)this + 90);
      v44 = v42;
      if ( *(_DWORD *)(v43 + 348) )
        v45 = *(_DWORD *)(v43 + 328);
      else
        v45 = GetDpiForSystem();
      v20 = GetSystemMetricsForDpi(50LL, v45);
    }
    else
    {
      v44 = 0;
    }
    v46 = (struct tagSIZE *)*((_QWORD *)this + 65);
    v82.cx = v44;
    v82.cy = v20;
    v47 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v46 + 80LL);
    if ( v47 == CVisual::SetSize )
      v48 = CVisual::SetSize(v46, &v82);
    else
      v48 = v47(v46, &v82);
    v31 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xBFCu);
      return v31;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 65),
      DWORD2(v15) + (*((_DWORD *)this + 149) - *(_DWORD *)(*((_QWORD *)this + 65) + 124LL) - DWORD2(v15)) / 2);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v19);
    v49 = *(_DWORD *)(*((_QWORD *)this + 65) + 120LL);
    if ( v49 > 0 )
      v19 += v49 + 5;
  }
  v32 = (CVisual *)*((_QWORD *)this + 64);
  if ( v32 )
  {
    CVisual::SetInsetFromParentTop(v32, SDWORD2(v15));
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 64), v19);
    v36 = (CVisual *)*((_QWORD *)this + 64);
    if ( *((_DWORD *)v36 + 33) != v81.cx )
    {
      *((_DWORD *)v36 + 33) = v81.cx;
      v76 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v36 + 24LL);
      if ( v76 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v36, 2);
      else
        v76(v36, 2);
    }
    v37 = (LONG *)*((_QWORD *)this + 64);
    v81.cx = v37[30];
    v81.cy = *((_DWORD *)this + 149) - DWORD2(v15);
    v38 = *(__int64 (__fastcall **)(CText *, const struct tagSIZE *))(*(_QWORD *)v37 + 80LL);
    v39 = v38 == CText::SetSize ? CText::SetSize((CText *)v37, &v81) : v38((CText *)v37, &v81);
    v31 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xC10u);
      return v31;
    }
  }
  v33 = CTopLevelWindow::UpdatePinnedParts(this);
  v34 = v33;
  if ( v33 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC13u);
  return v34;
}
