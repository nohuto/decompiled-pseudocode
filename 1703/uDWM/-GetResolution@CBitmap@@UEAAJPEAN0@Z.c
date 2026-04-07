/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1800A2BA0
 * Callers:
 *     ?GetResolution@CBitmap@@WBI@EAAJPEAN0@Z @ 0x18004E080 (-GetResolution@CBitmap@@WBI@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(CBitmap *this, double *a2, double *a3)
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
    *a2 = *((float *)this + 44);
    *a3 = *((float *)this + 45);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v6;
}
