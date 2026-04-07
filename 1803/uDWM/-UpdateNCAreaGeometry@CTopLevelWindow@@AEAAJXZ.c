/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180019F50
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BE20 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001A4E4 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180033290 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180033420 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800A86FC (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  HRGN v2; // r15
  int v3; // edi
  bool v5; // bl
  __int64 v6; // rcx
  int v7; // eax
  LONG left; // r14d
  int right; // r8d
  int top; // r10d
  int bottom; // ecx
  int v12; // edx
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // rax
  int v16; // edi
  int v17; // ebx
  bool v18; // zf
  __int64 v19; // rax
  int v20; // r9d
  LONG v21; // edx
  LONG v22; // edi
  int v23; // r10d
  int v24; // eax
  int v25; // ecx
  int v26; // r14d
  int v27; // r9d
  int v28; // r8d
  LONG v29; // edx
  LONG v30; // eax
  HRGN RoundRectRgn; // rax
  int v32; // eax
  signed int GeometryFromHRGN; // ebx
  int v34; // eax
  HRGN v35; // rdi
  int v36; // r9d
  int v37; // r12d
  int v38; // r13d
  LONG v39; // ebx
  int v40; // r15d
  HRGN RectRgn; // rax
  signed int v43; // eax
  int v44; // edx
  unsigned int v45; // ecx
  int v46; // r8d
  unsigned int v47; // eax
  signed int v48; // eax
  signed int v49; // eax
  int v50; // edx
  unsigned int v51; // ecx
  int v52; // r8d
  signed int LastError; // eax
  int v54; // [rsp+30h] [rbp-69h]
  HRGN hrgnDst; // [rsp+38h] [rbp-61h] BYREF
  HRGN hrgnSrc2; // [rsp+40h] [rbp-59h]
  int v57; // [rsp+48h] [rbp-51h]
  int v58; // [rsp+4Ch] [rbp-4Dh]
  int v59; // [rsp+50h] [rbp-49h]
  struct tagRECT rc; // [rsp+58h] [rbp-41h] BYREF
  struct tagRECT v61; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT Src; // [rsp+80h] [rbp-19h] BYREF
  LONG v63; // [rsp+90h] [rbp-9h]
  LONG v64; // [rsp+94h] [rbp-5h]
  int v65; // [rsp+98h] [rbp-1h]
  int v66; // [rsp+9Ch] [rbp+3h]
  int v67; // [rsp+A0h] [rbp+7h]
  LONG v68; // [rsp+A4h] [rbp+Bh]
  LONG v69; // [rsp+A8h] [rbp+Fh]
  int v70; // [rsp+ACh] [rbp+13h]
  int v71; // [rsp+B0h] [rbp+17h]
  int v72; // [rsp+B4h] [rbp+1Bh]
  LONG v73; // [rsp+B8h] [rbp+1Fh]
  int v74; // [rsp+BCh] [rbp+23h]

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v3 = *((_DWORD *)this + 146);
  hrgnDst = 0LL;
  v5 = (*(_BYTE *)(v1 + 595) & 0x10) != 0;
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
    v6 = 0LL;
    if ( (v3 & 2) != 0 )
      v6 = 32LL;
  }
  else if ( (v3 & 2) != 0 )
  {
    v6 = 40LL;
  }
  else
  {
    v6 = 8LL;
  }
  *(_QWORD *)&v61.left = *(_QWORD *)(v6 + CTopLevelWindow::s_rgpwfWindowFrames);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 90) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  v7 = *((_DWORD *)this + 155);
  left = v7 + rc.left;
  right = rc.right - *((_DWORD *)this + 156);
  top = *((_DWORD *)this + 157) + rc.top;
  bottom = rc.bottom - *((_DWORD *)this + 158);
  v12 = *((_DWORD *)this + 151) - v7;
  v13 = *((_DWORD *)this + 152) - *((_DWORD *)this + 156);
  v14 = *((_DWORD *)this + 154) - *((_DWORD *)this + 158);
  v58 = *((_DWORD *)this + 153) - *((_DWORD *)this + 157);
  v15 = *((_QWORD *)this + 40);
  rc.left = left;
  rc.right = right;
  rc.top = top;
  rc.bottom = bottom;
  v54 = v12;
  LODWORD(hrgnSrc2) = v12 - *(_DWORD *)(v15 + 24);
  v59 = v13;
  if ( (int)hrgnSrc2 < 0 )
    LODWORD(hrgnSrc2) = 0;
  v16 = v13 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
  if ( v16 < 0 )
    v16 = 0;
  v17 = v14 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
  if ( v17 < 0 )
    v17 = 0;
  v18 = (*((_BYTE *)this + 584) & 0x40) == 0;
  v57 = (int)((double)dword_1800C9E30 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 55));
  if ( v18 )
  {
    v19 = *((_QWORD *)this + 90);
    if ( (*(_BYTE *)(v19 + 595) & 0x10) == 0 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 520) )
    {
      if ( !(unsigned int)IsWindowArranged(*(_QWORD *)(v19 + 40)) && (*((_BYTE *)this + 584) & 0x20) == 0 )
      {
        bottom = rc.bottom;
        right = rc.right;
        top = rc.top;
        v20 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
        left = rc.left;
        goto LABEL_18;
      }
      bottom = rc.bottom;
      right = rc.right;
      top = rc.top;
      left = rc.left;
    }
  }
  v20 = 0;
