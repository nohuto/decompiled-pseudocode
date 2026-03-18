/*
 * XREFs of MmQueryWorkingSetInformation @ 0x1400A66B4
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140273FB0 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140274394 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1404D5DF4 (PspQueryQuotaLimits.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int16 *v10; // rbp
  KIRQL v11; // r12
  LONG *SharedVm; // rax

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v11 = MiLockWorkingSetShared((__int64)v10);
  *a1 = *((_QWORD *)v10 + 20) << 12;
  *a2 = *((_QWORD *)v10 + 15) << 12;
  *a3 = *((_QWORD *)v10 + 16) << 12;
  *a4 = *((_QWORD *)v10 + 14) << 12;
  *a5 = *((_QWORD *)v10 + 19) << 12;
  if ( *((char *)v10 + 192) < 0 )
    *a6 |= 4u;
  if ( (v10[96] & 0x40) != 0 )
    *a6 |= 1u;
  SharedVm = MiGetSharedVm((__int64)v10);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v11);
  return 0LL;
}
