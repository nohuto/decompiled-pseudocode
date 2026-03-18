/*
 * XREFs of ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C01A5F70
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01A63F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A6F60 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTDR_DUMP_BUFFER_CANARY::Check(const void **this)
{
  const void *v1; // rcx

  v1 = *this;
  return !v1 || RtlCompareMemory(v1, "EOR", 4uLL) == 4;
}
