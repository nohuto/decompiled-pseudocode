/*
 * XREFs of ?GetColorSpace@CBitmapLock@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18007E780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetColorSpace(CBitmapLock *this)
{
  CBitmapLock *v1; // rbx
  LPCRITICAL_SECTION v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  v3 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 16) & -(__int64)(this != (CBitmapLock *)16));
  EnterCriticalSection(v3);
  LODWORD(v1) = *((_DWORD *)v1 + 23);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  return (unsigned int)v1;
}
