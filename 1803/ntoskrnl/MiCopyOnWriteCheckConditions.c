/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x14026B6DC
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

void __fastcall MiCopyOnWriteCheckConditions(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  struct _KTHREAD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9

  if ( a2 == -1073740748 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    v4 = *(struct _KTHREAD **)(Process + 896);
    if ( v4 )
    {
      if ( v4 != CurrentThread )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(Process + 872, 0LL);
        LOBYTE(CurrentThread[1].Queue) |= 1u;
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v5, v6);
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
  {
    MiWaitForFreePage(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
