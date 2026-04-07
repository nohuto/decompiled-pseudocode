/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180065650
 * Callers:
 *     ?GetSize@CBitmap@@WBI@EAAJPEAI0@Z @ 0x1800468A0 (-GetSize@CBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180044504 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v7 = ((unsigned __int64)this + 96) & -(__int64)(this != (CBitmap *)16);
  v9 = v7;
  if ( *(_BYTE *)(v7 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 42);
    *a3 = *((_DWORD *)this + 43);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v6;
}
