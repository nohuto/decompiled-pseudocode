/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800823D8
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800302A0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800820EC (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180017348 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLoginTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
