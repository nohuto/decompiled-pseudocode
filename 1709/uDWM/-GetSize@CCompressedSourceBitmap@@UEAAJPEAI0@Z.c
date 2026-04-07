/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180031370
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z @ 0x180046920 (-GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800438F0 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180044504 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(CCompressedSourceBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebx
  int v9; // eax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 42) && *((_DWORD *)this + 43)
    || (v9 = CCompressedSourceBitmap::EnsureWICBitmapFrame((CCompressedSourceBitmap *)((char *)this - 16)),
        v7 = v9,
        v9 >= 0) )
  {
    v6 = ((unsigned __int64)this + 96) & -(__int64)(this != (CCompressedSourceBitmap *)16);
    v10 = v6;
    if ( *(_BYTE *)(v6 + 0x30) )
      EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
    if ( a2 && a3 )
    {
      *a2 = *((_DWORD *)this + 42);
      *a3 = *((_DWORD *)this + 43);
      if ( v6 && *(_BYTE *)((((unsigned __int64)this + 96) & -(__int64)(this != (CCompressedSourceBitmap *)16)) + 0x30) )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
      return 0;
    }
    else
    {
      CGuard<CMTALock>::~CGuard<CMTALock>(&v10);
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x74u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x70u);
  }
  return v7;
}
