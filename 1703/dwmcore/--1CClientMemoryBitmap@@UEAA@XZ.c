/*
 * XREFs of ??1CClientMemoryBitmap@@UEAA@XZ @ 0x18007DEEC
 * Callers:
 *     ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x18007DD40 (--_ECClientMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClientMemoryBitmap::~CClientMemoryBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rcx

  this[5].SpinCount = 0LL;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClientMemoryBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  this[5].LockSemaphore = &CSystemMemoryBitmap::`vftable';
  v2 = *(_QWORD *)&this[6].LockCount;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
}
