/*
 * XREFs of MiDeleteCloneZombies @ 0x1400C9564
 * Callers:
 *     MiInsertClone @ 0x1401426E0 (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1407560B0 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, int a2)
{
  __int64 v3; // rbp
  KIRQL v4; // si
  __int64 SharedVm; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1296) + 336LL) )
  {
    v3 = a1 + 1280;
    if ( a2 )
    {
      v4 = 17;
    }
    else
    {
      SharedVm = MiGetSharedVm(a1 + 1280);
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    v7 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1);
    if ( v4 != 17 )
    {
      LOBYTE(v6) = v4;
      MiUnlockWorkingSetExclusive(v3, v6);
    }
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        ExFreePoolWithTag(v7, 0);
        v7 = v8;
      }
      while ( v8 );
    }
  }
}
