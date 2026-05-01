/*
 * XREFs of ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1800F4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x1800F9F54 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x1800FAB88 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::v_ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  unsigned __int64 i; // rdi
  PVOID Ptr; // rcx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 18, &SRWLock);
  for ( i = (unsigned __int64)this[28].Ptr; i; ViewEventDispatcher::_RemoveValidView(
                                                 (ViewEventDispatcher *)&this[-10],
                                                 i) )
    --i;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  ViewEventDispatcher::_FlushRemovedPendingActivations((ViewEventDispatcher *)&this[-10]);
  Ptr = this[43].Ptr;
  if ( Ptr )
  {
    this[43].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  return 0LL;
}
