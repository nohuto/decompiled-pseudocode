/*
 * XREFs of ??_GVisualCollection@@UEAAPEAXI@Z @ 0x180079AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

VisualCollection *__fastcall VisualCollection::`scalar deleting destructor'(VisualCollection *this, char a2)
{
  *(_QWORD *)this = &VisualCollection::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, VisualCollection *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
