/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x140125258
 * Callers:
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiSplitReducedCommitClonePage @ 0x140215F00 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 */

void __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  PVOID v2; // rcx
  KIRQL v3; // al
  bool v4; // zf
  __int64 v5; // rax
  LONG *SharedVm; // rbx

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
      SharedVm = MiGetSharedVm((__int64)v2);
      v3 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      v3 = MiLockWorkingSetShared((__int64)v2);
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
