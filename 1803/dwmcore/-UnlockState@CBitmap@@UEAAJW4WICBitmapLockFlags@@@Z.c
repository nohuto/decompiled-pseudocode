/*
 * XREFs of ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180081B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::UnlockState(CBitmap *this, enum WICBitmapLockFlags a2)
{
  char *v2; // rbx
  char v3; // di
  LPCRITICAL_SECTION v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 32;
  v3 = a2;
  v5 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 88) & -(__int64)(this != (CBitmap *)32));
  EnterCriticalSection(v5);
  if ( (v3 & 2) != 0 )
  {
    *((_DWORD *)v2 + 49) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v2 + 49);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  return 0LL;
}
