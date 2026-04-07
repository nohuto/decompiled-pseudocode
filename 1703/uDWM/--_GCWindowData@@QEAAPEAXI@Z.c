/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18003E1D8
 * Callers:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003DE68 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x180035B60 (--1CWindowData@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CWindowData *__fastcall CWindowData::`scalar deleting destructor'(CWindowData *this)
{
  CWindowData::~CWindowData(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
