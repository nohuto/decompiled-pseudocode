/*
 * XREFs of ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x18002DF68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x18005A5B0 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x1800CFF50 (-VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18014A1A4 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *a4,
        void *a5,
        unsigned int a6)
{
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  CPartitionVerticalBlankScheduler *v10; // rcx
  const unsigned __int16 *v11; // r9
  __int64 v12; // rdx
  int (*v13)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *, const unsigned __int16 *); // rax

  if ( a6 - 48 > 0xC0 )
  {
    CComposition::FailFastOnMalformedPacket(this, 528974075LL, 0LL, a4);
    __debugbreak();
  }
  if ( !DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(a5, a6) )
  {
    CComposition::FailFastOnMalformedPacket(v9, 528974075LL, 0LL, v7);
    __debugbreak();
  }
  if ( *(_WORD *)(v8 + 32) && v8 + *(unsigned __int16 *)(v8 + 32) || *((_QWORD *)a2 + 6) )
  {
    v10 = *(CPartitionVerticalBlankScheduler **)(v9 + 552);
    v11 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v12 = *((unsigned int *)a2 + 4);
    v13 = *(int (**)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *, const unsigned __int16 *))(*(_QWORD *)v10 + 40LL);
    if ( v13 == CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario )
      CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
        v10,
        v12,
        (const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)v8,
        v11);
    else
      ((void (__fastcall *)(CPartitionVerticalBlankScheduler *, __int64, __int64, const unsigned __int16 *))v13)(
        v10,
        v12,
        v8,
        v11);
  }
  return 0LL;
}
