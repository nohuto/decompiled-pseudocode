/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180025400
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180027400 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800149E0 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180014B70 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x1800259B0 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800A101C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  HRGN v2; // r15
  int v3; // edi
  bool v5; // bl
  unsigned int v6; // eax
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
  signed int v35; // edi
  int v36; // eax
  HRGN v37; // rbx
  int GeometryFromHRGN; // eax
  int v39; // ecx
  int v40; // r12d
  int v41; // r13d
  LONG v42; // edi
  int v43; // r15d
  HRGN RectRgn; // rax
  int v45; // eax
  signed int v47; // eax
  int v48; // edx
  unsigned int v49; // ecx
  int v50; // r8d
  signed int v51; // ebx
  signed int LastError; // eax
  int v53; // r9d
  signed int v54; // eax
  int v55; // edx
  unsigned int v56; // ecx
  int v57; // r8d
  signed int v58; // eax
  unsigned int w; // [rsp+20h] [rbp-89h]
  int v60; // [rsp+30h] [rbp-79h]
  int v61; // [rsp+34h] [rbp-75h]
  HRGN hrgnDst; // [rsp+38h] [rbp-71h] BYREF
  int v63; // [rsp+40h] [rbp-69h]
  int v64; // [rsp+44h] [rbp-65h]
  int v65; // [rsp+48h] [rbp-61h]
  HRGN hrgnSrc2; // [rsp+50h] [rbp-59h]
  int v67; // [rsp+58h] [rbp-51h]
  __int64 v68; // [rsp+60h] [rbp-49h]
  struct tagRECT rc; // [rsp+68h] [rbp-41h] BYREF
  struct tagRECT Src; // [rsp+80h] [rbp-29h] BYREF
  LONG v71; // [rsp+90h] [rbp-19h]
  int v72; // [rsp+94h] [rbp-15h]
  int v73; // [rsp+98h] [rbp-11h]
  int v74; // [rsp+9Ch] [rbp-Dh]
  int v75; // [rsp+A0h] [rbp-9h]
  int v76; // [rsp+A4h] [rbp-5h]
  int v77; // [rsp+A8h] [rbp-1h]
  int v78; // [rsp+ACh] [rbp+3h]
  LONG v79; // [rsp+B0h] [rbp+7h]
  int v80; // [rsp+B4h] [rbp+Bh]
  int v81; // [rsp+B8h] [rbp+Fh]
  int v82; // [rsp+BCh] [rbp+13h]
  struct tagRECT v83; // [rsp+C0h] [rbp+17h] BYREF

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v3 = *((_DWORD *)this + 146);
  hrgnDst = 0LL;
  v5 = (*(_BYTE *)(v1 + 595) & 0x20) != 0;
  IsOpenThemeDataPresent();
  if ( (v3 & 0x20) != 0 )
  {
    if ( v5 || (v3 & 0x40) != 0 )
      v6 = 2;
    else
      v6 = 3;
  }
  else if ( v5 || (v3 & 0x40) != 0 )
  {
    v6 = 0;
    if ( (v3 & 2) != 0 )
      v6 = 4;
  }
  else if ( (v3 & 2) != 0 )
  {
    v6 = 5;
  }
  else
  {
    v6 = 1;
  }
  v68 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * v6);
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
  v65 = *((_DWORD *)this + 153) - *((_DWORD *)this + 157);
  v14 = *((_QWORD *)this + 40);
  rc.left = v7;
  rc.right = right;
  rc.top = top;
  rc.bottom = bottom;
  v15 = (unsigned int)(v11 - *(_DWORD *)(v14 + 24));
  v61 = v15;
  v60 = v11;
  v67 = v12;
  LODWORD(hrgnSrc2) = v13;
  if ( (int)v15 < 0 )
  {
    v15 = 0LL;
    v61 = 0;
  }
  v16 = v12 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
  if ( v16 < 0 )
    v16 = 0;
  v17 = v13 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
  if ( v17 < 0 )
    v17 = 0;
  v18 = (*((_BYTE *)this + 584) & 0x40) == 0;
  v19 = (double)dword_1800C0E30 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 49);
  v64 = (int)v19;
  if ( v18 )
  {
    v20 = *((_QWORD *)this + 90);
    if ( (*(_BYTE *)(v20 + 595) & 0x20) == 0 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 480) )
    {
      if ( !(unsigned int)IsWindowArranged(*(_QWORD *)(v20 + 40), (unsigned int)(int)v19, v7, v15)
        && (*((_BYTE *)this + 584) & 0x20) == 0 )
      {
        bottom = rc.bottom;
        right = rc.right;
        top = rc.top;
        v21 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 49);
        LODWORD(v7) = rc.left;
        v11 = v60;
        LODWORD(v15) = v61;
        goto LABEL_18;
      }
      bottom = rc.bottom;
      right = rc.right;
      top = rc.top;
      LODWORD(v7) = rc.left;
      LODWORD(v15) = v61;
    }
    v11 = v60;
  }
  v21 = 0;
