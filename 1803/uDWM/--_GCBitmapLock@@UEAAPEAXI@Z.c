/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x180045A80
 * Callers:
 *     ??_ECBitmapLock@@WBA@EAAPEAXI@Z @ 0x18004B650 (--_ECBitmapLock@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180045C60 (--1CBitmapLock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapLock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
