/*
 * XREFs of ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x18013E3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::AddSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  *((_DWORD *)this + 24) |= 1u;
  ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)((char *)this - 8));
}
