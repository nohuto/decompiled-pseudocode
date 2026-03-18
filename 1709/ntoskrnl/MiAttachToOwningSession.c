/*
 * XREFs of MiAttachToOwningSession @ 0x1400B4828
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiCapturePfnVm @ 0x1400E6A5C (MiCapturePfnVm.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x140089D00 (MiSelectSessionAttachProcess.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400CAD48 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 */

_QWORD *__fastcall MiAttachToOwningSession(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  TopLevelPfn = MiGetTopLevelPfn(a1, 0LL, a3, a4);
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
      v8 = MiSelectSessionAttachProcess(v7);
      if ( a2 == 17 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return v8;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(a2);
      if ( v8 && (int)MmAttachSession((ULONG_PTR)v8) >= 0 )
        return v8;
      MiLockPageInline(a1);
    }
  }
  return 0LL;
}
