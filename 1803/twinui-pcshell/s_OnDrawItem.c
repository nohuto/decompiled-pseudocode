/*
 * XREFs of s_OnDrawItem @ 0x18030D588
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18030CC18 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     floorf_0 @ 0x1800A2777 (floorf_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x1802EE63C (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x18030C978 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18030C9D8 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18030CBB8 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_DrawGlyph @ 0x18030CCFC (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x18030CF98 (s_DrawThemeTextPPIAware.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18030E770 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18030F64C (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

__int64 __fastcall s_OnDrawItem(HWND hwnd, __int64 a2, __int64 a3, unsigned int a4)
{
  int ScaleFactorForWindow; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rsi
  const WCHAR *v8; // rdx
  int v9; // ecx
  int v10; // r12d
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // ebx
  HDC v14; // rdx
  HGDIOBJ *v15; // r13
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // r13d
  int v24; // r12d
  bool v25; // zf
  int v26; // r8d
  int v27; // r9d
  int *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // ebx
  int v32; // eax
  HDC v33; // r9
  COLORREF v34; // edx
  int v35; // eax
  int Error; // eax
  int v37; // r8d
  int v38; // r9d
  int *v39; // rax
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // ebx
  int v43; // eax
  int v44; // eax
  int v45; // r12d
  int v46; // eax
  int v47; // r13d
  int v48; // ebx
  SHSTOCKICONID v49; // ecx
  int v50; // ebx
  void *v51; // rbx
  int v52; // eax
  int v53; // r12d
  int v54; // edi
  __int64 v55; // r9
  __int64 v56; // rcx
  int v57; // r8d
  int v58; // ecx
  int v59; // r12d
  HDC v60; // r13
  HDC v61; // rcx
  BOOL v62; // eax
  int v63; // ebx
  HDC v64; // rcx
  int v65; // r12d
  __int64 v66; // r9
  __int64 v67; // rcx
  int v68; // edi
  int v69; // r8d
  int v70; // r9d
  int *v71; // rax
  __int64 v72; // r9
  __int64 v73; // rcx
  int v74; // ebx
  int v75; // eax
  HDC v76; // r9
  COLORREF v77; // edx
  int v78; // ecx
  unsigned int v79; // eax
  __int64 v80; // r9
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rdx
  int v84; // eax
  float v85; // xmm0_4
  HDC v86; // rdx
  __int16 pClipRect; // [rsp+28h] [rbp-D8h]
  int pClipRecta; // [rsp+28h] [rbp-D8h]
  UINT diFlags; // [rsp+40h] [rbp-C0h]
  char v91; // [rsp+60h] [rbp-A0h]
  int nDenominator; // [rsp+64h] [rbp-9Ch] BYREF
  int nNumerator; // [rsp+68h] [rbp-98h]
  int yTop; // [rsp+6Ch] [rbp-94h]
  int iStateId; // [rsp+70h] [rbp-90h]
  HDC hdc[2]; // [rsp+80h] [rbp-80h] BYREF
  int v97; // [rsp+90h] [rbp-70h]
  int v98; // [rsp+94h] [rbp-6Ch] BYREF
  HTHEME hTheme; // [rsp+98h] [rbp-68h]
  COLORREF pColor; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE pv[4]; // [rsp+A8h] [rbp-58h] BYREF
  int nNumber; // [rsp+ACh] [rbp-54h]
  int hSrc; // [rsp+B0h] [rbp-50h]
  SHSTOCKICONINFO psii; // [rsp+D0h] [rbp-30h] BYREF
  HGDIOBJ h[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v106[46]; // [rsp+300h] [rbp+200h] BYREF
  __int16 v107; // [rsp+32Eh] [rbp+22Eh]
  int v108; // [rsp+330h] [rbp+230h]

  ScaleFactorForWindow = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 56),
                             *(unsigned int *)(a2 + 8),
                             a4);
  if ( ContextMenuDataForItem )
  {
    if ( MonitorFromWindow(hwnd, 2u) )
    {
      ScaleFactorForWindow = GetScaleFactorForWindow(hwnd, &v98);
      if ( ScaleFactorForWindow >= 0 )
      {
        v8 = L"ImmersiveStartDark::Menu";
        if ( !*((_BYTE *)ContextMenuDataForItem + 68) )
          v8 = L"ImmersiveStart::Menu";
        hTheme = OpenThemeData(0LL, v8);
        if ( hTheme )
        {
          v9 = *((_DWORD *)ContextMenuDataForItem + 14);
          v10 = *(_DWORD *)(a2 + 16);
          v11 = 6;
          if ( (v9 & 1) != 0 )
          {
            if ( *((_BYTE *)ContextMenuDataForItem + 68) || (v12 = 2LL, (v9 & 4) != 0) )
              v12 = 6LL;
            *(_DWORD *)(a2 + 44) += DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v12,
                                      hwnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
            v9 = *((_DWORD *)ContextMenuDataForItem + 14);
          }
          if ( (v9 & 2) != 0 )
          {
            if ( !*((_BYTE *)ContextMenuDataForItem + 68) && (v9 & 4) == 0 )
              v11 = 2;
            *(_DWORD *)(a2 + 52) -= DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v11,
                                      hwnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
          }
          if ( (v10 & 4) != 0 )
          {
            if ( (v10 & 1) != 0 && *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
              v13 = 4;
            else
              v13 = 3;
          }
          else if ( (v10 & 1) == 0
                 || !*(_QWORD *)ContextMenuDataForItem
                 || (v13 = 2, !**(_WORD **)ContextMenuDataForItem) )
          {
            v13 = 1;
          }
          v14 = *(HDC *)(a2 + 32);
          v15 = (HGDIOBJ *)(a2 + 40);
          iStateId = v13;
          ScaleFactorForWindow = DrawThemeBackground(hTheme, v14, 14, v13, (LPCRECT)(a2 + 40), 0LL);
          if ( ScaleFactorForWindow < 0 )
            goto LABEL_86;
          if ( *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
          {
            if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
            {
              v16 = *((unsigned int *)ContextMenuDataForItem + 16);
              v17 = *((unsigned int *)ContextMenuDataForItem + 15);
              v18 = *(_DWORD *)v15;
              v19 = *(_DWORD *)(a2 + 48);
              HIDWORD(hdc[0]) = *(_DWORD *)(a2 + 44);
              HIDWORD(hdc[1]) = *(_DWORD *)(a2 + 52);
              v20 = DPIToPPIHelpers::ScaleByType(v17, 32LL, hwnd, v16);
              v21 = *((unsigned int *)ContextMenuDataForItem + 16);
              v22 = *((unsigned int *)ContextMenuDataForItem + 15);
              LODWORD(hdc[0]) = v18 + v20;
              v23 = iStateId;
              LODWORD(hdc[1]) = v19 - DPIToPPIHelpers::ScaleByType(v22, 17LL, hwnd, v21);
              ScaleFactorForWindow = s_DrawThemeTextPPIAware(
                                       hTheme,
                                       (unsigned int)iStateId,
                                       (__int64)hwnd,
                                       a2,
                                       (__int64)ContextMenuDataForItem,
                                       (int *)hdc);
              if ( ScaleFactorForWindow < 0 )
                goto LABEL_86;
              v97 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
              v24 = v10 & 8;
              if ( !v24 || *((_QWORD *)ContextMenuDataForItem + 5) )
              {
                if ( *((_DWORD *)ContextMenuDataForItem + 7) == -1 )
                {
                  v51 = (void *)*((_QWORD *)ContextMenuDataForItem + 4);
                  if ( v51
                    || v24 && (v51 = (void *)*((_QWORD *)ContextMenuDataForItem + 5)) != 0LL
                    || (v51 = (void *)*((_QWORD *)ContextMenuDataForItem + 6)) != 0LL )
                  {
                    ScaleFactorForWindow = -2147467259;
                    if ( !GetObjectW(v51, 32, pv) )
                      goto LABEL_86;
                    Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                      (Microsoft::WRL::Wrappers::CompatibleDC *)hdc,
                      *(HDC *)(a2 + 32));
                    if ( hdc[1] || (ScaleFactorForWindow = ResultFromKnownLastError(), ScaleFactorForWindow >= 0) )
                    {
                      v52 = DPIToPPIHelpers::ScaleByType(
                              *((unsigned int *)ContextMenuDataForItem + 15),
                              16LL,
                              hwnd,
                              *((unsigned int *)ContextMenuDataForItem + 16));
                      v53 = hSrc;
                      v54 = nNumber;
                      v91 = 0;
                      if ( hSrc > v52 || nNumber > v52 )
                      {
                        nNumerator = *((_DWORD *)ContextMenuDataForItem + 16);
                        SHComputeDPI(0LL, &nDenominator, 0LL);
                        if ( nDenominator > nNumerator )
                        {
                          v91 = 1;
                          v54 = MulDiv(v54, nNumerator, nDenominator);
                          v53 = MulDiv(v53, nNumerator, nDenominator);
                        }
                      }
                      v55 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v56 = *((unsigned int *)ContextMenuDataForItem + 15);
                      nDenominator = *(_DWORD *)(a2 + 44);
                      yTop = v53 + nDenominator;
                      v57 = DPIToPPIHelpers::ScaleByType(v56, 16LL, hwnd, v55);
                      if ( v57 > v54 )
                      {
                        v91 = 1;
                        v57 = 2 * v57 - v54;
                      }
                      v58 = (v97 - v53) / 2;
                      v59 = v58 + yTop;
                      nNumerator = v57 / 2;
                      yTop = v58 + nDenominator;
                      pColor = 0;
                      GetThemeColor(hTheme, 14, v23, 3803, &pColor);
                      v60 = hdc[1];
                      h[0] = SelectObject(hdc[1], v51);
                      if ( GetObjectW(v51, 104, v106) == 104 && v107 == 32 && !v108 )
                      {
                        v61 = *(HDC *)(a2 + 32);
                        nDenominator = 33488896;
                        v62 = GdiAlphaBlend(
                                v61,
                                nNumerator,
                                yTop,
                                v54,
                                v59 - yTop,
                                hdc[1],
                                0,
                                0,
                                nNumber,
                                hSrc,
                                (BLENDFUNCTION)33488896);
                      }
                      else
                      {
                        v63 = yTop;
                        v64 = *(HDC *)(a2 + 32);
                        v65 = v59 - yTop;
                        if ( v91 )
                        {
                          SetStretchBltMode(v64, 3);
                          v62 = StretchBlt(
                                  *(HDC *)(a2 + 32),
                                  nNumerator,
                                  v63,
                                  v54,
                                  v65,
                                  hdc[1],
                                  0,
                                  0,
                                  nNumber,
                                  hSrc,
                                  0xCC0020u);
                        }
                        else
                        {
                          v62 = BitBlt(v64, nNumerator, yTop, v54, v65, hdc[1], 0, 0, 0xCC0020u);
                        }
                      }
                      if ( v62 )
                        ScaleFactorForWindow = 0;
                      else
                        ScaleFactorForWindow = ResultFromKnownLastError();
                      SelectObject(v60, h[0]);
                    }
                    Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
                  }
                  goto LABEL_75;
                }
                v25 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                *(__m128i *)h = _mm_load_si128((const __m128i *)&_xmm);
                if ( v25 )
                {
                  v37 = v98;
                  v38 = 100;
                }
                else
                {
                  v37 = *((_DWORD *)ContextMenuDataForItem + 16);
                  v38 = 96;
                }
                v39 = Geometry::CRect::MulDiv((int *)hdc, (int *)h, v37, v38);
                v40 = *((unsigned int *)ContextMenuDataForItem + 16);
                v41 = *((unsigned int *)ContextMenuDataForItem + 15);
                v42 = *(_DWORD *)(a2 + 44);
                *(_OWORD *)h = *(_OWORD *)v39;
                v43 = DPIToPPIHelpers::ScaleByType(v41, 16LL, hwnd, v40);
                v44 = v97 / 2 - v43 / 2;
                v45 = v42 + v44 + HIDWORD(h[1]);
                yTop = v42 + HIDWORD(h[0]) + v44;
                if ( *((_DWORD *)ContextMenuDataForItem + 15) )
                {
                  v48 = (int)h[1];
                  v47 = (int)h[0];
                }
                else
                {
                  v46 = (int)DPIToPPIHelpers::ScaleByType(
                               0LL,
                               16LL,
                               hwnd,
                               *((unsigned int *)ContextMenuDataForItem + 16))
                      / 2;
                  v47 = v46 + LODWORD(h[0]);
                  v48 = v46 + LODWORD(h[1]);
                }
                memset_0(&psii, 0, sizeof(psii));
                v49 = *((_DWORD *)ContextMenuDataForItem + 7);
                psii.cbSize = 544;
                v50 = v48 - v47;
                if ( SHGetStockIconInfo(v49, (v50 < 24) + 256, &psii) < 0 )
                {
LABEL_75:
                  if ( ScaleFactorForWindow >= 0 )
                  {
LABEL_76:
                    if ( (*((_BYTE *)ContextMenuDataForItem + 24) & 0x10) != 0 )
                    {
                      v66 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v67 = *((unsigned int *)ContextMenuDataForItem + 15);
                      *(__m128i *)h = _mm_load_si128((const __m128i *)&_xmm);
                      v68 = *(_DWORD *)(a2 + 48) - DPIToPPIHelpers::ScaleByType(v67, 28LL, hwnd, v66);
                      if ( *((_DWORD *)ContextMenuDataForItem + 15) == 1 )
                      {
                        v69 = v98;
                        v70 = 100;
                      }
                      else
                      {
                        v69 = *((_DWORD *)ContextMenuDataForItem + 16);
                        v70 = 96;
                      }
                      v71 = Geometry::CRect::MulDiv((int *)hdc, (int *)h, v69, v70);
                      v72 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v73 = *((unsigned int *)ContextMenuDataForItem + 15);
                      v74 = *(_DWORD *)(a2 + 44);
                      *(_OWORD *)h = *(_OWORD *)v71;
                      LODWORD(h[0]) += v68;
                      LODWORD(h[1]) += v68;
                      v75 = DPIToPPIHelpers::ScaleByType(v73, 16LL, hwnd, v72);
                      v76 = *(HDC *)(a2 + 32);
                      v77 = *((_DWORD *)ContextMenuDataForItem + 16);
                      v78 = v97 / 2 - v75 / 2 + v74;
                      HIDWORD(h[0]) += v78;
                      v79 = *((_DWORD *)ContextMenuDataForItem + 15);
                      HIDWORD(h[1]) += v78;
                      pClipRecta = *((_DWORD *)ContextMenuDataForItem + 6);
                      *(_OWORD *)hdc = *(_OWORD *)h;
                      ScaleFactorForWindow = s_DrawGlyph(
                                               hwnd,
                                               v77,
                                               hTheme,
                                               v76,
                                               16,
                                               pClipRecta,
                                               iStateId,
                                               (struct tagRECT *)hdc,
                                               v79);
                    }
                  }
LABEL_86:
                  ExcludeClipRect(
                    *(HDC *)(a2 + 32),
                    *(_DWORD *)(a2 + 40),
                    *(_DWORD *)(a2 + 44),
                    *(_DWORD *)(a2 + 48),
                    *(_DWORD *)(a2 + 52));
                  CloseThemeData(hTheme);
                  return (unsigned int)ScaleFactorForWindow;
                }
                if ( DrawIconEx(*(HDC *)(a2 + 32), v47, yTop, psii.hIcon, v50, v45 - yTop, 0, 0LL, 3u) )
                {
                  ScaleFactorForWindow = 0;
                  goto LABEL_76;
                }
                Error = ResultFromKnownLastError();
              }
              else
              {
                v25 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                *(__m128i *)h = _mm_load_si128((const __m128i *)&_xmm);
                if ( v25 )
                {
                  v26 = v98;
                  v27 = 100;
                }
                else
                {
                  v26 = *((_DWORD *)ContextMenuDataForItem + 16);
                  v27 = 96;
                }
                v28 = Geometry::CRect::MulDiv((int *)hdc, (int *)h, v26, v27);
                v29 = *((unsigned int *)ContextMenuDataForItem + 16);
                v30 = *((unsigned int *)ContextMenuDataForItem + 15);
                v31 = *(_DWORD *)(a2 + 44);
                *(_OWORD *)h = *(_OWORD *)v28;
                v32 = DPIToPPIHelpers::ScaleByType(v30, 16LL, hwnd, v29);
                v33 = *(HDC *)(a2 + 32);
                v34 = *((_DWORD *)ContextMenuDataForItem + 16);
                v35 = v97 / 2 - v32 / 2;
                HIDWORD(h[1]) += v31 + v35;
                diFlags = *((_DWORD *)ContextMenuDataForItem + 15);
                HIDWORD(h[0]) += v31 + v35;
                pClipRect = *((_DWORD *)ContextMenuDataForItem + 6);
                *(_OWORD *)hdc = *(_OWORD *)h;
                Error = s_DrawGlyph(hwnd, v34, hTheme, v33, 11, pClipRect, iStateId, (struct tagRECT *)hdc, diFlags);
              }
              ScaleFactorForWindow = Error;
              goto LABEL_75;
            }
          }
          else if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
          {
            goto LABEL_86;
          }
          v80 = *((unsigned int *)ContextMenuDataForItem + 16);
          v81 = *((unsigned int *)ContextMenuDataForItem + 15);
          h[0] = *v15;
          h[1] = *(HGDIOBJ *)(a2 + 48);
          v82 = DPIToPPIHelpers::ScaleByType(v81, 8LL, hwnd, v80);
          LODWORD(h[0]) += v82;
          LODWORD(h[1]) -= v82;
          if ( *((_BYTE *)ContextMenuDataForItem + 68)
            || (v83 = 7LL, (*((_BYTE *)ContextMenuDataForItem + 56) & 4) != 0) )
          {
            v83 = 9LL;
          }
          v84 = DPIToPPIHelpers::ScaleByType(
                  *((unsigned int *)ContextMenuDataForItem + 15),
                  v83,
                  hwnd,
                  *((unsigned int *)ContextMenuDataForItem + 16));
          v85 = floorf_0((double)(v84 - 5) * 0.5);
          --HIDWORD(h[1]);
          v86 = *(HDC *)(a2 + 32);
          HIDWORD(h[0]) += (int)v85;
          DrawThemeBackground(hTheme, v86, 15, v13, (LPCRECT)h, 0LL);
          goto LABEL_86;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
