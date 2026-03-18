/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x180083C14
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x1800839C0 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180201714 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
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
    ReleaseInterface<IBitmapLock>((__int64 *)this + 10);
    if ( *((_BYTE *)this + 73) )
    {
      operator delete(*((void **)this + 14));
      *((_QWORD *)this + 14) = 0LL;
      *((_DWORD *)this + 30) = 0;
    }
  }
  *((_BYTE *)this + 72) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
