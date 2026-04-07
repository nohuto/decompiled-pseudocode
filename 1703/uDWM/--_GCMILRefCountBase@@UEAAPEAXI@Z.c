/*
 * XREFs of ??_GCMILRefCountBase@@UEAAPEAXI@Z @ 0x1800A1660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CMILRefCountBase *__fastcall CMILRefCountBase::`scalar deleting destructor'(CMILRefCountBase *this, char a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILRefCountBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
