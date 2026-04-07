/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x1800440CC
 * Callers:
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x1800433C0 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x180043CF4 (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x1800A0B40 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmap::~CBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE OwningThread; // rdx
  __int64 v3; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CBitmap::`vftable'{for `IBitmapDest'};
  OwningThread = this[5].OwningThread;
  this->SpinCount = (ULONG_PTR)&CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  this[2].SpinCount = (ULONG_PTR)&CBitmap::`vftable'{for `CMTALock'};
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, HANDLE))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    OwningThread);
  this[2].SpinCount = (ULONG_PTR)&CMTALock::`vftable';
  if ( LOBYTE(this[4].DebugInfo) )
  {
    DeleteCriticalSection(this + 3);
    LOBYTE(this[4].DebugInfo) = 0;
  }
  *(_QWORD *)&this[1].LockCount = &CMILResourceCache::`vftable';
  while ( LODWORD(this[2].DebugInfo) )
  {
    v3 = *((_QWORD *)this[1].OwningThread + (unsigned int)--LODWORD(this[2].DebugInfo));
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&this[1].OwningThread);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
