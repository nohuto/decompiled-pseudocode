/*
 * XREFs of ?Partition_TelemetryAnimationScenarioReference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOREFERENCE@@@Z @ 0x18005C598
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x1800659D0 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioReference(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOREFERENCE *a4)
{
  unsigned __int64 v4; // r8
  CPartitionVerticalBlankScheduler *v5; // rcx
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *); // rax
  const struct _GUID *v8; // r9

  v4 = *(_QWORD *)((char *)a4 + 20);
  v5 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 70);
  v6 = *((unsigned int *)a2 + 4);
  v7 = *(__int64 (__fastcall **)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *))(*(_QWORD *)v5 + 48LL);
  v8 = (const struct _GUID *)((char *)a4 + 4);
  if ( v7 == CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario )
    CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(v5, v6, v4, v8);
  else
    v7(v5, v6, v4, v8);
  return 0LL;
}
