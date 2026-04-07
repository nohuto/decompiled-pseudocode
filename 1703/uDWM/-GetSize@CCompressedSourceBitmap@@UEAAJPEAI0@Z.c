/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180013570
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z @ 0x18004E1A0 (-GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003F614 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x64u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x60u);
  }
  return v7;
}
