/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x180081C6C
 * Callers:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18008180C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800B8AB8 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x1800CC720 (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this)
{
  CBitmap *result; // rax

  *(_QWORD *)this = &CMILCOMBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 2) = &ISecondaryBitmap::`vftable';
  *((_QWORD *)this + 3) = &IBitmapDest::`vftable';
  *((_QWORD *)this + 4) = &IBitmapUnlock::`vftable';
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  *((_QWORD *)this + 6) = &CMILResourceCache::`vftable';
  *((_DWORD *)this + 26) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 3);
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  result = this;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_BYTE *)this + 220) = 0;
  *((_DWORD *)this + 54) = 0;
  return result;
}
