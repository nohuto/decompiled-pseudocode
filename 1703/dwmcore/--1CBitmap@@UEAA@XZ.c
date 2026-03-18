/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x1800565E4
 * Callers:
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180048DF4 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x18007DC50 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800B1FFC (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x1801A9690 (--_ECBitmap@@UEAAPEAXI@Z.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1801AA4D0 (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180056F24 (--1CMILResourceCache@@IEAA@XZ.c)
 */

void __fastcall CBitmap::~CBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CBitmap::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  WPF::ProcessHeapImpl::Free(this[5].DebugInfo);
  DeleteCriticalSection(this + 3);
  CMILResourceCache::~CMILResourceCache((CMILResourceCache *)&this[1].LockCount);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
