/*
 * XREFs of ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x1800AB46C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180002DB4 (-VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180011380 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180127F00 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *a4,
        _WORD *a5,
        unsigned int a6)
{
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  CPartitionVerticalBlankScheduler *v10; // rcx
  unsigned __int16 *v11; // r9
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(CPartitionVerticalBlankScheduler *, unsigned int, const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *, unsigned __int16 *); // rax

  if ( a6 - 48 > 0xC0 )
  {
    CComposition::FailFastOnMalformedPacket(this, 528974075LL, 0LL, a4);
    JUMPOUT(0x18010BB24LL);
  }
  if ( !DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(a5, a6) )
  {
    CComposition::FailFastOnMalformedPacket(v9, 528974075LL, 0LL, v7);
    __debugbreak();
  }
  if ( *(_WORD *)(v8 + 32) && v8 + *(unsigned __int16 *)(v8 + 32) || *((_QWORD *)a2 + 6) )
  {
    v10 = *(CPartitionVerticalBlankScheduler **)(v9 + 528);
    v11 = (unsigned __int16 *)*((_QWORD *)a2 + 6);
    v12 = *((unsigned int *)a2 + 4);
    v13 = *(__int64 (__fastcall **)(CPartitionVerticalBlankScheduler *, unsigned int, const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *, unsigned __int16 *))(*(_QWORD *)v10 + 40LL);
    if ( v13 == CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario )
      CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
        v10,
        v12,
        (const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)v8,
        v11);
    else
      v13(v10, v12, (const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)v8, v11);
  }
  return 0LL;
}
