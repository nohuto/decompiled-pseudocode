/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1405BDD74
 * Callers:
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_14036A888 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