LABEL_18:
  v63 = v21;
  v22 = v7 + v21 + v15;
  Src.left = v22;
  v71 = v22;
  Src.right = right - v21 - v16;
  Src.top = v21 + top;
  v23 = v7 + v11;
  Src.bottom = top + v64;
  v24 = bottom - (_DWORD)hrgnSrc2;
  v73 = v23;
  v25 = bottom - (_DWORD)hrgnSrc2;
  v72 = top + v64;
  if ( top + v65 > bottom - (int)hrgnSrc2 )
    v25 = top + v65;
  v76 = top + v64;
  v74 = v25;
  v75 = right - v12;
  v26 = bottom - (_DWORD)hrgnSrc2;
  v77 = right - v21 - v16;
  if ( top + v65 > v24 )
    v26 = top + v65;
  v79 = v22;
  v78 = v26;
  v81 = right - v21 - v16;
  if ( v24 < 0 )
    v24 = 0;
  v27 = bottom - v63 - v17;
  v80 = v24;
  if ( v27 < 0 )
    v82 = 0;
  else
    v82 = v27;
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
  RoundRectRgn = CreateRoundRectRgn(left, v31, v30, v29, 2 * *(_DWORD *)(v68 + 1884), 2 * *(_DWORD *)(v68 + 1884));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v34 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    v35 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800AB450, 0xBu, v34, 0x1234u);
      goto LABEL_68;
    }
    v36 = HrgnFromRects(&Src, 4u, &hrgnDst);
    v35 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800AB450, 0xBu, v36, 0x123Au);
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
      w = 4668;
      if ( v35 >= 0 )
        v35 = -2003304445;
      v53 = v35;
      goto LABEL_119;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v37, (struct CResource **)this + 68);
    v35 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      w = 4669;
      goto LABEL_118;
    }
    if ( v37 )
    {
      DeleteObject(v37);
      v37 = 0LL;
      hrgnDst = 0LL;
    }
    v39 = v60;
    if ( v60 < 0 )
      v39 = 0;
    v40 = v39 + rc.left;
    v41 = rc.top + v64;
    v83.left = v39 + rc.left;
    v83.top = rc.top + v64;
    if ( v67 >= 0 )
      LODWORD(v2) = v67;
    v42 = rc.right - (_DWORD)v2;
    v43 = rc.top + v65;
    v83.right = v42;
    v83.bottom = rc.top + v65;
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
        v54 = GetLastError();
        v35 = v54;
        if ( v54 > 0 )
          v35 = (unsigned __int16)v54 | 0x80070000;
        if ( v35 >= 0 )
          v35 = CheckGUIHandleQuota(v56, v55, v57);
        MilInstrumentationCheckHR(0x14u, &dword_1800AB450, 0xBu, v35, 0x1249u);
LABEL_120:
        if ( !v37 )
          goto LABEL_68;
        goto LABEL_67;
      }
      GeometryFromHRGN = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v35 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        w = 4683;
        goto LABEL_118;
      }
      v45 = HrgnFromRects(&v83, 1u, &hrgnDst);
      v35 = v45;
      if ( v45 >= 0 )
      {
        SetLastError(0);
        v37 = hrgnDst;
        if ( !CombineRgn(hrgnDst, hrgnDst, v2, 1) )
        {
          v58 = GetLastError();
          v35 = v58;
          if ( v58 > 0 )
            v35 = (unsigned __int16)v58 | 0x80070000;
          w = 4691;
          if ( v35 >= 0 )
            v35 = -2003304445;
          v53 = v35;
          goto LABEL_119;
        }
        GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v37, (struct CResource **)this + 69);
        v35 = GeometryFromHRGN;
        if ( GeometryFromHRGN >= 0 )
        {
          if ( !v37 )
          {
LABEL_68:
            DeleteObject(hrgnSrc2);
            if ( v2 )
              DeleteObject(v2);
            return (unsigned int)v35;
          }
LABEL_67:
          DeleteObject(v37);
          goto LABEL_68;
        }
        w = 4692;
LABEL_118:
        v53 = GeometryFromHRGN;
LABEL_119:
        MilInstrumentationCheckHR(0x14u, &dword_1800AB450, 0xBu, v53, w);
        goto LABEL_120;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1800AB450, 0xBu, v45, 0x1251u);
LABEL_95:
      v37 = hrgnDst;
      goto LABEL_120;
    }
    v28 = v40;
    goto LABEL_61;
  }
  v47 = GetLastError();
  v51 = v47;
  if ( v47 > 0 )
    v51 = (unsigned __int16)v47 | 0x80070000;
  if ( v51 >= 0 )
    v51 = CheckGUIHandleQuota(v49, v48, v50);
  MilInstrumentationCheckHR(0x14u, &dword_1800AB450, 0xBu, v51, 0x1232u);
  return (unsigned int)v51;
}
