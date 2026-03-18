/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x140138D9C
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x140021570 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MmStoreProbeAndLockPages @ 0x140136640 (MmStoreProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x140138D4C (MiProbeAndLockComplete.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockProbePacketWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // dl

  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
      MiUnlockPageTableInternal(v4, v5);
      *(_QWORD *)(a1 + 32) = 0LL;
      v4 = *(_QWORD *)(a1 + 96);
    }
    v6 = *(_BYTE *)(a1 + 68);
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
      MiUnlockWorkingSetExclusive(v4, v6);
    else
      MiUnlockWorkingSetShared(v4, v6, a3);
  }
}
