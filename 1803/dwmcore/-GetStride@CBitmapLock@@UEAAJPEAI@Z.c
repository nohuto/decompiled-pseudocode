/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180083A60
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x1800DE6B0 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  unsigned int v4; // ebx
  LPCRITICAL_SECTION v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 16) & -(__int64)(this != (CBitmapLock *)16));
  EnterCriticalSection(v6);
  if ( a2 )
  {
    v4 = *((_BYTE *)this + 56) == 0 ? 0x88982F04 : 0;
    if ( *((_BYTE *)this + 56) )
      *a2 = *((_DWORD *)this + 20);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x8Eu);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8Cu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return v4;
}
