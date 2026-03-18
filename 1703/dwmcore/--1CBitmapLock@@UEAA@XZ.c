/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x18007EAC4
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x18007E5F0 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801A9F20 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18007E7BC (-Unlock@CBitmapLock@@IEAAXXZ.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  CBitmapLock::Unlock(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
