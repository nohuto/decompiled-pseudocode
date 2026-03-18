/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x18000B564
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x18000B1C0 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801C4FF4 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, *((unsigned int *)this + 32));
    v3 = *((_QWORD *)this + 17);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 17) = 0LL;
    }
    ReleaseInterface<IBitmapLock>((char *)this + 80);
    if ( *((_BYTE *)this + 73) )
    {
      WPF::ProcessHeapImpl::Free(*((void **)this + 14));
      *((_QWORD *)this + 14) = 0LL;
      *((_DWORD *)this + 30) = 0;
    }
  }
  *((_BYTE *)this + 72) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
