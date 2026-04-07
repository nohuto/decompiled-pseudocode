/*
 * XREFs of ??_GCFlickVisual@@MEAAPEAXI@Z @ 0x180091D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x180091CB8 (--1CFlickVisual@@MEAA@XZ.c)
 */

CFlickVisual *__fastcall CFlickVisual::`scalar deleting destructor'(CFlickVisual *this, char a2)
{
  CFlickVisual::~CFlickVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CFlickVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
