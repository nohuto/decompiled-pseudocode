/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180045BE0
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x18004B6A0 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800470A4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = ((unsigned __int64)this - 56) & -(__int64)(this != (CBitmapLock *)72);
  v7 = v4;
  if ( *(_BYTE *)(v4 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( a2 )
  {
    v5 = *((_BYTE *)this + 16) == 0 ? 0x88982F04 : 0;
    if ( *((_BYTE *)this + 16) )
      *a2 = *((_DWORD *)this + 10);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x8Eu);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8Cu);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return v5;
}
