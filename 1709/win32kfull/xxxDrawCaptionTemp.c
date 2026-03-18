/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C013C3E8
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01E4150 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01E4270 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020E2F0 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     _HasCaptionIcon @ 0x1C008B3E0 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C008B494 (xxxGetWindowSmIcon.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreGetTextMetricsW @ 0x1C0108CF4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C013C7D4 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 *     xxxGetWindowText @ 0x1C013C8A4 (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     TextCopy @ 0x1C023B16C (TextCopy.c)
 *     DrawTextExWorker @ 0x1C023BB1C (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        ULONG_PTR a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  struct tagCURSOR *WindowSmIcon; // r13
  int v11; // r12d
  int v12; // r15d
  HBRUSH v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _WORD *v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  int WindowText; // eax
  __int64 v21; // r15
  unsigned __int64 v22; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r13d
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  int v29; // eax
  WCHAR *v30; // rdx
  int v31; // eax
  int *v32; // r9
  int v33; // r10d
  int v34; // edx
  bool v35; // zf
  unsigned __int16 *SourceString; // rax
  HBRUSH v38; // rax
  unsigned int Layout; // eax
  unsigned int v40; // r15d
  int v41; // r12d
  __int64 v42; // rax
  __int64 DPIMetrics; // rax
  int TextMetricsW; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  HBRUSH v50; // r8
  int TextAlign; // eax
  int v52; // r8d
  int v53; // r10d
  unsigned int v54; // eax
  int v55; // [rsp+50h] [rbp-B0h]
  HBRUSH v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+64h] [rbp-9Ch]
  unsigned int v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+7Ch] [rbp-84h]
  int v62; // [rsp+80h] [rbp-80h]
  struct tagSIZE v63; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  _WORD v65[4]; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  int v68; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h]
  _OWORD v70[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v71; // [rsp+120h] [rbp+20h]
  _WORD v72[256]; // [rsp+160h] [rbp+60h] BYREF

  WindowSmIcon = a5;
  v67 = a4;
  v63 = 0LL;
  v59 = 1;
  v57 = 0;
  v58 = 0;
  if ( a3->right <= a3->left )
    return 0LL;
  if ( a1 && !a5 && (unsigned int)HasCaptionIcon(a1) && (a7 & 2) == 0 && (*(_BYTE *)(a1 + 70) & 8) != 0 )
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
  v55 = *(_DWORD *)(gpsi + 4556LL);
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) == 0 )
    {
      v11 = *(_DWORD *)(gpsi + 4588LL);
      v12 = *(_DWORD *)(gpsi + 4560LL);
      v13 = *(HBRUSH *)(gpsi + 4696LL);
      goto LABEL_11;
    }
    if ( *(_WORD *)(gpsi + 9972LL) < 8u
      || (v12 = *(_DWORD *)(gpsi + 4632LL), v12 != *(_DWORD *)(gpsi + 4552LL))
      || v12 == *(_DWORD *)(gpsi + 4572LL) )
    {
      v11 = *(_DWORD *)(gpsi + 4612LL);
      v12 = *(_DWORD *)(gpsi + 4632LL);
      v56 = *(HBRUSH *)(gpsi + 4928LL);
      goto LABEL_13;
    }
    v38 = *(HBRUSH *)(gpsi + 4840LL);
LABEL_65:
    v11 = *(_DWORD *)(gpsi + 4624LL);
    v56 = v38;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v12 = *(_DWORD *)(gpsi + 4612LL);
    v38 = *(HBRUSH *)(gpsi + 4800LL);
    goto LABEL_65;
  }
  v11 = *(_DWORD *)(gpsi + 4628LL);
  v12 = *(_DWORD *)(gpsi + 4564LL);
  v13 = *(HBRUSH *)(gpsi + 4704LL);
LABEL_11:
  v56 = v13;
  if ( (a7 & 0x20) != 0 )
  {
    v57 = 1;
LABEL_13:
    v55 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v61 = GreSetTextColor(a2, v11);
  v62 = GreSetBkColor(a2, v12);
  if ( WindowSmIcon )
  {
    v15 = 2LL;
    if ( (a7 & 2) == 0 )
    {
      if ( (a7 & 4) != 0 )
      {
        Layout = GreGetLayout(a2);
        v40 = Layout;
        v41 = Layout & 1;
        if ( (Layout & 1) != 0 )
          GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
        DrawCaptionIcon(a2, a3, WindowSmIcon, v56, a7);
        if ( v41 )
          GreSetLayout(a2, 0xFFFFFFFFLL, v40);
      }
      else
      {
        a3->left += a3->bottom - a3->top;
      }
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_54;
  v17 = a6;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
  if ( !a6 )
  {
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v72);
LABEL_23:
        v22 = (unsigned __int16)WindowText;
        LODWORD(v21) = WindowText;
        LOWORD(v22) = 2 * WindowText;
LABEL_24:
        v65[0] = v22;
        LOWORD(v22) = v22 + 2;
        v65[1] = v22;
        v17 = v65;
        v66 = v72;
        goto LABEL_25;
      }
      if ( *(_DWORD *)(a1 + 232) )
      {
        WindowText = TextCopy(a1 + 232, v72, 256LL);
        goto LABEL_23;
      }
    }
    v72[0] = 0;
    v22 = 0LL;
    LODWORD(v21) = 0;
    goto LABEL_24;
  }
  v22 = a6[1] - 2LL;
  if ( v22 >= *a6 )
    LOWORD(v22) = *a6;
  v42 = *((_QWORD *)a6 + 1);
  *a6 = v22;
  v21 = (unsigned __int16)v22 >> 1;
  *(_WORD *)(v42 + 2 * v21) = 0;
