/*
 * XREFs of ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18003FF50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::UnlockState(CBitmap *this, enum WICBitmapLockFlags a2)
{
  char *v2; // rbx
  char v3; // di
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 32;
  v3 = a2;
  v4 = ((unsigned __int64)this + 80) & -(__int64)(this != (CBitmap *)32);
  v6 = v4;
  if ( *(_BYTE *)(v4 + 0x30) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( (v3 & 2) != 0 )
  {
    *((_DWORD *)v2 + 53) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v2 + 53);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v6);
  return 0LL;
}
