/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x14064AB24
 * Callers:
 *     FsRtlInitSystem @ 0x1408C1C40 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_1403C9D28 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
