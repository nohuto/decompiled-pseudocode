/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x180200F00
 * Callers:
 *     ?GetResolution@CBitmap@@WBI@EAAJPEAN0@Z @ 0x1800DD750 (-GetResolution@CBitmap@@WBI@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(CBitmap *this, double *a2, double *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 104) & -(__int64)(this != (CBitmap *)16));
  EnterCriticalSection(v8);
  v6 = 0;
  if ( a2 && a3 )
  {
    *a2 = *((float *)this + 40);
    *a3 = *((float *)this + 41);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
