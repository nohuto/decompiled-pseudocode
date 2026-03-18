/*
 * XREFs of MiDrainSystemAccessLog @ 0x14007A2A4
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiCleanWorkingSet @ 0x14007A220 (MiCleanWorkingSet.c)
 *     MiDeleteSessionAddressSpace @ 0x140153D40 (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14016A1C8 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 SharedVm; // rax
  void *v7; // rcx
  __int64 v8; // rax

  result = MiGetSharedVm(a1);
  v4 = result;
  if ( *(_QWORD *)(result + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    SharedVm = MiGetSharedVm(v3);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
    v7 = *(void **)(v4 + 48);
    if ( v7 )
    {
      MiEmptyPageAccessLog(v7);
      *(_QWORD *)(v4 + 48) = 0LL;
    }
    v8 = MiGetSharedVm(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 40));
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
