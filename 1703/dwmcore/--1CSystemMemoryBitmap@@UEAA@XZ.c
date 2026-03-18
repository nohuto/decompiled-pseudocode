/*
 * XREFs of ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x18007DC50
 * Callers:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x18007DEEC (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1801A8D40 (--_ECSystemMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CSystemMemoryBitmap::~CSystemMemoryBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  void *SpinCount; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CSystemMemoryBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  this[5].LockSemaphore = &CSystemMemoryBitmap::`vftable';
  SpinCount = (void *)this[5].SpinCount;
  if ( SpinCount )
    WPF::ProcessHeapImpl::Free(SpinCount);
  CBitmap::~CBitmap(this);
}
