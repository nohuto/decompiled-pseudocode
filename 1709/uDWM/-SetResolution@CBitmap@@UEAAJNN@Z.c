/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180044400
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1800435C8 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?SetResolution@CBitmap@@WBA@EAAJNN@Z @ 0x1800468C0 (-SetResolution@CBitmap@@WBA@EAAJNN@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180044504 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm1_4
  bool v7; // zf
  int v8; // eax
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = ((unsigned __int64)this + 88) & -(__int64)(this != (CBitmap *)24);
  v10 = v4;
  if ( *(_BYTE *)(v4 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v5 = a2;
  v6 = a3;
  *((float *)this + 42) = v5;
  *((float *)this + 43) = v6;
  v7 = (*((_DWORD *)this + 36))++ == -1;
  v8 = *((_DWORD *)this + 36);
  if ( v7 )
    v8 = 1;
  *((_DWORD *)this + 36) = v8;
  CGuard<CMTALock>::~CGuard<CMTALock>(&v10);
  return 0LL;
}
