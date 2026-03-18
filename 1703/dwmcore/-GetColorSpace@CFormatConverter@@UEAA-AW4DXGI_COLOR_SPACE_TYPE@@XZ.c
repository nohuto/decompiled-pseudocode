/*
 * XREFs of ?GetColorSpace@CFormatConverter@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801AB5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C69E0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CFormatConverter::GetColorSpace(CFormatConverter *this)
{
  enum DXGI_COLOR_SPACE_TYPE v3; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 8) & -(__int64)(this != (CFormatConverter *)16));
  EnterCriticalSection(v4);
  GetPixelFormatColorSpace(*((_DWORD *)this + 17), &v3);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  return (unsigned int)v3;
}
