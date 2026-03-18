/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D974
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D54C (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18007F140 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180088C68 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  unsigned int *v4; // r8
  signed int v5; // eax
  int v7; // [rsp+30h] [rbp-59h] BYREF
  HGDIOBJ ho; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-49h] BYREF
  HGDIOBJ *p_ho; // [rsp+50h] [rbp-39h]
  int *v11; // [rsp+80h] [rbp-9h] BYREF
  int v12; // [rsp+88h] [rbp-1h] BYREF

  v1 = 0;
  ho = 0LL;
  memset_0(v9, 0, 0x38uLL);
  v3 = *((_QWORD *)this + 10);
  p_ho = &ho;
  v7 = 56;
  if ( (int)CRedirectedGDISurface::GetInformation(v3, 0, &v7, (__int64)v9) >= 0 )
  {
    if ( !ho )
      return v1;
    v12 = 0;
    v11 = &v12;
    CRegion::SetHRGN((CRegion *)&v11, (HRGN)ho, v4);
    v5 = CGdiSpriteBitmap::AddDirtyRegion(this, (const struct FastRegion::Internal::CRgnData **)&v11);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x2B6u);
    FastRegion::CRegion::FreeMemory((void **)&v11);
  }
  if ( ho )
    DeleteObject(ho);
  return v1;
}
