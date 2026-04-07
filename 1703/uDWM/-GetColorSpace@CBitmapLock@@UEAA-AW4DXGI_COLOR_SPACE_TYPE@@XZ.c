/*
 * XREFs of ?GetColorSpace@CBitmapLock@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800A30C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetColorSpace(CBitmapLock *this)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = ((unsigned __int64)this - 56) & -(__int64)(this != (CBitmapLock *)72);
  v5 = v2;
  if ( *(_BYTE *)(v2 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v3 = *((_DWORD *)this + 13);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v5);
  return v3;
}
