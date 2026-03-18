/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1405E30B8
 * Callers:
 *     FsRtlInitSystem @ 0x140851150 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140386828 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
