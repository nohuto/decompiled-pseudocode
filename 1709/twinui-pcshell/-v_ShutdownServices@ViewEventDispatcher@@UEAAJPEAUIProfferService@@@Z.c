/*
 * XREFs of ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18011FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180125288 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x180125F30 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::v_ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned __int64 i; // rsi
  PVOID Ptr; // rcx

  v3 = this + 23;
  AcquireSRWLockExclusive(this + 23);
  for ( i = (unsigned __int64)this[33].Ptr; i; ViewEventDispatcher::_RemoveValidView(
                                                 (ViewEventDispatcher *)&this[-14],
                                                 i) )
    --i;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  ViewEventDispatcher::_FlushRemovedPendingActivations((ViewEventDispatcher *)&this[-14]);
  Ptr = this[48].Ptr;
  if ( Ptr )
  {
    this[48].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  return 0LL;
}
