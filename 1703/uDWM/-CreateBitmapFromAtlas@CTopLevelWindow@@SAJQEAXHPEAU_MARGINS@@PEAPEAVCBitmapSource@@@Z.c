/*
 * XREFs of ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18004485C
 * Callers:
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180040FB0 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180044A50 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008BD90 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008C930 (-Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008D220 (-Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008D800 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008DE0C (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E840 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180044950 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180045B98 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapFromAtlas(
        void *const a1,
        int iPartId,
        struct _MARGINS *pMargins,
        struct CBitmapSource **a4)
{
  HRESULT ThemeMargins; // eax
  unsigned int v9; // ebx
  HRESULT ThemeRect; // eax
  const struct CBitmapSource *AtlasImageFromTheme; // rax
  int v12; // eax
  struct tagRECT pRect; // [rsp+40h] [rbp-48h] BYREF

  if ( (dword_1800C11B4 & 1) == 0 )
  {
    dword_1800C1168 = -2147023728;
    dword_1800C11B4 |= 1u;
  }
  if ( pMargins
    && (ThemeMargins = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, pMargins), v9 = ThemeMargins, ThemeMargins < 0) )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800C1168, 1u, ThemeMargins, 0x1A0u);
  }
  else
  {
    ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
    v9 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800C1168, 1u, ThemeRect, 0x1A4u);
    }
    else
    {
      InflateRect(&pRect, -1, -1);
      AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
      v12 = CBitmapSource::Create(AtlasImageFromTheme, &pRect, pMargins, a4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800C1168, 1u, v12, 0x1ACu);
    }
  }
  return v9;
}
