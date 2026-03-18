/*
 * XREFs of MiAttachToOwningSession @ 0x140076418
 * Callers:
 *     MiCapturePfnVm @ 0x140078F10 (MiCapturePfnVm.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400764EC (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetTopLevelPfn @ 0x140079090 (MiGetTopLevelPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x140094590 (MiSelectSessionAttachProcess.c)
 */

ULONG_PTR __fastcall MiAttachToOwningSession(__int64 a1, unsigned __int8 a2)
{
  __int64 TopLevelPfn; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v5 = *(_QWORD *)TopLevelPfn;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
    {
      v6 = MiSelectSessionAttachProcess(v5);
      if ( a2 == 17 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return v6;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(a2);
      if ( v6 && (int)MmAttachSession(v6) >= 0 )
        return v6;
      MiLockPageInline(a1);
    }
  }
  return 0LL;
}
