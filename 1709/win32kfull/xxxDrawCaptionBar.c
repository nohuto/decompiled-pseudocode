/*
 * XREFs of xxxDrawCaptionBar @ 0x1C007B6D0
 * Callers:
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C007B494 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     xxxMNCanClose @ 0x1C007BA94 (xxxMNCanClose.c)
 *     GetWindowBorders @ 0x1C007BB30 (GetWindowBorders.c)
 *     GetResizeBorderWidthForDpi @ 0x1C007BB64 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C007BB8C (GetWindowFrameMetricForDpi.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     DrawEdge @ 0x1C007EBC4 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     IS_UI_LANGID @ 0x1C0082C8C (IS_UI_LANGID.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 *     DrawFrame @ 0x1C0139C54 (DrawFrame.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(__int64 a1, HDC a2, int a3)
{
  unsigned int v3; // r14d
  __int16 v4; // r13
  int WindowFrameMetricForDpi; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r12d
  int v15; // edi
  int v16; // r13d
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // r13d
  unsigned int v20; // eax
  int DpiDependentMetric; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r12d
  unsigned int v25; // eax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // eax
  HDC v31; // rbx
  _BOOL8 v32; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v34; // eax
  int v35; // ebx
  int v36; // ebx
  unsigned int v37; // eax
  int v38; // r13d
  int v39; // edi
  unsigned int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edi
  bool v45; // cl
  int v46; // edi
  unsigned int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // edi
  unsigned int v52; // r8d
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // edi
  int v57; // edi
  __int64 v58; // rdx
  __int64 v59; // rax
  _DWORD *v60; // rcx
  int v61; // r12d
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  _DWORD *v66; // r12
  LONG v67; // edi
  LONG v68; // edi
  int v69; // edx
  BOOL v70; // eax
  int v71; // r9d
  int v72; // ecx
  bool v75; // [rsp+68h] [rbp-51h]
  unsigned int v76; // [rsp+6Ch] [rbp-4Dh]
  int v77; // [rsp+6Ch] [rbp-4Dh]
  int v78; // [rsp+70h] [rbp-49h]
  int v79; // [rsp+70h] [rbp-49h]
  int v80; // [rsp+74h] [rbp-45h]
  int v81; // [rsp+74h] [rbp-45h]
  int v82; // [rsp+78h] [rbp-41h]
  __int64 v83; // [rsp+80h] [rbp-39h]
  int v84; // [rsp+80h] [rbp-39h]
  int v85; // [rsp+88h] [rbp-31h]
  __int64 v87; // [rsp+90h] [rbp-29h]
  int v88; // [rsp+98h] [rbp-21h] BYREF
  int v89; // [rsp+9Ch] [rbp-1Dh]
  int v90; // [rsp+A0h] [rbp-19h]
  int v91; // [rsp+A4h] [rbp-15h]
  __int64 v92; // [rsp+A8h] [rbp-11h]
  int v93; // [rsp+B0h] [rbp-9h]
  int v94; // [rsp+B4h] [rbp-5h]
  int v95; // [rsp+B8h] [rbp-1h]
  int v96; // [rsp+BCh] [rbp+3h]
  __int64 v97; // [rsp+C0h] [rbp+7h]
  int v98; // [rsp+C8h] [rbp+Fh] BYREF
  int v99; // [rsp+CCh] [rbp+13h]
  int v100; // [rsp+D0h] [rbp+17h]
  int v101; // [rsp+D4h] [rbp+1Bh]

  v3 = 0;
  v4 = a3;
  v80 = 0;
  v87 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetricForDpi = IsVisible(a1);
    if ( !WindowFrameMetricForDpi )
      return WindowFrameMetricForDpi;
  }
  ClearHungFlag((struct tagWND *)a1, 784);
  GetRect(a1, &v98, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    v85 = v4 & 1;
    if ( (v4 & 1) != 0 )
      v8 = *(_QWORD *)(gpsi + 4896LL);
    else
      v8 = *(_QWORD *)(gpsi + 4904LL);
    v82 = 32;
    goto LABEL_8;
  }
  v82 = 0;
  v85 = v4 & 1;
  if ( (v4 & 1) == 0 )
  {
    v8 = *(_QWORD *)(gpsi + 4704LL);
LABEL_8:
    v83 = v8;
    goto LABEL_9;
  }
  v83 = *(_QWORD *)(gpsi + 4696LL);
LABEL_9:
  v9 = xxxMNCanClose(a1);
  v11 = 16LL;
  if ( !v9 )
    v3 = 16;
  LOBYTE(v11) = *(_BYTE *)(a1 + 70);
  if ( (v11 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 1) != 0 )
      v3 |= 2u;
  }
  else
  {
    v3 |= 8u;
  }
  if ( (v11 & 2) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
      goto LABEL_16;
    v3 |= 1u;
  }
  else
  {
    v3 |= 4u;
  }
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
  {
    if ( v4 < 0 )
    {
      DrawEdge(a2);
      DrawFrame(a2);
      ++v98;
      v15 = v100 - 1;
      v16 = v99 + 1;
    }
    else
    {
      v98 += 3;
      v15 = v100 - 3;
      v16 = v99 + 3;
    }
    v99 = v16;
    v100 = v15;
    DpiForSystem = GetDpiForSystem(v11, v10);
    v78 = GetDpiDependentMetric(13LL, DpiForSystem) + v16;
    v101 = v78;
    v87 = GreSelectBrush(a2, v83);
    goto LABEL_44;
  }
LABEL_16:
  if ( (*(_BYTE *)(a1 + 65) & 3) == 0 || (v76 = 15, (*(_BYTE *)(a1 + 60) & 8) != 0) )
    v76 = 6;
  if ( v4 < 0 )
  {
    v17 = GetDpiForSystem(v11, v10);
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v18, v17);
    v19 = WindowFrameMetricForDpi;
    if ( (*(_BYTE *)(a1 + 65) & 1) != 0 || (*(_BYTE *)(a1 + 66) & 2) != 0 )
      LOBYTE(WindowFrameMetricForDpi) = DrawEdge(a2);
    if ( (*(_BYTE *)(a1 + 70) & 4) == 0
      && (v19 <= 0
       || (v12 = *(unsigned int *)(a1 + 68),
           v13 = 12582912LL,
           LOBYTE(v13) = (*(_DWORD *)(a1 + 68) & 0xC00000) != 12582912,
           LOBYTE(WindowFrameMetricForDpi) = (v12 & 0x40000) == 0,
           ((unsigned __int8)v13 & (unsigned __int8)WindowFrameMetricForDpi) != 0)
       || (WindowFrameMetricForDpi = GetAppCompatFlags2(39168LL), (WindowFrameMetricForDpi & 0x30000000) != 0)) )
    {
      v15 = v100;
      v16 = v99;
      v14 = v98;
    }
    else
    {
      v34 = GetDpiForSystem(v13, v12);
      v35 = GetResizeBorderWidthForDpi(v34) + v19;
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      v36 = -v35;
      v14 = v98 - v36;
      v15 = v36 + v100;
      v16 = v99 - v36;
      v98 -= v36;
      v101 += v36;
      v100 += v36;
      v99 -= v36;
    }
    if ( (*(_BYTE *)(a1 + 70) & 0xC0) == 0 && (*(_BYTE *)(a1 + 64) & 1) == 0 )
      goto LABEL_21;
    LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
    v14 = v98 + 1;
    v15 = v100 - 1;
    v16 = v99 + 1;
  }
  else
  {
    WindowFrameMetricForDpi = -(int)GetWindowBorders(*(unsigned int *)(a1 + 68), *(unsigned int *)(a1 + 64));
    v14 = v98 - WindowFrameMetricForDpi;
    v15 = WindowFrameMetricForDpi + v100;
    v16 = v99 - WindowFrameMetricForDpi;
  }
  v99 = v16;
  v100 = v15;
  v98 = v14;
LABEL_21:
  if ( (*(_BYTE *)(a1 + 56) & 8) == 0 )
    return WindowFrameMetricForDpi;
  if ( *(char *)(a1 + 64) < 0 )
  {
    v3 |= 0x20u;
    v37 = GetDpiForSystem(v13, v12);
    DpiDependentMetric = GetDpiDependentMetric(24LL, v37);
    v80 = 41;
  }
  else
  {
    v20 = GetDpiForSystem(v13, v12);
    DpiDependentMetric = GetDpiDependentMetric(13LL, v20);
  }
  v101 = DpiDependentMetric + v16;
  v78 = DpiDependentMetric + v16;
  v90 = v15 - v14;
  v88 = v14;
  v89 = DpiDependentMetric + v16;
  v91 = 1;
  v92 = *(_QWORD *)(gpsi + 8LL * v76 + 4680);
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v88, 1u);
  GreSelectBrush(a2, v83);
LABEL_44:
  if ( (*(_BYTE *)(a1 + 70) & 8) == 0 && (*(_BYTE *)(a1 + 61) & 2) != 0 )
  {
LABEL_51:
    v31 = a2;
    goto LABEL_52;
  }
  v24 = 1;
  v25 = GetDpiForSystem(v23, v22);
  v26 = GetDpiDependentMetric(12LL, v25);
  v29 = GetDpiForSystem(v28, v27);
  v30 = GetDpiDependentMetric(23LL, v29);
  v84 = v30;
  if ( (a3 & 0x1000) == 0 )
  {
    if ( !v3 || (v3 & 0xC) != 12 && (v3 & 0x20) == 0 )
    {
      v24 = 3;
    }
    else
    {
      v15 -= 2;
      if ( v3 == 12 && (*(_BYTE *)(a1 + 65) & 4) != 0 )
        v24 = 2;
    }
    if ( (v3 & 0x20) != 0 )
      v26 = v30;
    v100 = v15 - v24 * v26;
    goto LABEL_51;
  }
  if ( v3 && v3 != 12 )
  {
    v38 = v16 + 2;
    v79 = v78 - 2;
    v39 = v15 - 2;
    v77 = v79 - v38;
    NtGdiPatBlt(a2, v39, v38, 2, v79 - v38, 15728673);
    v40 = v80 + 3;
    if ( (v3 & 0x10) == 0 )
      v40 = v80;
    if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
      || (v41 = *(_QWORD *)(a1 + 16), (v42 = *(_QWORD *)(v41 + 432)) == 0)
      || (*(_DWORD *)(**(_QWORD **)(v42 + 8) + 52LL) & 1) == 0
      || *(_WORD *)(*(_QWORD *)(v41 + 400) + 284LL) == 96 )
    {
      v43 = gpsi + 7004LL;
    }
    else
    {
      v43 = gpsi + 8492LL;
    }
    v44 = v39 - *(_DWORD *)(v43 + 16LL * v40);
    v100 = v44;
    BitBltSysBmp(a2, v44, v38);
    v45 = (v3 & 0x20) == 0;
    v75 = v45;
    if ( (v3 & 0xC) != 12 && v45 )
    {
      v46 = v44 - 2;
      NtGdiPatBlt(a2, v46, v38, 2, v77, 15728673);
      if ( (v3 & 2) != 0 )
        v47 = 8;
      else
        v47 = (v3 & 8) != 0 ? 17 : 14;
      if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
        || (v48 = *(_QWORD *)(a1 + 16), (v49 = *(_QWORD *)(v48 + 432)) == 0)
        || (*(_DWORD *)(**(_QWORD **)(v49 + 8) + 52LL) & 1) == 0
        || *(_WORD *)(*(_QWORD *)(v48 + 400) + 284LL) == 96 )
      {
        v50 = gpsi + 7004LL;
      }
      else
      {
        v50 = gpsi + 8492LL;
      }
      v51 = v46 - *(_DWORD *)(v50 + 16LL * v47);
      BitBltSysBmp(a2, v51, v38);
      if ( (v3 & 1) != 0 )
        v52 = 8;
      else
        v52 = (v3 & 4) != 0 ? 7 : 4;
      if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
        || (v53 = *(_QWORD *)(a1 + 16), (v54 = *(_QWORD *)(v53 + 432)) == 0)
        || (*(_DWORD *)(**(_QWORD **)(v54 + 8) + 52LL) & 1) == 0
        || *(_WORD *)(*(_QWORD *)(v53 + 400) + 284LL) == 96 )
      {
        v55 = gpsi + 7004LL;
      }
      else
      {
        v55 = gpsi + 8492LL;
      }
      v56 = v51 - *(_DWORD *)(v55 + 16LL * v52);
      BitBltSysBmp(a2, v56, v38);
      v44 = v56 - 2;
      v100 = v44;
      NtGdiPatBlt(a2, v44, v38, 2, v77, 15728673);
      v45 = v75;
      v24 = 3;
    }
    if ( (v3 & 0x1C) != 0 && v45 && (*(_BYTE *)(a1 + 65) & 4) != 0 )
    {
      v57 = v44 - 2;
      NtGdiPatBlt(a2, v57, v38, 2, v77, 15728673);
      if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
        || (v58 = *(_QWORD *)(a1 + 16), (v59 = *(_QWORD *)(v58 + 432)) == 0)
        || (*(_DWORD *)(**(_QWORD **)(v59 + 8) + 52LL) & 1) == 0
        || *(_WORD *)(*(_QWORD *)(v58 + 400) + 284LL) == 96 )
      {
        v60 = (_DWORD *)(gpsi + 7180LL);
      }
      else
      {
        v60 = (_DWORD *)(gpsi + 8668LL);
      }
      v44 = v57 - *v60;
      v100 = v44;
      BitBltSysBmp(a2, v44, v38);
      ++v24;
    }
    v88 = v44;
    v91 = 2;
    v96 = 2;
    v101 = v79 + 2;
    v99 = v38 - 2;
    v89 = v38 - 2;
    if ( (v3 & 0x20) != 0 )
      v26 = v84;
    v92 = 0LL;
    v97 = 0LL;
    v61 = v26 * v24;
    v31 = a2;
    v93 = v44;
    v94 = v79;
    v90 = v61;
    v95 = v61;
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v88, 2u);
    if ( v87 )
      GreSelectBrush(a2, v87);
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
    || (v62 = *(_QWORD *)(a1 + 16), (v63 = *(_QWORD *)(v62 + 432)) == 0)
    || (*(_DWORD *)(**(_QWORD **)(v63 + 8) + 52LL) & 1) == 0
    || *(_WORD *)(*(_QWORD *)(v62 + 400) + 284LL) == 96 )
  {
    v64 = gpsi + 7620LL;
  }
  else
  {
    v64 = gpsi + 9108LL;
  }
  v65 = v26 + 2;
  if ( !v3 )
    v65 = 3 * v26;
  v66 = (_DWORD *)(v64 + 16);
  v81 = v65;
  if ( v85 )
    v66 = (_DWORD *)v64;
  v67 = v15 - v65;
  v100 = v67;
  FixHDCBITSBmpEx(0LL);
  NtGdiBitBltInternal(
    a2,
    v67,
    v16,
    v81,
    v66[3],
    *(HDC *)(gpDispInfo + 56LL),
    v66[2] + *v66 - v81 - v26,
    v66[1],
    13369376,
    0,
    0);
  if ( !v3 || (*(_BYTE *)(a1 + 65) & 4) == 0 )
    goto LABEL_51;
  v68 = 2 - v26 + v67;
  v69 = v66[2] + *v66 - v26;
  v100 = v68;
  NtGdiBitBltInternal(a2, v68, v16, v26, v66[3], *(HDC *)(gpDispInfo + 56LL), v69, v66[1], 13369376, 0, 0);
  v70 = (unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 9988LL) == 1037;
  if ( !v70 || (*(_BYTE *)(a1 + 66) & 0x40) == 0 )
    goto LABEL_51;
  v71 = v26 - 4;
  v72 = *v66 - v26 + 2;
  v31 = a2;
  NtGdiBitBltInternal(
    a2,
    v68 - 2,
    v16 + 2,
    v71,
    v66[3] - 4,
    *(HDC *)(gpDispInfo + 56LL),
    v72 + v66[2],
    v66[1] + 2,
    -2134114272,
    0,
    0);
LABEL_52:
  LOBYTE(WindowFrameMetricForDpi) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v32 = (unsigned int)xxxDrawCaptionTemp(a1, v31, &v98, 0LL, 0LL, 0LL, a3 | v82 | (v3 >> 4) & 2) == 0;
    LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v32, a1, 1800LL, 1LL);
  }
  return WindowFrameMetricForDpi;
}
