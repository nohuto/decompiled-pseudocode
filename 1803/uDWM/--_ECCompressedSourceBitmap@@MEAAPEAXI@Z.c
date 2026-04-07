/*
 * XREFs of ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x1800A9A90
 * Callers:
 *     ??_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z @ 0x18004B4F0 (--_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1800A99A0 (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CCompressedSourceBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CCompressedSourceBitmap::~CCompressedSourceBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
