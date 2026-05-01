/*
 * XREFs of ?GetWindowId@WindowWrapperBase@@UEAAIXZ @ 0x1801F25E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetWindowId(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 176LL))(*((_QWORD *)this + 37));
  return *((unsigned int *)this + 78);
}
