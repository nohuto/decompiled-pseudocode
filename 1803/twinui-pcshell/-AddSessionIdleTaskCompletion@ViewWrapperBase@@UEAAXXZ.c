/*
 * XREFs of ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1801E4C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::AddSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  *((_DWORD *)this + 22) |= 1u;
  ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)((char *)this - 8));
}
