/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x1801A9BF0
 * Callers:
 *     ?SetResolution@CBitmap@@WBA@EAAJNN@Z @ 0x1800D5690 (-SetResolution@CBitmap@@WBA@EAAJNN@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1801AA670 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  bool v6; // zf
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CBitmap *)24));
  EnterCriticalSection(v9);
  v4 = a2;
  v5 = a3;
  *((float *)this + 38) = v4;
  *((float *)this + 39) = v5;
  v6 = (*((_DWORD *)this + 22))++ == -1;
  v7 = *((_DWORD *)this + 22);
  if ( v6 )
    v7 = 1;
  *((_DWORD *)this + 22) = v7;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return 0LL;
}