LABEL_25:
  if ( v67 )
  {
    v60 = GreSelectFont((__int64)a2, v67);
    memset(v70, 0, 0x44uLL);
    TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v70);
    v71 = v70[0];
    if ( TextMetricsW )
      v49 = v71;
    else
      v49 = *(_DWORD *)(GetDPIServerInfo(v46, v45, v47, v48) + 40);
    v26 = (a3->top + a3->bottom - v49) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
    {
      DPIMetrics = GetDPIMetrics(v22, 2LL);
      v24 = *(_QWORD *)(DPIMetrics + 32);
      v25 = *(_DWORD *)(DPIMetrics + 44);
    }
    else
    {
      DPIServerInfo = GetDPIServerInfo(v22, 2LL, v18, v19);
      v24 = *(_QWORD *)(DPIServerInfo + 8);
      v25 = *(_DWORD *)(DPIServerInfo + 20);
    }
    v26 = (a3->top + a3->bottom - v25) / 2;
    v60 = GreSelectFont((__int64)a2, v24);
  }
  if ( !v57 )
  {
    v50 = v56;
LABEL_87:
    FillRect(a2, a3, v50);
    goto LABEL_34;
  }
  if ( (a7 & 1) != 0 )
  {
    v27 = *(_DWORD *)(gpsi + 4560LL);
    v28 = *(_DWORD *)(gpsi + 4660LL);
  }
  else
  {
    v27 = *(_DWORD *)(gpsi + 4564LL);
    v28 = *(_DWORD *)(gpsi + 4664LL);
  }
  if ( v27 == v28 )
  {
    if ( (a7 & 1) != 0 )
      v50 = *(HBRUSH *)(gpsi + 4696LL);
    else
      v50 = *(HBRUSH *)(gpsi + 4704LL);
    goto LABEL_87;
  }
  FillGradient(a2, a3, v27, v28);
LABEL_34:
  if ( v56 == *(HBRUSH *)(gpsi + 4928LL) )
  {
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4624LL));
    GreSetBkColor(a2, *(_DWORD *)(gpsi + 4620LL));
  }
  v29 = CALL_LPK(ThreadWin32Thread);
  v30 = (WCHAR *)*((_QWORD *)v17 + 1);
  if ( v29 )
    xxxClientGetTextExtentPointW(a2, v30, v21, &v63);
  else
    GreGetTextExtentW(a2, v30, v21, &v63, 1);
  if ( a1 && (*(_BYTE *)(a1 + 65) & 0x20) != 0 )
  {
    TextAlign = GreGetTextAlign(a2);
    v58 = GreSetTextAlign(a2, TextAlign | 0x100u);
  }
  if ( (a7 & 0x4000) != 0 || (_DWORD)v21 && v63.cx > a3->right - a3->left - 2 )
  {
    v68 = 20;
    v69 = 2LL;
    if ( (a7 & 0x4000) != 0 )
    {
      v54 = 34853;
    }
    else if ( !a1 || (v54 = 34854, (*(_BYTE *)(a1 + 65) & 0x10) == 0) )
    {
      v54 = 34852;
    }
    DrawTextExWorker(a2, *((unsigned __int16 **)v17 + 1), v21, a3, v54, (struct tagDRAWTEXTPARAMS *)&v68);
    v59 = 0;
  }
  else
  {
    if ( a1 && (*(_BYTE *)(a1 + 65) & 0x10) != 0 )
    {
      v31 = CALL_LPK(ThreadWin32Thread);
      v34 = a3->right - v52 - v53;
    }
    else
    {
      v31 = CALL_LPK(ThreadWin32Thread);
      v34 = v33 + a3->left;
    }
    v35 = v31 == 0;
    SourceString = (unsigned __int16 *)*((_QWORD *)v17 + 1);
    if ( v35 )
      GreExtTextOutWInternal(a2, v34, v26, 4u, a3, SourceString, v21, v32, v32, (unsigned int)v32);
    else
      xxxClientExtTextOutW(a2, v34, v26, 4, a3, SourceString, v21);
  }
  if ( a1 && (*(_BYTE *)(a1 + 65) & 0x20) != 0 )
    GreSetTextAlign(a2, v58);
  if ( v60 )
    GreSelectFont((__int64)a2, v60);
LABEL_54:
  GreSetTextColor(a2, v61);
  GreSetBkColor(a2, v62);
  if ( v56 == *(HBRUSH *)(gpsi + 4928LL) )
    GreSetBkMode(a2, v55);
  return v59;
}