LABEL_18:
  Src.top = top + v20;
  v21 = right - v20 - v16;
  v22 = top + v57;
  v65 = left + v54;
  v23 = v58 + top;
  v24 = bottom - v14;
  Src.left = (_DWORD)hrgnSrc2 + left + v20;
  Src.right = v21;
  Src.bottom = v22;
  v63 = Src.left;
  v64 = v22;
  if ( v23 > bottom - v14 )
    v66 = v23;
  else
    v66 = bottom - v14;
  v68 = v22;
  v67 = right - v13;
  v69 = v21;
  if ( v23 > v24 )
    v70 = v23;
  else
    v70 = bottom - v14;
  v71 = (_DWORD)hrgnSrc2 + left + v20;
  if ( v24 < 0 )
    v72 = 0;
  else
    v72 = bottom - v14;
  v73 = v21;
  v25 = bottom - v20 - v17;
  if ( v25 < 0 )
    v74 = 0;
  else
    v74 = v25;
  SetLastError(0);
  v26 = 0x7FFFFFF;
  v27 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v27 = -134217728;
  }
  else if ( v27 >= 0x7FFFFFF )
  {
    v27 = 0x7FFFFFF;
  }
  v28 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v28 = -134217728;
  }
  else if ( v28 >= 0x7FFFFFF )
  {
    v28 = 0x7FFFFFF;
  }
  v29 = rc.top;
  if ( rc.top <= -134217728 )
  {
    v29 = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    v29 = 0x7FFFFFF;
  }
  v30 = rc.left;
  if ( rc.left <= -134217728 )
  {
    v30 = -134217728;
  }
  else if ( rc.left >= 0x7FFFFFF )
  {
    v30 = 0x7FFFFFF;
  }
  RoundRectRgn = CreateRoundRectRgn(
                   v30,
                   v29,
                   v28,
                   v27,
                   2 * *(_DWORD *)(*(_QWORD *)&v61.left + 1884LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v61.left + 1884LL));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v32 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    GeometryFromHRGN = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3970, 0xBu, v32, 0x127Bu);
      goto LABEL_68;
    }
    v34 = HrgnFromRects(&Src, 4u, &hrgnDst);
    GeometryFromHRGN = v34;
    if ( v34 < 0 )
    {
      v35 = hrgnDst;
      v36 = v34;
      v47 = 4737;
    }
    else
    {
      SetLastError(0);
      v35 = hrgnDst;
      if ( CombineRgn(hrgnDst, hrgnDst, hrgnSrc2, 1) )
      {
        GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v35, (struct CResource **)this + 68);
        v36 = GeometryFromHRGN;
        if ( GeometryFromHRGN >= 0 )
        {
          if ( v35 )
          {
            DeleteObject(v35);
            v35 = 0LL;
            hrgnDst = 0LL;
          }
          if ( v54 < 0 )
            v54 = 0;
          v37 = rc.left + v54;
          v38 = rc.top + v57;
          v61.left = rc.left + v54;
          v61.top = rc.top + v57;
          if ( v59 >= 0 )
            LODWORD(v2) = v59;
          v39 = rc.right - (_DWORD)v2;
          v40 = rc.top + v58;
          v61.right = v39;
          v61.bottom = rc.top + v58;
          SetLastError(0);
          if ( v40 <= -134217728 )
          {
            v40 = -134217728;
          }
          else if ( v40 >= 0x7FFFFFF )
          {
            v40 = 0x7FFFFFF;
          }
          if ( v39 <= -134217728 )
          {
            v39 = -134217728;
          }
          else if ( v39 >= 0x7FFFFFF )
          {
            v39 = 0x7FFFFFF;
          }
          if ( v38 <= -134217728 )
          {
            v38 = -134217728;
          }
          else if ( v38 >= 0x7FFFFFF )
          {
            v38 = 0x7FFFFFF;
          }
          if ( v37 <= -134217728 )
          {
            v37 = -134217728;
          }
          else if ( v37 >= 0x7FFFFFF )
          {
            goto LABEL_61;
          }
          v26 = v37;
LABEL_61:
          RectRgn = CreateRectRgn(v26, v38, v39, v40);
          v2 = RectRgn;
          if ( RectRgn )
          {
            GeometryFromHRGN = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
            v36 = GeometryFromHRGN;
            if ( GeometryFromHRGN < 0 )
            {
              v47 = 4754;
            }
            else
            {
              GeometryFromHRGN = HrgnFromRects(&v61, 1u, &hrgnDst);
              v36 = GeometryFromHRGN;
              if ( GeometryFromHRGN < 0 )
              {
                v35 = hrgnDst;
                v47 = 4760;
              }
              else
              {
                SetLastError(0);
                v35 = hrgnDst;
                if ( CombineRgn(hrgnDst, hrgnDst, v2, 1) )
                {
                  GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v35, (struct CResource **)this + 69);
                  v36 = GeometryFromHRGN;
                  if ( GeometryFromHRGN >= 0 )
                  {
                    if ( !v35 )
                      goto LABEL_68;
                    goto LABEL_67;
                  }
                  v47 = 4763;
                }
                else
                {
                  LastError = GetLastError();
                  GeometryFromHRGN = LastError;
                  if ( LastError > 0 )
                    GeometryFromHRGN = (unsigned __int16)LastError | 0x80070000;
                  if ( GeometryFromHRGN >= 0 )
                    GeometryFromHRGN = -2003304445;
                  v47 = 4762;
                  v36 = GeometryFromHRGN;
                }
              }
            }
          }
          else
          {
            v49 = GetLastError();
            GeometryFromHRGN = v49;
            if ( v49 > 0 )
              GeometryFromHRGN = (unsigned __int16)v49 | 0x80070000;
            if ( GeometryFromHRGN >= 0 )
              GeometryFromHRGN = CheckGUIHandleQuota(v51, v50, v52);
            v36 = GeometryFromHRGN;
            v47 = 4752;
          }
          goto LABEL_119;
        }
        v47 = 4740;
      }
      else
      {
        v48 = GetLastError();
        GeometryFromHRGN = v48;
        if ( v48 > 0 )
          GeometryFromHRGN = (unsigned __int16)v48 | 0x80070000;
        if ( GeometryFromHRGN >= 0 )
          GeometryFromHRGN = -2003304445;
        v47 = 4739;
        v36 = GeometryFromHRGN;
      }
    }
LABEL_119:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3970, 0xBu, v36, v47);
    if ( v35 )
LABEL_67:
      DeleteObject(v35);
LABEL_68:
    DeleteObject(hrgnSrc2);
    if ( v2 )
      DeleteObject(v2);
    return (unsigned int)GeometryFromHRGN;
  }
  v43 = GetLastError();
  GeometryFromHRGN = v43;
  if ( v43 > 0 )
    GeometryFromHRGN = (unsigned __int16)v43 | 0x80070000;
  if ( GeometryFromHRGN >= 0 )
    GeometryFromHRGN = CheckGUIHandleQuota(v45, v44, v46);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3970, 0xBu, GeometryFromHRGN, 0x1279u);
  return (unsigned int)GeometryFromHRGN;
}
