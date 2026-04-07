/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001A0F0
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BFD0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001A69C (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180030A80 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180030C10 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18009F99C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  HRGN v2; // r15
  int v3; // edi
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r8
  int right; // r12d
  int top; // r13d
  int bottom; // r11d
  int v11; // ecx
  int v12; // r14d
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // edi
  int v17; // ebx
  bool v18; // zf
  double v19; // xmm0_8
  __int64 v20; // rcx
  int v21; // edx
  LONG v22; // r9d
  int v23; // eax
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  int v27; // r11d
  int v28; // r14d
  int v29; // r9d
  int v30; // r8d
  LONG v31; // edx
  LONG left; // eax
  HRGN RoundRectRgn; // rax
  int v34; // eax
  signed int v35; // ebx
  int v36; // eax
  HRGN v37; // rdi
  int GeometryFromHRGN; // eax
  int v39; // ecx
  int v40; // r12d
  int v41; // r13d
  LONG v42; // ebx
  int v43; // r15d
  HRGN RectRgn; // rax
  int v45; // eax
  signed int v47; // eax
  int v48; // edx
  unsigned int v49; // ecx
  int v50; // r8d
  signed int LastError; // eax
  int v52; // r9d
  signed int v53; // eax
  int v54; // edx
  unsigned int v55; // ecx
  int v56; // r8d
  signed int v57; // eax
  unsigned int w; // [rsp+20h] [rbp-79h]
  int v59; // [rsp+30h] [rbp-69h]
  int v60; // [rsp+34h] [rbp-65h]
  HRGN hrgnDst; // [rsp+38h] [rbp-61h] BYREF
  int v62; // [rsp+40h] [rbp-59h]
  int v63; // [rsp+44h] [rbp-55h]
  int v64; // [rsp+48h] [rbp-51h]
  HRGN hrgnSrc2; // [rsp+50h] [rbp-49h]
  int v66; // [rsp+58h] [rbp-41h]
  struct tagRECT rc; // [rsp+60h] [rbp-39h] BYREF
  struct tagRECT v68; // [rsp+70h] [rbp-29h] BYREF
  struct tagRECT Src; // [rsp+80h] [rbp-19h] BYREF
  LONG v70; // [rsp+90h] [rbp-9h]
  int v71; // [rsp+94h] [rbp-5h]
  int v72; // [rsp+98h] [rbp-1h]
  int v73; // [rsp+9Ch] [rbp+3h]
  int v74; // [rsp+A0h] [rbp+7h]
  int v75; // [rsp+A4h] [rbp+Bh]
  int v76; // [rsp+A8h] [rbp+Fh]
  int v77; // [rsp+ACh] [rbp+13h]
  LONG v78; // [rsp+B0h] [rbp+17h]
  int v79; // [rsp+B4h] [rbp+1Bh]
  int v80; // [rsp+B8h] [rbp+1Fh]
  int v81; // [rsp+BCh] [rbp+23h]

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v3 = *((_DWORD *)this + 146);
  hrgnDst = 0LL;
  v5 = (*(_BYTE *)(v1 + 595) & 0x20) != 0;
  IsOpenThemeDataPresent();
  if ( (v3 & 0x20) != 0 )
  {
    if ( v5 || (v3 & 0x40) != 0 )
      v6 = 16LL;
    else
      v6 = 24LL;
  }
  else if ( v5 || (v3 & 0x40) != 0 )
  {
    if ( (v3 & 2) != 0 )
      v6 = 32LL;
    else
      v6 = 0LL;
  }
  else if ( (v3 & 2) != 0 )
  {
    v6 = 40LL;
  }
  else
  {
    v6 = 8LL;
  }
  *(_QWORD *)&v68.left = *(_QWORD *)(v6 + CTopLevelWindow::s_rgpwfWindowFrames);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 90) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  v7 = (unsigned int)(*((_DWORD *)this + 155) + rc.left);
  right = rc.right - *((_DWORD *)this + 156);
  top = *((_DWORD *)this + 157) + rc.top;
  bottom = rc.bottom - *((_DWORD *)this + 158);
  v11 = *((_DWORD *)this + 151) - *((_DWORD *)this + 155);
  v12 = *((_DWORD *)this + 152) - *((_DWORD *)this + 156);
  v13 = *((_DWORD *)this + 154) - *((_DWORD *)this + 158);
  v64 = *((_DWORD *)this + 153) - *((_DWORD *)this + 157);
  v14 = *((_QWORD *)this + 40);
  rc.left = v7;
  rc.right = right;
  rc.top = top;
  rc.bottom = bottom;
  v15 = (unsigned int)(v11 - *(_DWORD *)(v14 + 24));
  v60 = v15;
  v59 = v11;
  v66 = v12;
  LODWORD(hrgnSrc2) = v13;
  if ( (int)v15 < 0 )
  {
    v15 = 0LL;
    v60 = 0;
  }
  v16 = v12 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
  if ( v16 < 0 )
    v16 = 0;
  v17 = v13 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
  if ( v17 < 0 )
    v17 = 0;
  v18 = (*((_BYTE *)this + 584) & 0x40) == 0;
  v19 = (double)dword_1800BEEA0 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
  v63 = (int)v19;
  if ( v18 )
  {
    v20 = *((_QWORD *)this + 90);
    if ( (*(_BYTE *)(v20 + 595) & 0x20) == 0 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 528) )
    {
      if ( !(unsigned int)IsWindowArranged(*(_QWORD *)(v20 + 40), (unsigned int)(int)v19, v7, v15)
        && (*((_BYTE *)this + 584) & 0x20) == 0 )
      {
        bottom = rc.bottom;
        right = rc.right;
        top = rc.top;
        v21 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
        LODWORD(v7) = rc.left;
        v11 = v59;
        LODWORD(v15) = v60;
        goto LABEL_18;
      }
      bottom = rc.bottom;
      right = rc.right;
      top = rc.top;
      LODWORD(v7) = rc.left;
      LODWORD(v15) = v60;
    }
    v11 = v59;
  }
  v21 = 0;
