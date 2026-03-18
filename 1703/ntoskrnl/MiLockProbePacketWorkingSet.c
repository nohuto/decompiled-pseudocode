/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x14002A578
 * Callers:
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiSplitReducedCommitClonePage @ 0x14020E7A4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 */

void __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  PVOID v2; // rcx
  KIRQL v3; // al
  bool v4; // zf
  __int64 v5; // rax
  __int64 SharedVm; // rbx

  *(_WORD *)(a1 + 53) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  v2 = *(PVOID *)(a1 + 80);
  if ( v2 == MmBadPointer )
  {
    *(_BYTE *)(a1 + 52) = 17;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 55) == 1 )
    {
      SharedVm = MiGetSharedVm(v2);
      v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    else
    {
      v3 = MiLockWorkingSetShared();
    }
    v4 = *(_DWORD *)(a1 + 48) == 1;
    *(_BYTE *)(a1 + 52) = v3;
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(v5 + 1032) )
        *(_BYTE *)(a1 + 53) = 1;
      if ( *(_QWORD *)(v5 + 912) )
        *(_BYTE *)(a1 + 54) = 1;
    }
  }
}
