/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CF68
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180013F00 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800193BC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x1800193F0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019510 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001C5C0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18001CD84 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
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
  int v11; // r8d
  char v12; // dl
  int v13; // r14d
  int v14; // eax
  __int64 v15; // r9
  LONG v16; // ecx
  int v17; // edi
  LONG v18; // eax
  int v19; // r14d
  __int64 v20; // rdx
  int v21; // eax
  LONG SystemMetricsForDpi; // esi
  LONG v23; // eax
  int v24; // r15d
  int updated; // eax
  unsigned int v26; // edi
  CVisual *v27; // rcx
  CVisual *v28; // rcx
  LONG *v29; // rcx
  __int64 (__fastcall *v30)(CText *, const struct tagSIZE *); // rax
  int v31; // eax
  __int64 v33; // rax
  LONG v34; // edi
  LONG v35; // eax
  struct tagSIZE *v36; // rcx
  __int64 (__fastcall *v37)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v38; // eax
  int v39; // ecx
  void (__fastcall *v40)(CVisual *, int); // rax
  void (__fastcall *v41)(CVisual *, int); // rax
  void (__fastcall *v42)(CVisual *, int); // rax
  void (__fastcall *v43)(CVisual *, int); // rax
  void (__fastcall *v44)(CVisual *, int); // rax
  int v45; // eax
  int v46; // r9d
  unsigned int v47; // [rsp+20h] [rbp-20h]
  int v48[4]; // [rsp+30h] [rbp-10h]
  struct tagSIZE v49; // [rsp+80h] [rbp+40h] BYREF
  struct tagSIZE v50; // [rsp+88h] [rbp+48h] BYREF

  if ( *((_QWORD *)this + 59) )
  {
    v2 = *((_DWORD *)this + 147);
    v3 = (CVisual *)*((_QWORD *)this + 67);
    if ( *((_DWORD *)v3 + 32) != v2 )
    {
      *((_DWORD *)v3 + 32) = v2;
      v42 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
      if ( v42 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 2);
      else
        v42(v3, 2);
    }
    v4 = (CVisual *)*((_QWORD *)this + 67);
    v5 = *((_DWORD *)this + 149);
    if ( *((_DWORD *)v4 + 34) != v5 )
    {
      *((_DWORD *)v4 + 34) = v5;
      v40 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v4 + 24LL);
      if ( v40 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v4, 2);
      else
        v40(v4, 2);
    }
    v6 = (CVisual *)*((_QWORD *)this + 67);
    v7 = *((_DWORD *)this + 148);
    if ( *((_DWORD *)v6 + 33) != v7 )
    {
      *((_DWORD *)v6 + 33) = v7;
      v43 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v43 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 2);
      else
        v43(v6, 2);
    }
    v8 = (CVisual *)*((_QWORD *)this + 67);
    v9 = *((_DWORD *)this + 150);
    if ( *((_DWORD *)v8 + 35) != v9 )
    {
      *((_DWORD *)v8 + 35) = v9;
      v41 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v8 + 24LL);
      if ( v41 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v8, 2);
      else
        v41(v8, 2);
    }
    v10 = (struct _MARGINS *)*((_QWORD *)this + 36);
    if ( v10 )
      CVisual::SetInsetFromParent(v10, (const struct _MARGINS *)(*((_QWORD *)this + 67) + 128LL));
  }
  v11 = *((_DWORD *)this + 148);
  if ( v11 <= 0 )
    v11 = *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
  v12 = *((_BYTE *)this + 240) & 8;
  v13 = *((_DWORD *)this + 147);
  v14 = v11 + 1;
  v15 = *(_QWORD *)((char *)this + (v12 != 0 ? 0x10 : 0) + 620);
  v16 = HIDWORD(v15) + 1;
  v17 = *((_DWORD *)this + 146) & 2;
  *(_OWORD *)v48 = *(_OWORD *)((char *)this + (v12 != 0 ? 0x10 : 0) + 620);
  if ( !v17 )
    v14 = v11;
  v18 = v14 - 1;
  if ( v18 > v16 )
    v16 = v18;
  v49.cx = v16;
  if ( v12 )
    v19 = v13 + 2;
  else
    v19 = 2 * v13 - v15;
  v20 = *(unsigned int *)(*((_QWORD *)this + 90) + 332LL);
  if ( v17 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(53LL, v20);
  }
  else
  {
    v21 = GetSystemMetricsForDpi(31LL, v20);
    SystemMetricsForDpi = *((_DWORD *)this + 153) - v48[2];
    v23 = *(_DWORD *)(*((_QWORD *)this + 90) + 96LL) + v21;
    if ( v23 < SystemMetricsForDpi )
      SystemMetricsForDpi = v23;
    if ( SystemMetricsForDpi < 0 )
      SystemMetricsForDpi = 0;
  }
  v24 = v48[2];
  if ( v17 )
  {
    if ( *((_DWORD *)this + 149) - SystemMetricsForDpi - 2 > v48[2] )
      v24 = *((_DWORD *)this + 149) - SystemMetricsForDpi - 2;
  }
  else if ( (*((_BYTE *)this + 240) & 8) != 0 && *((_DWORD *)this + 161) > *((_DWORD *)this + 157) )
  {
    v45 = SystemMetricsForDpi - 1;
    SystemMetricsForDpi = 0;
    if ( v45 >= 0 )
      SystemMetricsForDpi = v45;
  }
  else
  {
    v24 = v48[2] + 1;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 3, SystemMetricsForDpi, v24, &v49);
  v26 = updated;
  if ( updated < 0 )
  {
    v47 = 3040;
LABEL_79:
    v46 = updated;
    goto LABEL_80;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 2, SystemMetricsForDpi, v24, &v49);
  v26 = updated;
  if ( updated < 0 )
  {
    v47 = 3041;
    goto LABEL_79;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 1, SystemMetricsForDpi, v24, &v49);
  v26 = updated;
  if ( updated < 0 )
  {
    v47 = 3042;
    goto LABEL_79;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 0, SystemMetricsForDpi, v24, &v49);
  v26 = updated;
  if ( updated < 0 )
  {
    v47 = 3043;
    goto LABEL_79;
  }
  if ( *((_QWORD *)this + 65) )
  {
    v33 = *((_QWORD *)this + 90);
    if ( *(_QWORD *)(v33 + 136) || (*((_DWORD *)this + 146) & 0x10000) == 0 )
    {
      v34 = GetSystemMetricsForDpi(49LL, *(unsigned int *)(v33 + 332));
      v35 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 332LL));
    }
    else
    {
      v35 = 0;
      v34 = 0;
    }
    v36 = (struct tagSIZE *)*((_QWORD *)this + 65);
    v50.cy = v35;
    v50.cx = v34;
    v37 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v36 + 80LL);
    if ( v37 == CVisual::SetSize )
      v38 = CVisual::SetSize(v36, &v50);
    else
      v38 = v37(v36, &v50);
    v26 = v38;
    if ( v38 < 0 )
    {
      v47 = 3060;
LABEL_75:
      v46 = v26;
LABEL_80:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v47);
      return v26;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 65),
      (*((_DWORD *)this + 149) - *(_DWORD *)(*((_QWORD *)this + 65) + 124LL) - v48[2]) / 2 + v48[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v19);
    v39 = *(_DWORD *)(*((_QWORD *)this + 65) + 120LL);
    if ( v39 > 0 )
      v19 += v39 + 5;
  }
  v27 = (CVisual *)*((_QWORD *)this + 64);
  if ( v27 )
  {
    CVisual::SetInsetFromParentTop(v27, v48[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 64), v19);
    v28 = (CVisual *)*((_QWORD *)this + 64);
    if ( *((_DWORD *)v28 + 33) != v49.cx )
    {
      *((_DWORD *)v28 + 33) = v49.cx;
      v44 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v28 + 24LL);
      if ( v44 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v28, 2);
      else
        v44(v28, 2);
    }
    v29 = (LONG *)*((_QWORD *)this + 64);
    v49.cx = v29[30];
    v49.cy = *((_DWORD *)this + 149) - v48[2];
    v30 = *(__int64 (__fastcall **)(CText *, const struct tagSIZE *))(*(_QWORD *)v29 + 80LL);
    v31 = v30 == CText::SetSize ? CText::SetSize((CText *)v29, &v49) : v30((CText *)v29, &v49);
    v26 = v31;
    if ( v31 < 0 )
    {
      v47 = 3080;
      goto LABEL_75;
    }
  }
  updated = CTopLevelWindow::UpdatePinnedParts(this);
  v26 = updated;
  if ( updated < 0 )
  {
    v47 = 3083;
    goto LABEL_79;
  }
  return v26;
}
