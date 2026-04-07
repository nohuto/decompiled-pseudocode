/*
 * XREFs of ??_GCDWMDXGIEnumeration@@MEAAPEAXI@Z @ 0x180032E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x180033200 (--1CDWMDXGIEnumeration@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CDWMDXGIEnumeration *__fastcall CDWMDXGIEnumeration::`scalar deleting destructor'(CDWMDXGIEnumeration *this, char a2)
{
  CDWMDXGIEnumeration::~CDWMDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMDXGIEnumeration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
