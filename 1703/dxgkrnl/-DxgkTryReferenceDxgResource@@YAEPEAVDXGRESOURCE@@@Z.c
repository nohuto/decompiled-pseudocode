/*
 * XREFs of ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00871D0
 * Callers:
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C00DC860 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DxgkTryReferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection(a1 + 9);
}
