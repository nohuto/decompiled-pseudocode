/*
 * XREFs of s_OnMeasureItem @ 0x18030DF18
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18030CC18 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D094 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z @ 0x18030C944 (--0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18030C9A8 (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18030E770 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x18030F41C (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18030F64C (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

__int64 __fastcall s_OnMeasureItem(HWND hwnd, __int64 a2, char a3, unsigned int a4)
{
  signed int Error; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // r14
  const WCHAR *v8; // rdx
  void *v9; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rdx
  HWND WindowW; // rax
  HWND v13; // rbx
  LONG WindowLongW; // eax
  HFONT v15; // rax
  HFONT v16; // rbx
  HDC v17; // rsi
  HGDIOBJ v18; // rdi
  __int64 v19; // rdx
  double v20; // xmm0_8
  int v21; // eax
  __int64 v22; // rdx
  int ThemeTextExtentPPI; // [rsp+74h] [rbp-8Ch]
  HTHEME v26; // [rsp+78h] [rbp-88h]
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  HDC hdc; // [rsp+98h] [rbp-68h]
  LOGFONTW lf; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD pvParam[56]; // [rsp+110h] [rbp+10h] BYREF
  LOGFONTW v31; // [rsp+1F0h] [rbp+F0h]

  Error = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 24),
                             *(unsigned int *)(a2 + 8),
                             a4);
  if ( ContextMenuDataForItem )
  {
    v8 = L"ImmersiveStartDark::Menu";
    if ( !*((_BYTE *)ContextMenuDataForItem + 68) )
      v8 = L"ImmersiveStart::Menu";
    v26 = OpenThemeData(0LL, v8);
    v9 = v26;
    if ( v26 )
    {
      v10 = 2;
      if ( !MonitorFromWindow(hwnd, 2u) )
      {
LABEL_47:
        CloseThemeData(v9);
        return (unsigned int)Error;
      }
      if ( *((_DWORD *)ContextMenuDataForItem + 6) == 2048 )
      {
        if ( *((_BYTE *)ContextMenuDataForItem + 68) || (v11 = 7LL, (*((_BYTE *)ContextMenuDataForItem + 56) & 4) != 0) )
          v11 = 9LL;
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)ContextMenuDataForItem + 15),
                                 v11,
                                 hwnd,
                                 *((unsigned int *)ContextMenuDataForItem + 16));
        goto LABEL_47;
      }
      WindowW = FindWindowW(L"#32768", 0LL);
      v13 = WindowW;
      if ( !WindowW )
      {
LABEL_37:
        v21 = *((_DWORD *)ContextMenuDataForItem + 14);
        if ( (v21 & 1) != 0 )
        {
          if ( *((_BYTE *)ContextMenuDataForItem + 68) || (v22 = 2LL, (v21 & 4) != 0) )
            v22 = 6LL;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)ContextMenuDataForItem + 15),
                                    v22,
                                    hwnd,
                                    *((unsigned int *)ContextMenuDataForItem + 16));
          v21 = *((_DWORD *)ContextMenuDataForItem + 14);
        }
        if ( (v21 & 2) != 0 )
        {
          if ( *((_BYTE *)ContextMenuDataForItem + 68) || (v21 & 4) != 0 )
            v10 = 6;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)ContextMenuDataForItem + 15),
                                    v10,
                                    hwnd,
                                    *((unsigned int *)ContextMenuDataForItem + 16));
        }
        goto LABEL_47;
      }
      WindowLongW = GetWindowLongW(WindowW, -20);
      if ( a3 && (WindowLongW & 0x400000) == 0 )
        SetWindowLongW(v13, -20, WindowLongW | 0x400000);
      Microsoft::WRL::Wrappers::ClientDC::ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v27, v13);
      if ( !hdc
        || (memset_0(pvParam, 0, 0x1F8uLL), pvParam[0] = 504, !SystemParametersInfoW(0x29u, 0x1F8u, pvParam, 0))
        && (Error = ResultFromKnownLastError(), Error < 0) )
      {
LABEL_36:
        Microsoft::WRL::Wrappers::ClientDC::~ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v27);
        goto LABEL_37;
      }
      if ( GetThemeFont(v26, 0LL, 14, 0, 210, &lf) < 0 )
      {
        lf = v31;
      }
      else
      {
        if ( v31.lfHeight <= 0 )
        {
          if ( v31.lfHeight >= lf.lfHeight )
            goto LABEL_25;
        }
        else if ( v31.lfHeight <= lf.lfHeight )
        {
          goto LABEL_25;
        }
        lf.lfHeight = v31.lfHeight;
      }
LABEL_25:
      v15 = CreateFontIndirectW(&lf);
      v16 = v15;
      if ( v15 )
      {
        v17 = hdc;
        v18 = SelectObject(hdc, v15);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(ContextMenuDataForItem);
        ThemeTextExtentPPI = DPIToPPIHelpers::GetThemeTextExtentPPI(
                               hwnd,
                               *((unsigned int *)ContextMenuDataForItem + 15),
                               (char *)ContextMenuDataForItem + 64,
                               v26,
                               hdc);
        SelectObject(v17, v18);
        DeleteObject(v16);
        Error = ThemeTextExtentPPI;
        if ( ThemeTextExtentPPI >= 0 )
        {
          *(_DWORD *)(a2 + 12) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)ContextMenuDataForItem + 15),
                                   93LL,
                                   hwnd,
                                   *((unsigned int *)ContextMenuDataForItem + 16));
          if ( (*((_BYTE *)ContextMenuDataForItem + 56) & 4) != 0 )
          {
            v19 = 36LL;
          }
          else
          {
            if ( *((_BYTE *)ContextMenuDataForItem + 68) )
              v20 = DOUBLE_24_0;
            else
              v20 = DOUBLE_14_0;
            v19 = (unsigned int)(int)v20;
          }
          *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)ContextMenuDataForItem + 15),
                                   v19,
                                   hwnd,
                                   *((unsigned int *)ContextMenuDataForItem + 16));
        }
        v9 = v26;
      }
      else
      {
        Error = -2147467259;
      }
      goto LABEL_36;
    }
  }
  return (unsigned int)Error;
}
