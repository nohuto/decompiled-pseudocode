/*
 * XREFs of MiAttachToOwningSession @ 0x1400C6954
 * Callers:
 *     MiLockStealSystemVm @ 0x14003F754 (MiLockStealSystemVm.c)
 *     MiCapturePfnVm @ 0x140124730 (MiCapturePfnVm.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400D4DC8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetTopLevelPfn @ 0x1400D5C50 (MiGetTopLevelPfn.c)
 *     MiSelectSessionAttachProcess @ 0x1400E174C (MiSelectSessionAttachProcess.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

_KPROCESS *__fastcall MiAttachToOwningSession(ULONG_PTR a1, unsigned __int8 a2, __int64 a3)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v7; // rdi
  _KPROCESS *v8; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  TopLevelPfn = MiGetTopLevelPfn(a1);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v7 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
    {
      v8 = (_KPROCESS *)MiSelectSessionAttachProcess(v7);
      if ( a2 == 17 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return v8;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(a2);
      if ( v8 && (int)MmAttachSession(v8, a3) >= 0 )
        return v8;
      MiLockPageInline(a1);
    }
  }
  return 0LL;
}
