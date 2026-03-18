/*
 * XREFs of ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0058D38
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0099464 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::VerifyGlobalResidentLimit(VIDMM_GLOBAL *this, struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  __int64 v4; // rax

  if ( *(_QWORD *)(*(_QWORD *)a2 + 56LL) <= *((_QWORD *)a2 + 2) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(*(_QWORD *)a2);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
  }
  return 0;
}
