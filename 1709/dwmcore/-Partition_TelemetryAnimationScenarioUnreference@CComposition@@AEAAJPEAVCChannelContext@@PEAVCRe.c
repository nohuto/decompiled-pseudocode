/*
 * XREFs of ?Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE@@@Z @ 0x1800AB3EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x1800112C0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioUnreference(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE *a4)
{
  __int64 v4; // r8
  CPartitionVerticalBlankScheduler *v5; // rcx
  __int64 v6; // rdx
  void (__fastcall *v7)(CPartitionVerticalBlankScheduler *, int, __int64, const struct _GUID *); // rax
  const struct _GUID *v8; // r9

  v4 = *(_QWORD *)((char *)a4 + 20);
  v5 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 66);
  v6 = *((unsigned int *)a2 + 4);
  v7 = *(void (__fastcall **)(CPartitionVerticalBlankScheduler *, int, __int64, const struct _GUID *))(*(_QWORD *)v5 + 56LL);
  v8 = (const struct _GUID *)((char *)a4 + 4);
  if ( v7 == CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario )
    CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(v5, v6, v4, v8);
  else
    v7(v5, v6, v4, v8);
  return 0LL;
}
