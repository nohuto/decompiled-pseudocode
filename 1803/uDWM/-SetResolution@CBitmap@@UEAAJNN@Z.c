/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180046FB0
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1800462B8 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?SetResolution@CBitmap@@WBA@EAAJNN@Z @ 0x18004B4E0 (-SetResolution@CBitmap@@WBA@EAAJNN@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800470A4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm1_4
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = ((unsigned __int64)this + 88) & -(__int64)(this != (CBitmap *)24);
  v9 = v4;
  if ( *(_BYTE *)(v4 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v5 = a2;
  v6 = a3;
  *((float *)this + 42) = v5;
  *((float *)this + 43) = v6;
  if ( (*((_DWORD *)this + 36))++ == -1 )
    ++*((_DWORD *)this + 36);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v9);
  return 0LL;
}
