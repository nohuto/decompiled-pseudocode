/*
 * XREFs of ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180083AE0
 * Callers:
 *     ?GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z @ 0x1800DE690 (-GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetDataPointer(CBitmapLock *this, unsigned int *a2, unsigned __int8 **a3)
{
  unsigned int v6; // ebx
  LPCRITICAL_SECTION v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 16) & -(__int64)(this != (CBitmapLock *)16));
  EnterCriticalSection(v8);
  if ( a3 )
  {
    if ( a2 )
    {
      v6 = *((_BYTE *)this + 56) == 0 ? 0x88982F04 : 0;
      if ( *((_BYTE *)this + 56) )
      {
        *a2 = *((_DWORD *)this + 26);
        *a3 = (unsigned __int8 *)*((_QWORD *)this + 12);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA0u);
      }
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9Eu);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9Du);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
