/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x180081BE4
 * Callers:
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x180081B04 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x1800B8928 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800CC61C (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x180200E20 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x18001DC24 (--1CMILResourceCache@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CBitmap::~CBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CBitmap::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  operator delete(this[5].DebugInfo);
  DeleteCriticalSection(this + 3);
  CMILResourceCache::~CMILResourceCache((CMILResourceCache *)&this[1].LockCount);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
