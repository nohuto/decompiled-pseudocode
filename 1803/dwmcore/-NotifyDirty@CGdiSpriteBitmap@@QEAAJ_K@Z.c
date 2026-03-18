/*
 * XREFs of ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180094D04
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800204B0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x18018EC60 (-ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFY.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18001F9EC (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18007D794 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::NotifyDirty(CGdiSpriteBitmap *this, __int64 a2)
{
  int v2; // edi
  __int64 v5; // rcx
  unsigned int *v6; // r8
  int v7; // eax
  void *v8; // r11
  unsigned int v10; // [rsp+30h] [rbp-69h] BYREF
  HRGN hrgn; // [rsp+38h] [rbp-61h] BYREF
  int v12; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-51h] BYREF
  int *v14; // [rsp+80h] [rbp-19h] BYREF
  int v15; // [rsp+88h] [rbp-11h] BYREF

  v2 = 0;
  hrgn = 0LL;
  v10 = 0;
  memset_0(v13, 0, sizeof(v13));
  v5 = *((_QWORD *)this + 10);
  v13[1] = &hrgn;
  v12 = 56;
  v13[0] = a2;
  if ( (int)CRedirectedGDISurface::GetInformation(v5, 0, &v12, (__int64)v13) >= 0 && hrgn )
  {
    v15 = 0;
    v14 = &v15;
    CRegion::SetHRGN((CRegion *)&v14, hrgn, v6);
    v7 = CGdiSpriteBitmap::AddDirtyRegion(this, &v14);
    v10 = v7;
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277288, 4u, v7, 0xC5u);
    FastRegion::CRegion::FreeMemory((void **)&v14);
  }
  TranslateDXGIorD3DErrorInContext(v2, 12, &v10);
  if ( v8 )
    DeleteObject(v8);
  return v10;
}
