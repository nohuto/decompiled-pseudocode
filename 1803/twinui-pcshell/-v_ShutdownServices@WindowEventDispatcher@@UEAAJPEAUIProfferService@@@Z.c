/*
 * XREFs of ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801DAB40
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ @ 0x1801D56AC (-FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::v_ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rdi

  v3 = this + 42;
  AcquireSRWLockExclusive(this + 42);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  WindowEventDispatcher::FlushRemovedPendingActivations(this - 16);
  SafeRelease<IShellItemArray>(&this[25]);
  return 0LL;
}
