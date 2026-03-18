/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0138108
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01D7930 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01D7A50 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020C454 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     GreGetTextMetricsW @ 0x1C000C4B4 (GreGetTextMetricsW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     xxxGetWindowSmIcon @ 0x1C001D71C (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C001D908 (_HasCaptionIcon.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     xxxClientExtTextOutW @ 0x1C0138734 (xxxClientExtTextOutW.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C01389D8 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 *     xxxGetWindowText @ 0x1C0138AA8 (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0210840 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     TextCopy @ 0x1C0239350 (TextCopy.c)
 *     DrawTextExWorker @ 0x1C023A250 (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  int v11; // r12d
  int v12; // r15d
  HBRUSH v13; // rax
  int v14; // r13d
  HBRUSH v15; // rax
  unsigned int Layout; // eax
  unsigned int v17; // r15d
  int v18; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _WORD *v22; // r13
  __int64 v23; // rdx
  int WindowText; // eax
  __int64 v25; // r15
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  int TextMetricsW; // eax
  __int64 v30; // rcx
  int v31; // ecx
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  HBRUSH v34; // r8
  int v35; // eax
  WCHAR *v36; // rdx
  int TextAlign; // eax
  int v38; // eax
  int *v39; // r9
  int v40; // r8d
  LONG v41; // edx
  bool v42; // zf
  unsigned __int16 *SourceString; // rax
  struct tagRECT *v44; // [rsp+20h] [rbp-E0h]
  struct tagCURSOR *WindowSmIcon; // [rsp+50h] [rbp-B0h]
  LONG v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+58h] [rbp-A8h]
  HBRUSH v48; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+6Ch] [rbp-94h]
  unsigned int v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+84h] [rbp-7Ch]
  int v54; // [rsp+88h] [rbp-78h]
  struct tagSIZE v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h]
  _WORD v57[4]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD *v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60[3]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v61[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+120h] [rbp+20h]
  _WORD v63[256]; // [rsp+160h] [rbp+60h] BYREF

  v59 = a4;
  v55 = 0LL;
  WindowSmIcon = a5;
  v51 = 1;
  v49 = 0;
  v50 = 0;
  if ( a3->right <= a3->left )
    return 0LL;
  v11 = 2;
  if ( a1 && !a5 && (unsigned int)HasCaptionIcon(a1) && (a7 & 2) == 0 && (*(_BYTE *)(a1 + 70) & 8) != 0 )
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
  v47 = *(_DWORD *)(gpsi + 4964LL);
  if ( (a7 & 1) == 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v12 = *(_DWORD *)(gpsi + 5020LL);
      v13 = *(HBRUSH *)(gpsi + 5208LL);
      goto LABEL_19;
    }
    v14 = *(_DWORD *)(gpsi + 5036LL);
    v12 = *(_DWORD *)(gpsi + 4972LL);
    v15 = *(HBRUSH *)(gpsi + 5112LL);
    goto LABEL_21;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v14 = *(_DWORD *)(gpsi + 4996LL);
    v12 = *(_DWORD *)(gpsi + 4968LL);
    v15 = *(HBRUSH *)(gpsi + 5104LL);
LABEL_21:
    v48 = v15;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_24;
    v49 = 1;
LABEL_23:
    v47 = GreSetBkMode(a2, 1);
    goto LABEL_24;
  }
  if ( *(_WORD *)(gpsi + 8676LL) < 8u
    || (v12 = *(_DWORD *)(gpsi + 5040LL), v12 != *(_DWORD *)(gpsi + 4960LL))
    || v12 == *(_DWORD *)(gpsi + 4980LL) )
  {
    v14 = *(_DWORD *)(gpsi + 5020LL);
    v12 = *(_DWORD *)(gpsi + 5040LL);
    v48 = *(HBRUSH *)(gpsi + 5336LL);
    goto LABEL_23;
  }
  v13 = *(HBRUSH *)(gpsi + 5248LL);
LABEL_19:
  v14 = *(_DWORD *)(gpsi + 5032LL);
  v48 = v13;
LABEL_24:
  v53 = GreSetTextColor(a2, v14);
  v54 = GreSetBkColor(a2, v12);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v17 = Layout;
      v18 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v48, a7);
      if ( v18 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v17);
    }
    else
    {
      a3->left += a3->bottom - a3->top;
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_94;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v22 = a6;
  v23 = 0LL;
  v56 = ThreadWin32Thread;
  if ( !a6 )
  {
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v63);
LABEL_39:
        v26 = (unsigned __int16)WindowText;
        LODWORD(v25) = WindowText;
        LOWORD(v26) = 2 * WindowText;
        v57[0] = 2 * WindowText;
LABEL_41:
        LOWORD(v26) = v26 + 2;
        v58 = v63;
        v22 = v57;
        v57[1] = v26;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(a1 + 232) )
      {
        WindowText = TextCopy(a1 + 232, v63, 256LL);
        goto LABEL_39;
      }
    }
    v63[0] = 0;
    v26 = 0LL;
    v57[0] = 0;
    LODWORD(v25) = 0;
    goto LABEL_41;
  }
  v26 = *a6;
  if ( (unsigned __int64)a6[1] - 2 < v26 )
    v26 = a6[1] - 2LL;
  v27 = *((_QWORD *)a6 + 1);
  *a6 = v26;
  v25 = (unsigned __int16)v26 >> 1;
  *(_WORD *)(v27 + 2 * v25) = 0;
