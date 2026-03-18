/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00C22F8
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     xxxMNCanClose @ 0x1C00C26D0 (xxxMNCanClose.c)
 *     GetWindowBorders @ 0x1C00C285C (GetWindowBorders.c)
 *     GetResizeBorderWidth @ 0x1C00C28B8 (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C00C28F0 (GetWindowFrameMetric.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     IS_UI_LANGID @ 0x1C00D65A8 (IS_UI_LANGID.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 *     DrawFrame @ 0x1C0135058 (DrawFrame.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(__int64 a1, HDC a2, int a3)
{
  __int16 v3; // di
  int WindowFrameMetric; // eax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rcx
  int left; // r12d
  int right; // edi
  int top; // r13d
  __int64 v14; // rcx
  int v15; // edi
  unsigned int v16; // r8d
  char v17; // al
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r12d
  int v21; // ebx
  int v22; // r8d
  HDC v23; // rbx
  BOOL v24; // ecx
  int v25; // eax
  int v26; // ebx
  int v27; // ebx
  char CurrentThreadDpiAwarenessContext; // al
  int v29; // r13d
  int v30; // edi
  unsigned int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rcx
  LONG v34; // edi
  bool v35; // cl
  int v36; // edi
  unsigned int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // edi
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edi
  int v45; // edi
  __int64 v46; // rax
  _DWORD *v47; // rax
  int v48; // r12d
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  _DWORD *v52; // r12
  LONG v53; // edi
  LONG v54; // edi
  int v55; // edx
  BOOL v56; // eax
  int v57; // r9d
  int v58; // ecx
  bool v61; // [rsp+68h] [rbp-51h]
  unsigned int v62; // [rsp+6Ch] [rbp-4Dh]
  int v63; // [rsp+6Ch] [rbp-4Dh]
  int v64; // [rsp+70h] [rbp-49h]
  int v65; // [rsp+70h] [rbp-49h]
  __int64 v66; // [rsp+78h] [rbp-41h]
  int v67; // [rsp+78h] [rbp-41h]
  int v68; // [rsp+78h] [rbp-41h]
  int v69; // [rsp+80h] [rbp-39h]
  int v70; // [rsp+84h] [rbp-35h]
  int v72; // [rsp+8Ch] [rbp-2Dh]
  __int64 v73; // [rsp+90h] [rbp-29h]
  int v74; // [rsp+98h] [rbp-21h] BYREF
  int v75; // [rsp+9Ch] [rbp-1Dh]
  int v76; // [rsp+A0h] [rbp-19h]
  int v77; // [rsp+A4h] [rbp-15h]
  __int64 v78; // [rsp+A8h] [rbp-11h]
  LONG v79; // [rsp+B0h] [rbp-9h]
  int v80; // [rsp+B4h] [rbp-5h]
  int v81; // [rsp+B8h] [rbp-1h]
  int v82; // [rsp+BCh] [rbp+3h]
  __int64 v83; // [rsp+C0h] [rbp+7h]
  RECT v84; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = a3;
  v69 = 0;
  v73 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetric = IsVisible(a1);
    if ( !WindowFrameMetric )
      return WindowFrameMetric;
  }
  ClearHungFlag((struct tagWND *)a1, 784);
  GetRect(a1, &v84.left, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    v72 = 1;
    v70 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 5304LL);
    else
      v7 = *(_QWORD *)(gpsi + 5312LL);
    goto LABEL_7;
  }
  v72 = 0;
  v70 = v3 & 1;
  if ( (v3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(gpsi + 5104LL);
LABEL_7:
    v66 = v7;
    goto LABEL_8;
  }
  v66 = *(_QWORD *)(gpsi + 5112LL);
LABEL_8:
  v8 = xxxMNCanClose(a1);
  v9 = 0;
  v10 = 16LL;
  if ( !v8 )
    v9 = 16;
  LOBYTE(v10) = *(_BYTE *)(a1 + 70);
  if ( (v10 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 1) != 0 )
      v9 |= 2u;
  }
  else
  {
    v9 |= 8u;
  }
  if ( (v10 & 2) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
      goto LABEL_15;
    v9 |= 1u;
  }
  else
  {
    v9 |= 4u;
  }
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
  {
    if ( v3 < 0 )
    {
      DrawEdge(a2, &v84, 5u, 8207);
      DrawFrame(a2);
      ++v84.left;
      right = v84.right - 1;
      top = v84.top + 1;
    }
    else
    {
      v84.left += 3;
      right = v84.right - 3;
      top = v84.top + 3;
    }
    v84.top = top;
    v84.right = right;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v25 = *(_DWORD *)(gpsi + 2004LL);
    else
      v25 = *(_DWORD *)(gpsi + 2392LL);
    v64 = v25 + top;
    v84.bottom = v25 + top;
    v73 = GreSelectBrush(a2, v66);
    goto LABEL_45;
  }
LABEL_15:
  if ( (*(_BYTE *)(a1 + 65) & 3) == 0 || (v62 = 15, (*(_BYTE *)(a1 + 60) & 8) != 0) )
    v62 = 6;
  if ( (v3 & 0x8000) == 0 )
  {
    WindowFrameMetric = -(int)GetWindowBorders(*(unsigned int *)(a1 + 68), *(unsigned int *)(a1 + 64));
    left = v84.left - WindowFrameMetric;
    right = WindowFrameMetric + v84.right;
    top = v84.top - WindowFrameMetric;
    goto LABEL_19;
  }
  WindowFrameMetric = GetWindowFrameMetric(v10);
  v15 = WindowFrameMetric;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v16 = 5;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 66) & 2) == 0 )
      goto LABEL_25;
    v16 = 2;
  }
  LOBYTE(WindowFrameMetric) = DrawEdge(a2, &v84, v16, 8207);
