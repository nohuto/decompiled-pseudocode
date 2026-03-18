/*
 * XREFs of ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x18005C5D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180065A10 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x1800B9598 (-VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *a4,
        void *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v8; // r10
  __int64 v9; // r11
  CPartitionVerticalBlankScheduler *v10; // rcx
  const unsigned __int16 *v11; // r9
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *, const unsigned __int16 *); // rax
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( a6 - 48 > 0xC0 )
  {
    v15 = 1788;
LABEL_11:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v15);
    return v6;
  }
  if ( !DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(a5, a6) )
  {
    v15 = 1793;
    goto LABEL_11;
  }
  if ( *(_WORD *)(v8 + 32) && v8 + *(unsigned __int16 *)(v8 + 32) || *(_QWORD *)(v9 + 48) )
  {
    v10 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 70);
    v11 = *(const unsigned __int16 **)(v9 + 48);
    v12 = *(unsigned int *)(v9 + 16);
    v13 = *(__int64 (__fastcall **)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *, const unsigned __int16 *))(*(_QWORD *)v10 + 40LL);
    if ( v13 == CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario )
      CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
        v10,
        v12,
        (const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)v8,
        v11);
    else
      v13(v10, v12, (const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)v8, v11);
  }
  return v6;
}
