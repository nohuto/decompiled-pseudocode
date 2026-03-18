/*
 * XREFs of xxxInternalInvalidate @ 0x1C0069C80
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0121738 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0125B50 (xxxInvalidateWallpaperWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01B7978 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B8680 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01C4EEC (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01EFA30 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     UserRedrawDesktop @ 0x1C020CFB4 (UserRedrawDesktop.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C006A4F4 (IntersectWithParents.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     CalcWindowRgn @ 0x1C00800C0 (CalcWindowRgn.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoSyncPaint @ 0x1C00E3344 (xxxDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01F0058 (SpbCheckRect.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  struct tagWND *v6; // rdi
  HRGN v7; // r14
  struct tagRECT v8; // xmm0
  HRGN v9; // r15
  HRGN RectRgnIndirect; // rax
  __int64 StyleWindow; // [rsp+38h] [rbp-38h]
  struct tagWND *v12; // [rsp+40h] [rbp-30h]
  struct tagRECT v13; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v14; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v4 = a3;
  StyleWindow = 0LL;
  v12 = 0LL;
  v6 = a1;
  v7 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    StyleWindow = GetStyleWindow(a1, 2818LL);
    if ( StyleWindow )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((char *)v6 + 128);
        v7 = RectRgnIndirect;
        if ( RectRgnIndirect )
          a2 = RectRgnIndirect;
      }
      v12 = v6;
      v4 |= 0x80u;
      v6 = (struct tagWND *)StyleWindow;
    }
  }
  if ( (((v4 & 1) != 0) & (*((_BYTE *)v6 + 66) >> 3)) != 0 )
    *((_DWORD *)v6 + 76) |= 2u;
  if ( (v4 & 0x400) != 0 )
    v8 = (struct tagRECT)*((_OWORD *)v6 + 8);
  else
    v8 = (struct tagRECT)*((_OWORD *)v6 + 9);
  v13 = v8;
  if ( (v4 & 9) != 0 )
  {
    v9 = a2;
    if ( a2 == (HRGN)1 )
    {
      v9 = (HRGN)ghrgnInv1;
      CalcWindowRgn(v6, ghrgnInv1, (v4 & 0x400) == 0);
    }
  }
  else
  {
    v9 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1);
  }
  if ( (v4 & 9) == 0 || (v4 & 1) == 0 || (unsigned int)IntersectWithParents(v6, &v13) )
  {
    if ( (v4 & 0x1001) == 0x1001 )
    {
      if ( *(_QWORD *)(gpDispInfo + 24LL) )
      {
        *(_QWORD *)&v14.left = 0LL;
        *(_QWORD *)&v14.right = 0LL;
        if ( (unsigned int)GreGetRgnBox(v9, &v14) )
        {
          IntersectRect(&v14, &v14, &v13);
          SpbCheckRect(v6, &v14, 0);
        }
      }
    }
    InternalInvalidate2(v6, a2, v9, &v13, v4);
    if ( StyleWindow )
    {
      v6 = v12;
      if ( v7 )
        GreDeleteObject(v7);
    }
    if ( (v4 & 0x100) != 0 )
    {
      xxxInternalUpdateWindow(v6, (v4 & 0x40) == 0);
    }
    else if ( (v4 & 0x200) != 0 )
    {
      if ( (v4 & 0x40) == 0 )
        v3 = (v4 & 0x80u) != 0 ? 32 : 4;
      xxxDoSyncPaint(v6, v3);
    }
  }
}
