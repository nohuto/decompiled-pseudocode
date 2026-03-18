/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x1400AD7A8
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 SharedVm; // rax
  __int64 v9; // rax

  if ( !a4 )
  {
    SharedVm = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
  }
  *(_QWORD *)(a1 + 144) += a3;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 128) += a3;
  if ( !a4 )
  {
    v9 = MiGetSharedVm(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 40));
  }
}
