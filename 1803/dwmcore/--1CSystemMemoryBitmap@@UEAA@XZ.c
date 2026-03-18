/*
 * XREFs of ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x180081B04
 * Callers:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x180020C78 (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x180200610 (--_ECSystemMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CSystemMemoryBitmap::~CSystemMemoryBitmap(CSystemMemoryBitmap *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CSystemMemoryBitmap::`vftable';
  v2 = (void *)*((_QWORD *)this + 29);
  if ( v2 )
    operator delete(v2);
  CBitmap::~CBitmap(this);
}