LABEL_45:
  if ( v59 )
  {
    v52 = GreSelectFontInternal(a2);
    memset(v61, 0, 0x44uLL);
    TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v61);
    v62 = v61[0];
    if ( TextMetricsW )
      v31 = v62;
    else
      v31 = *(_DWORD *)(GetDPIServerInfo(v30) + 64);
    v46 = (a3->top + a3->bottom - v31) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
      v28 = *(_DWORD *)(GetDPIMetrics(v26, v23, v20, v21, (__int64)v44) + 44);
    else
      v28 = *(_DWORD *)(GetDPIServerInfo(v26) + 20);
    v46 = (a3->top + a3->bottom - v28) / 2;
    v52 = GreSelectFontInternal(a2);
  }
  if ( !v49 )
  {
    v34 = v48;
LABEL_64:
    FillRect(a2, a3, v34);
    goto LABEL_65;
  }
  if ( (a7 & 1) != 0 )
  {
    v32 = *(_DWORD *)(gpsi + 4968LL);
    v33 = *(_DWORD *)(gpsi + 5068LL);
  }
  else
  {
    v32 = *(_DWORD *)(gpsi + 4972LL);
    v33 = *(_DWORD *)(gpsi + 5072LL);
  }
  if ( v32 == v33 )
  {
    if ( (a7 & 1) != 0 )
      v34 = *(HBRUSH *)(gpsi + 5104LL);
    else
      v34 = *(HBRUSH *)(gpsi + 5112LL);
    goto LABEL_64;
  }
  FillGradient(a2, a3, v32, v33);
LABEL_65:
  if ( v48 == *(HBRUSH *)(gpsi + 5336LL) )
  {
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 5032LL));
    GreSetBkColor(a2, *(_DWORD *)(gpsi + 5028LL));
  }
  v35 = CALL_LPK(v56);
  v36 = (WCHAR *)*((_QWORD *)v22 + 1);
  if ( v35 )
    xxxClientGetTextExtentPointW(a2, v36, v25, &v55);
  else
    GreGetTextExtentW(a2, v36, v25, &v55, 1);
  if ( a1 && (*(_BYTE *)(a1 + 65) & 0x20) != 0 )
  {
    TextAlign = GreGetTextAlign(a2);
    v50 = GreSetTextAlign(a2, TextAlign | 0x100u);
  }
  if ( (a7 & 0x4000) != 0 || (_DWORD)v25 && v55.cx > a3->right - a3->left - 2 )
  {
    LODWORD(v60[0]) = 20;
    v60[1] = 2LL;
    if ( (a7 & 0x4000) != 0 )
    {
      v11 = 1;
    }
    else if ( !a1 || (*(_BYTE *)(a1 + 65) & 0x10) == 0 )
    {
      v11 = 0;
    }
    DrawTextExWorker(a2, v11 | 0x8824, (__int64)v60);
    v51 = 0;
  }
  else
  {
    if ( a1 && (*(_BYTE *)(a1 + 65) & 0x10) != 0 )
    {
      v38 = CALL_LPK(v56);
      v41 = a3->right - v40 - 2;
    }
    else
    {
      v38 = CALL_LPK(v56);
      v41 = a3->left + 2;
    }
    v42 = v38 == 0;
    SourceString = (unsigned __int16 *)*((_QWORD *)v22 + 1);
    if ( v42 )
      GreExtTextOutWInternal(a2, v41, v46, 4, a3, SourceString, v25, v39, v39, (unsigned int)v39);
    else
      xxxClientExtTextOutW(a2, (__int64)a3, SourceString, v25);
  }
  if ( a1 && (*(_BYTE *)(a1 + 65) & 0x20) != 0 )
    GreSetTextAlign(a2, v50);
  if ( v52 )
    GreSelectFontInternal(a2);
LABEL_94:
  GreSetTextColor(a2, v53);
  GreSetBkColor(a2, v54);
  if ( v48 == *(HBRUSH *)(gpsi + 5336LL) )
    GreSetBkMode(a2, v47);
  return v51;
}