LABEL_18:
  v62 = v21;
  v22 = v7 + v21 + v15;
  Src.left = v22;
  v70 = v22;
  Src.right = right - v21 - v16;
  Src.top = v21 + top;
  v23 = v11 + v7;
  Src.bottom = top + v63;
  v24 = bottom - (_DWORD)hrgnSrc2;
  v72 = v23;
  v25 = bottom - (_DWORD)hrgnSrc2;
  v71 = top + v63;
  if ( top + v64 > bottom - (int)hrgnSrc2 )
    v25 = top + v64;
  v75 = top + v63;
  v73 = v25;
  v74 = right - v12;
  v26 = bottom - (_DWORD)hrgnSrc2;
  v76 = right - v21 - v16;
  if ( top + v64 > v24 )
    v26 = top + v64;
  v78 = v22;
  v77 = v26;
  v80 = right - v21 - v16;
  if ( v24 < 0 )
    v24 = 0;
  v27 = bottom - v62 - v17;
  v79 = v24;
  if ( v27 < 0 )
    v81 = 0;
  else
    v81 = v27;
  SetLastError(0);
  v28 = 0x7FFFFFF;
  v29 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v29 = -134217728;
  }
  else if ( v29 >= 0x7FFFFFF )
  {
    v29 = 0x7FFFFFF;
  }
  v30 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v30 = -134217728;
  }
  else if ( v30 >= 0x7FFFFFF )
  {
    v30 = 0x7FFFFFF;
  }
  v31 = rc.top;
  if ( rc.top <= -134217728 )
  {
    v31 = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    v31 = 0x7FFFFFF;
  }
  left = rc.left;
  if ( rc.left <= -134217728 )
  {
    left = -134217728;
  }
  else if ( rc.left >= 0x7FFFFFF )
  {
    left = 0x7FFFFFF;
  }
  RoundRectRgn = CreateRoundRectRgn(
                   left,
                   v31,
                   v30,
                   v29,
                   2 * *(_DWORD *)(*(_QWORD *)&v68.left + 1884LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v68.left + 1884LL));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v34 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    v35 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA3F8, 0xBu, v34, 0x122Cu);
      goto LABEL_68;
    }
    v36 = HrgnFromRects(&Src, 4u, &hrgnDst);
    v35 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA3F8, 0xBu, v36, 0x1232u);
      goto LABEL_95;
    }
    SetLastError(0);
    v37 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, hrgnSrc2, 1) )
    {
      LastError = GetLastError();
      v35 = LastError;
      if ( LastError > 0 )
        v35 = (unsigned __int16)LastError | 0x80070000;
      w = 4660;
      if ( v35 >= 0 )
        v35 = -2003304445;
      v52 = v35;
      goto LABEL_119;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v37, (struct CResource **)this + 68);
    v35 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      w = 4661;
      goto LABEL_118;
    }
    if ( v37 )
    {
      DeleteObject(v37);
      v37 = 0LL;
      hrgnDst = 0LL;
    }
    v39 = v59;
    if ( v59 < 0 )
      v39 = 0;
    v40 = v39 + rc.left;
    v41 = rc.top + v63;
    v68.left = v39 + rc.left;
    v68.top = rc.top + v63;
    if ( v66 >= 0 )
      LODWORD(v2) = v66;
    v42 = rc.right - (_DWORD)v2;
    v43 = rc.top + v64;
    v68.right = v42;
    v68.bottom = rc.top + v64;
    SetLastError(0);
    if ( v43 <= -134217728 )
    {
      v43 = -134217728;
    }
    else if ( v43 >= 0x7FFFFFF )
    {
      v43 = 0x7FFFFFF;
    }
    if ( v42 <= -134217728 )
    {
      v42 = -134217728;
    }
    else if ( v42 >= 0x7FFFFFF )
    {
      v42 = 0x7FFFFFF;
    }
    if ( v41 <= -134217728 )
    {
      v41 = -134217728;
    }
    else if ( v41 >= 0x7FFFFFF )
    {
      v41 = 0x7FFFFFF;
    }
    if ( v40 <= -134217728 )
    {
      v40 = -134217728;
    }
    else if ( v40 >= 0x7FFFFFF )
    {
LABEL_61:
      RectRgn = CreateRectRgn(v28, v41, v42, v43);
      v2 = RectRgn;
      if ( !RectRgn )
      {
        v53 = GetLastError();
        v35 = v53;
        if ( v53 > 0 )
          v35 = (unsigned __int16)v53 | 0x80070000;
        if ( v35 >= 0 )
          v35 = CheckGUIHandleQuota(v55, v54, v56);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA3F8, 0xBu, v35, 0x1241u);
LABEL_120:
        if ( v37 )
LABEL_67:
          DeleteObject(v37);
LABEL_68:
        DeleteObject(hrgnSrc2);
        if ( v2 )
          DeleteObject(v2);
        return (unsigned int)v35;
      }
      GeometryFromHRGN = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v35 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        w = 4675;
        goto LABEL_118;
      }
      v45 = HrgnFromRects(&v68, 1u, &hrgnDst);
      v35 = v45;
      if ( v45 >= 0 )
      {
        SetLastError(0);
        v37 = hrgnDst;
        if ( !CombineRgn(hrgnDst, hrgnDst, v2, 1) )
        {
          v57 = GetLastError();
          v35 = v57;
          if ( v57 > 0 )
            v35 = (unsigned __int16)v57 | 0x80070000;
          w = 4683;
          if ( v35 >= 0 )
            v35 = -2003304445;
          v52 = v35;
          goto LABEL_119;
        }
        GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v37, (struct CResource **)this + 69);
        v35 = GeometryFromHRGN;
        if ( GeometryFromHRGN >= 0 )
        {
          if ( !v37 )
            goto LABEL_68;
          goto LABEL_67;
        }
        w = 4684;
LABEL_118:
        v52 = GeometryFromHRGN;
LABEL_119:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA3F8, 0xBu, v52, w);
        goto LABEL_120;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA3F8, 0xBu, v45, 0x1249u);
LABEL_95:
      v37 = hrgnDst;
      goto LABEL_120;
    }
    v28 = v40;
    goto LABEL_61;
  }
  v47 = GetLastError();
  v35 = v47;
  if ( v47 > 0 )
    v35 = (unsigned __int16)v47 | 0x80070000;
  if ( v35 >= 0 )
    v35 = CheckGUIHandleQuota(v49, v48, v50);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA3F8, 0xBu, v35, 0x122Au);
  return (unsigned int)v35;
}
