/*
 * XREFs of ?UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180046390
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCopyBuffers@CCompressedSourceBitmap@@UEAAJXZ @ 0x180046710 (-ReleaseCopyBuffers@CCompressedSourceBitmap@@UEAAJXZ.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800470A4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::UnlockState(CCompressedSourceBitmap *this, enum WICBitmapLockFlags a2)
{
  char v3; // di
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = ((unsigned __int64)this + 80) & -(__int64)(this != (CCompressedSourceBitmap *)32);
  v6 = v4;
  if ( *(_BYTE *)(v4 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( (v3 & 2) != 0 )
  {
    *((_DWORD *)this + 45) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 45);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v6);
  CCompressedSourceBitmap::ReleaseCopyBuffers((CCompressedSourceBitmap *)((char *)this + 216));
  return 0LL;
}
