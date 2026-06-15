/*
 * XREFs of ??0?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@_K11@Z @ 0x14005BEAC
 * Callers:
 *     ??0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14005BF8C (--0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140031580 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 5000LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 5000LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 30000LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear(a1);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, a1 + 32, a1 + 64, a1 + 72);
  return a1;
}