LABEL_25:
  if ( (*(_BYTE *)(a1 + 70) & 4) == 0
    && (v15 <= 0
     || (LOBYTE(WindowFrameMetric) = !_bittest((const signed __int32 *)(a1 + 68), 0x12u),
         (((*(_DWORD *)(a1 + 68) & 0xC00000) != 12582912) & (unsigned __int8)WindowFrameMetric) != 0)
     || (WindowFrameMetric = GetAppCompatFlags2(39168LL), (WindowFrameMetric & 0x30000000) != 0)) )
  {
    right = v84.right;
    top = v84.top;
    left = v84.left;
  }
  else
  {
    v26 = v15 + GetResizeBorderWidth(v14);
    LOBYTE(WindowFrameMetric) = DrawFrame(a2);
    v27 = -v26;
    left = v84.left - v27;
    right = v27 + v84.right;
    top = v84.top - v27;
    v84.left -= v27;
    v84.bottom += v27;
    v84.right += v27;
    v84.top -= v27;
  }
  if ( (*(_BYTE *)(a1 + 70) & 0xC0) == 0 && (*(_BYTE *)(a1 + 64) & 1) == 0 )
    goto LABEL_20;
  LOBYTE(WindowFrameMetric) = DrawFrame(a2);
  left = v84.left + 1;
  right = v84.right - 1;
  top = v84.top + 1;
LABEL_19:
  v84.top = top;
  v84.right = right;
  v84.left = left;
LABEL_20:
  if ( (*(_BYTE *)(a1 + 56) & 8) == 0 )
    return WindowFrameMetric;
  if ( *(char *)(a1 + 64) < 0 )
  {
    v9 |= 0x20u;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v18 = gpsi;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
      v19 = *(_DWORD *)(gpsi + 2092LL);
    else
      v19 = *(_DWORD *)(gpsi + 2480LL);
    v69 = 41;
  }
  else
  {
    v17 = W32GetCurrentThreadDpiAwarenessContext();
    v18 = gpsi;
    if ( (v17 & 0xF) != 0 )
      v19 = *(_DWORD *)(gpsi + 2004LL);
    else
      v19 = *(_DWORD *)(gpsi + 2392LL);
  }
  v74 = left;
  v84.bottom = v19 + top;
  v64 = v19 + top;
  v76 = right - left;
  v75 = v19 + top;
  v77 = 1;
  v78 = *(_QWORD *)(v18 + 8LL * v62 + 5088);
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v74, 1u);
  GreSelectBrush(a2, v66);
