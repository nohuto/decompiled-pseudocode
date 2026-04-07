/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CDB0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180014290 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001C400 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18001CC20 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002592C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180025960 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  CVisual *v10; // rcx
  int v11; // r9d
  __int64 v12; // r8
  char v13; // si
  int v14; // r15d
  bool v15; // dl
  LONG v16; // eax
  __int64 v17; // r10
  int v18; // r15d
  __int64 v19; // rdx
  LONG v20; // r12d
  LONG SystemMetricsForDpi; // r14d
  int v22; // ecx
  int v23; // edi
  int updated; // eax
  unsigned int v25; // esi
  int v26; // esi
  float v27; // xmm6_4
  CVisual *v28; // rcx
  LONG cx; // esi
  CVisual *v30; // rcx
  CVisual *v31; // rcx
  int v32; // eax
  unsigned int v33; // ebx
  __int64 v35; // rcx
  int v36; // eax
  LONG v37; // eax
  LONG v38; // esi
  CVisual *v39; // rcx
  CVisual *v40; // rcx
  CVisual *v41; // rcx
  __int64 (__fastcall *v42)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  LONG v46; // eax
  LONG v47; // esi
  CVisual *v48; // rcx
  CVisual *v49; // rcx
  CVisual *v50; // rcx
  __int64 (__fastcall *v51)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v52; // eax
  __int64 v53; // rax
  LONG v54; // edi
  LONG v55; // eax
  __int64 v56; // rax
  __int64 (__fastcall *v57)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v58; // eax
  unsigned int v59; // edi
  int v60; // ecx
  CVisual *v61; // rcx
  LONG *v62; // rcx
  __int64 (__fastcall *v63)(CText *, const struct tagSIZE *); // rax
  int v64; // eax
  void (__fastcall *v65)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v66)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v67)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v68)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v69)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v70)(CVisual *__hidden, unsigned int); // rax
  __int64 v71; // rax
  void (__fastcall *v72)(CVisual *__hidden, unsigned int); // rax
  int v73; // eax
  CVisual *v74; // rcx
  __int64 v75; // rax
  void (__fastcall *v76)(CVisual *__hidden, unsigned int); // rax
  int v77[4]; // [rsp+30h] [rbp-30h]
  struct tagSIZE v78; // [rsp+A0h] [rbp+40h] BYREF
  struct tagSIZE v79; // [rsp+A8h] [rbp+48h] BYREF

  if ( *((_QWORD *)this + 59) )
  {
    v2 = *((_DWORD *)this + 147);
    v3 = (CVisual *)*((_QWORD *)this + 67);
    if ( *((_DWORD *)v3 + 32) != v2 )
    {
      *((_DWORD *)v3 + 32) = v2;
      v67 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v3 + 24LL);
      if ( v67 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 2u);
      else
        v67(v3, 2u);
    }
    v4 = (CVisual *)*((_QWORD *)this + 67);
    v5 = *((_DWORD *)this + 149);
    if ( *((_DWORD *)v4 + 34) != v5 )
    {
      *((_DWORD *)v4 + 34) = v5;
      v65 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v4 + 24LL);
      if ( v65 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v4, 2u);
      else
        v65(v4, 2u);
    }
    v6 = (CVisual *)*((_QWORD *)this + 67);
    v7 = *((_DWORD *)this + 148);
    if ( *((_DWORD *)v6 + 33) != v7 )
    {
      *((_DWORD *)v6 + 33) = v7;
      v68 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v6 + 24LL);
      if ( v68 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 2u);
      else
        v68(v6, 2u);
    }
    v8 = (CVisual *)*((_QWORD *)this + 67);
    v9 = *((_DWORD *)this + 150);
    if ( *((_DWORD *)v8 + 35) != v9 )
    {
      *((_DWORD *)v8 + 35) = v9;
      v66 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v8 + 24LL);
      if ( v66 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v8, 2u);
      else
        v66(v8, 2u);
    }
    v10 = (CVisual *)*((_QWORD *)this + 36);
    if ( v10 )
      CVisual::SetInsetFromParent(v10, (const struct _MARGINS *)(*((_QWORD *)this + 67) + 128LL));
  }
  v11 = *((_DWORD *)this + 148);
  v12 = *((_QWORD *)this + 90);
  if ( v11 <= 0 )
    v11 = *(_DWORD *)(v12 + 96);
  if ( (*((_BYTE *)this + 584) & 2) != 0 )
  {
    v13 = 1;
    ++v11;
  }
  else
  {
    v13 = 0;
  }
  v14 = *((_DWORD *)this + 147);
  v15 = (*((_BYTE *)this + 240) & 8) != 0;
  v16 = v11 - 1;
  v17 = *(_QWORD *)((char *)this + 16 * v15 + 620);
  *(_OWORD *)v77 = *(_OWORD *)((char *)this + 16 * v15 + 620);
  if ( v11 - 1 <= HIDWORD(v17) + 1 )
    v16 = HIDWORD(*(_QWORD *)((char *)this + 16 * ((*((_BYTE *)this + 240) & 8) != 0) + 620)) + 1;
  v78.cx = v16;
  if ( v15 )
    v18 = v14 + 2;
  else
    v18 = 2 * v14 - v17;
  v19 = *(unsigned int *)(v12 + 324);
  v20 = 0;
  if ( v13 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(53LL, v19);
  }
  else
  {
    SystemMetricsForDpi = 0;
    v22 = GetSystemMetricsForDpi(31LL, v19) + *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
    if ( v22 >= *((_DWORD *)this + 153) - v77[2] )
      v22 = *((_DWORD *)this + 153) - v77[2];
    if ( v22 >= 0 )
      SystemMetricsForDpi = v22;
  }
  v23 = v77[2];
  if ( v13 )
  {
    v23 = *((_DWORD *)this + 149) - SystemMetricsForDpi - 2;
    if ( v23 <= v77[2] )
      v23 = v77[2];
  }
  else if ( (*((_BYTE *)this + 240) & 8) != 0 && *((_DWORD *)this + 161) > *((_DWORD *)this + 157) )
  {
    v73 = SystemMetricsForDpi - 1;
    SystemMetricsForDpi = 0;
    if ( v73 >= 0 )
      SystemMetricsForDpi = v73;
  }
  else
  {
    v23 = v77[2] + 1;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 3, SystemMetricsForDpi, v23, &v78);
  v25 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC1Du);
    return v25;
  }
  v26 = 0;
  v27 = FLOAT_2_1818182;
  if ( *((_QWORD *)this + 62) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v26) = 1;
    if ( (_BYTE)v26 )
      v35 = 53LL;
    else
      v35 = 31LL;
    v36 = GetSystemMetricsForDpi(v35, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v37 = (int)floor_0((float)((float)v36 * 0.95454544) + 0.5);
    if ( (_BYTE)v26 )
    {
      v38 = v37;
    }
    else
    {
      v37 = (int)floor_0((float)((float)v37 * 2.1818182) + 0.5);
      v38 = SystemMetricsForDpi;
    }
    v39 = (CVisual *)*((_QWORD *)this + 62);
    v79.cx = v37;
    CVisual::SetInsetFromParentTop(v39, v23);
    v40 = (CVisual *)*((_QWORD *)this + 62);
    if ( *((_DWORD *)v40 + 33) != v78.cx )
    {
      *((_DWORD *)v40 + 33) = v78.cx;
      v69 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v40 + 24LL);
      if ( v69 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v40, 2u);
      else
        v69(v40, 2u);
    }
    v41 = (CVisual *)*((_QWORD *)this + 62);
    v79.cy = v38;
    v42 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)v41 + 80LL);
    if ( v42 == CVisual::SetSize )
      v43 = CVisual::SetSize(v41, &v79);
    else
      v43 = v42(v41, &v79);
    v26 = v43;
    if ( v43 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0xC8Cu);
    else
      v78.cx += *(_DWORD *)(*((_QWORD *)this + 62) + 120LL);
  }
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC1Eu);
    return (unsigned int)v26;
  }
  v26 = 0;
  if ( *((_QWORD *)this + 61) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v26) = 1;
    if ( (_BYTE)v26 )
      v44 = 53LL;
    else
      v44 = 31LL;
    v45 = GetSystemMetricsForDpi(v44, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v46 = (int)floor_0((float)((float)v45 * 0.95454544) + 0.5);
    if ( (_BYTE)v26 )
    {
      v47 = v46;
    }
    else
    {
      if ( !*((_QWORD *)this + 60) )
        v27 = FLOAT_2_2272727;
      v46 = (int)floor_0((float)((float)v46 * v27) + 0.5);
      v47 = SystemMetricsForDpi;
    }
    v48 = (CVisual *)*((_QWORD *)this + 61);
    v79.cx = v46;
    CVisual::SetInsetFromParentTop(v48, v23);
    v49 = (CVisual *)*((_QWORD *)this + 61);
    if ( *((_DWORD *)v49 + 33) != v78.cx )
    {
      *((_DWORD *)v49 + 33) = v78.cx;
      v70 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v49 + 24LL);
      if ( v70 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v49, 2u);
      else
        v70(v49, 2u);
    }
    v50 = (CVisual *)*((_QWORD *)this + 61);
    v79.cy = v47;
    v51 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)v50 + 80LL);
    if ( v51 == CVisual::SetSize )
      v52 = CVisual::SetSize(v50, &v79);
    else
      v52 = v51(v50, &v79);
    v26 = v52;
    if ( v52 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xC8Cu);
    else
      v78.cx += *(_DWORD *)(*((_QWORD *)this + 61) + 120LL);
  }
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC1Fu);
    return (unsigned int)v26;
  }
  v26 = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 0, SystemMetricsForDpi, v23, &v78);
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC20u);
    return (unsigned int)v26;
  }
  v28 = (CVisual *)*((_QWORD *)this + 100);
  cx = v78.cx;
  if ( v28 )
  {
    CVisual::SetInsetFromParentTop(v28, v23);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 100), *((_DWORD *)this + 147));
    v74 = (CVisual *)*((_QWORD *)this + 100);
    if ( *((_DWORD *)v74 + 33) != cx )
    {
      v75 = *(_QWORD *)v74;
      *((_DWORD *)v74 + 33) = cx;
      v76 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v75 + 24);
      if ( v76 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v74, 2u);
      else
        v76(v74, 2u);
    }
  }
  v30 = (CVisual *)*((_QWORD *)this + 65);
  if ( v30 )
  {
    v53 = *((_QWORD *)this + 90);
    if ( *(_QWORD *)(v53 + 136) || (*((_DWORD *)this + 146) & 0x10000) == 0 )
    {
      v54 = GetSystemMetricsForDpi(49LL, *(unsigned int *)(v53 + 324));
      v55 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
      v30 = (CVisual *)*((_QWORD *)this + 65);
      v20 = v55;
    }
    else
    {
      v54 = 0;
    }
    v56 = *(_QWORD *)v30;
    v78.cx = v54;
    v78.cy = v20;
    v57 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(v56 + 80);
    if ( v57 == CVisual::SetSize )
      v58 = CVisual::SetSize(v30, &v78);
    else
      v58 = v57(v30, &v78);
    v59 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0xC38u);
      return v59;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 65),
      (*((_DWORD *)this + 149) - *(_DWORD *)(*((_QWORD *)this + 65) + 124LL) - v77[2]) / 2 + v77[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v18);
    v60 = *(_DWORD *)(*((_QWORD *)this + 65) + 120LL);
    if ( v60 > 0 )
      v18 += v60 + 5;
  }
  v31 = (CVisual *)*((_QWORD *)this + 64);
  if ( v31 )
  {
    CVisual::SetInsetFromParentTop(v31, v77[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 64), v18);
    v61 = (CVisual *)*((_QWORD *)this + 64);
    if ( *((_DWORD *)v61 + 33) != cx )
    {
      v71 = *(_QWORD *)v61;
      *((_DWORD *)v61 + 33) = cx;
      v72 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v71 + 24);
      if ( v72 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v61, 2u);
      else
        v72(v61, 2u);
    }
    v62 = (LONG *)*((_QWORD *)this + 64);
    v78.cx = v62[30];
    v78.cy = *((_DWORD *)this + 149) - v77[2];
    v63 = *(__int64 (__fastcall **)(CText *, const struct tagSIZE *))(*(_QWORD *)v62 + 80LL);
    v64 = v63 == CText::SetSize ? CText::SetSize((CText *)v62, &v78) : v63((CText *)v62, &v78);
    v59 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0xC4Cu);
      return v59;
    }
  }
  v32 = CTopLevelWindow::UpdatePinnedParts(this);
  v33 = v32;
  if ( v32 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xC4Fu);
  return v33;
}
