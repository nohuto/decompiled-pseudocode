/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18003EF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, enum DXGI_FORMAT *a2)
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
      *a2 = *((enum DXGI_FORMAT *)this + 11);
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD5u);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD3u);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return v5;
}
