/*
 * XREFs of ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x180083140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x180098BE4 (--1CScreenRotation@@MEAA@XZ.c)
 */

CScreenRotation *__fastcall CScreenRotation::`vector deleting destructor'(CScreenRotation *this, char a2)
{
  CScreenRotation::~CScreenRotation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CScreenRotation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
