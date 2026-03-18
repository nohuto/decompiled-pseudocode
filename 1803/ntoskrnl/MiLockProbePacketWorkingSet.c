/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x1400BBD14
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x140021570 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // al
  __int64 SharedVm; // rbx

  v1 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 144) = 0LL;
  LODWORD(v3) = v1 & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 64) = v3;
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
  {
    if ( (v3 & 2) != 0 )
    {
      SharedVm = MiGetSharedVm(v4);
      v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    else
    {
      v5 = MiLockWorkingSetShared(v4);
    }
    *(_BYTE *)(a1 + 68) = v5;
    LOBYTE(v3) = *(_DWORD *)(a1 + 64) & 0xF0;
    if ( (_BYTE)v3 == 16 )
    {
      v3 = *(_QWORD *)(a1 + 80);
      if ( *(_QWORD *)(v3 + 912) )
        *(_DWORD *)(a1 + 64) |= 1u;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 68) = 17;
  }
  return v3;
}
