/*
 * XREFs of ACPIBuildProcessPowerResourceFailure @ 0x1C0043970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C0002690 (ACPIBuildProcessGenericComplete.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourceFailure(PSLIST_ENTRY ListEntry)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)&ListEntry[2].Next + 1);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 16), 0xFFFFFFFFFFFFFFFCuLL);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return ACPIBuildProcessGenericComplete(ListEntry);
}
