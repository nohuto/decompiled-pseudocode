/*
 * XREFs of ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x18000B450
 * Callers:
 *     ?GetSize@CBitmapLock@@W7EAAJPEAI0@Z @ 0x1800C6F40 (-GetSize@CBitmapLock@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetSize(CBitmapLock *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  LPCRITICAL_SECTION v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 16) & -(__int64)(this != (CBitmapLock *)16));
  EnterCriticalSection(v8);
  if ( a2 )
  {
    if ( a3 )
    {
      v6 = *((_BYTE *)this + 56) == 0 ? 0x88982F04 : 0;
      if ( *((_BYTE *)this + 56) )
      {
        *a2 = *((_DWORD *)this + 18);
        *a3 = *((_DWORD *)this + 19);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x7Du);
      }
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x7Bu);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x7Au);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
