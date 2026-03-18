/*
 * XREFs of ?Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE@@@Z @ 0x18002DEE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x18005A4F0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioUnreference(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE *a4)
{
  unsigned __int64 v4; // r8
  CPartitionVerticalBlankScheduler *v5; // rcx
  __int64 v6; // rdx
  void (*v7)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *); // rax
  const struct _GUID *v8; // r9

  v4 = *(_QWORD *)((char *)a4 + 20);
  v5 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 69);
  v6 = *((unsigned int *)a2 + 4);
  v7 = *(void (**)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *))(*(_QWORD *)v5 + 56LL);
  v8 = (const struct _GUID *)((char *)a4 + 4);
  if ( v7 == CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario )
    CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(v5, v6, v4, v8);
  else
    ((void (__fastcall *)(CPartitionVerticalBlankScheduler *, __int64, unsigned __int64, const struct _GUID *))v7)(
      v5,
      v6,
      v4,
      v8);
  return 0LL;
}