LABEL_45:
  if ( (*(_BYTE *)(a1 + 70) & 8) == 0 && (*(_BYTE *)(a1 + 61) & 2) != 0 )
  {
LABEL_56:
    v23 = a2;
    goto LABEL_57;
  }
  v20 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v21 = *(_DWORD *)(gpsi + 2000LL);
  else
    v21 = *(_DWORD *)(gpsi + 2388LL);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v22 = *(_DWORD *)(gpsi + 2088LL);
  else
    v22 = *(_DWORD *)(gpsi + 2476LL);
  v67 = v22;
  if ( (a3 & 0x1000) == 0 )
  {
    if ( !v9 || (v9 & 0xC) != 12 && (v9 & 0x20) == 0 )
    {
      v20 = 3;
    }
    else
    {
      right -= 2;
      if ( v9 == 12 && (*(_BYTE *)(a1 + 65) & 4) != 0 )
        v20 = 2;
    }
    if ( (v9 & 0x20) != 0 )
      v21 = v22;
    v84.right = right - v20 * v21;
    goto LABEL_56;
  }
  if ( v9 && v9 != 12 )
  {
    v29 = top + 2;
    v65 = v64 - 2;
    v30 = right - 2;
    v63 = v65 - v29;
    NtGdiPatBlt(a2, v30, v29, 2, v65 - v29, 15728673);
    v31 = v69 + 3;
    if ( (v9 & 0x10) == 0 )
      v31 = v69;
    if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
      || (v32 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v32 + 8) + 52LL) & 1) == 0
      || *(_WORD *)(gpsi + 8678LL) == 96 )
    {
      v33 = gpsi + 5708LL;
    }
    else
    {
      v33 = gpsi + 7196LL;
    }
    v34 = v30 - *(_DWORD *)(v33 + 16LL * v31);
    v84.right = v34;
    BitBltSysBmp(a2);
    v35 = (v9 & 0x20) == 0;
    v61 = v35;
    if ( (v9 & 0xC) != 12 && v35 )
    {
      v36 = v34 - 2;
      NtGdiPatBlt(a2, v36, v29, 2, v63, 15728673);
      if ( (v9 & 2) != 0 )
        v37 = 8;
      else
        v37 = (v9 & 8) != 0 ? 17 : 14;
      if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
        || (v38 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
        || (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 52LL) & 1) == 0
        || *(_WORD *)(gpsi + 8678LL) == 96 )
      {
        v39 = gpsi + 5708LL;
      }
      else
      {
        v39 = gpsi + 7196LL;
      }
      v40 = v36 - *(_DWORD *)(v39 + 16LL * v37);
      BitBltSysBmp(a2);
      if ( (v9 & 1) != 0 )
        v41 = 8;
      else
        v41 = (v9 & 4) != 0 ? 7 : 4;
      if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
        || (v42 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
        || (*(_DWORD *)(**(_QWORD **)(v42 + 8) + 52LL) & 1) == 0
        || *(_WORD *)(gpsi + 8678LL) == 96 )
      {
        v43 = gpsi + 5708LL;
      }
      else
      {
        v43 = gpsi + 7196LL;
      }
      v44 = v40 - *(_DWORD *)(v43 + 16LL * v41);
      BitBltSysBmp(a2);
      v34 = v44 - 2;
      v84.right = v34;
      NtGdiPatBlt(a2, v34, v29, 2, v63, 15728673);
      v35 = v61;
      v20 = 3;
    }
    if ( (v9 & 0x1C) != 0 && v35 && (*(_BYTE *)(a1 + 65) & 4) != 0 )
    {
      v45 = v34 - 2;
      NtGdiPatBlt(a2, v45, v29, 2, v63, 15728673);
      if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
        || (v46 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
        || (*(_DWORD *)(**(_QWORD **)(v46 + 8) + 52LL) & 1) == 0
        || *(_WORD *)(gpsi + 8678LL) == 96 )
      {
        v47 = (_DWORD *)(gpsi + 5884LL);
      }
      else
      {
        v47 = (_DWORD *)(gpsi + 7372LL);
      }
      v34 = v45 - *v47;
      v84.right = v34;
      BitBltSysBmp(a2);
      ++v20;
    }
    v74 = v34;
    v77 = 2;
    v82 = 2;
    v84.bottom = v65 + 2;
    v84.top = v29 - 2;
    v75 = v29 - 2;
    if ( (v9 & 0x20) != 0 )
      v21 = v67;
    v78 = 0LL;
    v83 = 0LL;
    v48 = v21 * v20;
    v23 = a2;
    v79 = v34;
    v80 = v65;
    v76 = v48;
    v81 = v48;
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v74, 2u);
    if ( v73 )
      GreSelectBrush(a2, v73);
    goto LABEL_57;
  }
  if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
    || (v49 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v49 + 8) + 52LL) & 1) == 0
    || *(_WORD *)(gpsi + 8678LL) == 96 )
  {
    v50 = gpsi + 6324LL;
  }
  else
  {
    v50 = gpsi + 7812LL;
  }
  v51 = v21 + 2;
  if ( !v9 )
    v51 = 3 * v21;
  v52 = (_DWORD *)(v50 + 16);
  v68 = v51;
  if ( v70 )
    v52 = (_DWORD *)v50;
  v53 = right - v51;
  v84.right = v53;
  FixHDCBITSBmp();
  NtGdiBitBltInternal(
    a2,
    v53,
    top,
    v68,
    v52[3],
    *(HDC *)(gpDispInfo + 56LL),
    v52[2] + *v52 - v68 - v21,
    v52[1],
    13369376,
    0,
    0);
  if ( !v9 || (*(_BYTE *)(a1 + 65) & 4) == 0 )
    goto LABEL_56;
  v54 = 2 - v21 + v53;
  v55 = v52[2] + *v52 - v21;
  v84.right = v54;
  NtGdiBitBltInternal(a2, v54, top, v21, v52[3], *(HDC *)(gpDispInfo + 56LL), v55, v52[1], 13369376, 0, 0);
  v56 = (unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 8692LL) == 1037;
  if ( !v56 || (*(_BYTE *)(a1 + 66) & 0x40) == 0 )
    goto LABEL_56;
  v57 = v21 - 4;
  v58 = *v52 - v21 + 2;
  v23 = a2;
  NtGdiBitBltInternal(
    a2,
    v54 - 2,
    top + 2,
    v57,
    v52[3] - 4,
    *(HDC *)(gpDispInfo + 56LL),
    v58 + v52[2],
    v52[1] + 2,
    -2134114272,
    0,
    0);
LABEL_57:
  LOBYTE(WindowFrameMetric) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v24 = xxxDrawCaptionTemp(a1, v23, &v84, 0LL, 0LL, 0LL, a3 | (32 * v72) | (v9 >> 4) & 2) == 0;
    LOBYTE(WindowFrameMetric) = SetOrClrWF(v24, (_DWORD *)a1, 0x708u, 1);
  }
  return WindowFrameMetric;
}
