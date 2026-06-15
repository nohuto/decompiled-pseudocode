/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140031F0C
 * Callers:
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x140021F33 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$12 @ 0x140021F7F (_privateCreateCrossProcessEndpoint_--_1_--dtor$12.c)
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_::CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x140031E31 (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_--CAggregateTelemetr.c)
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140031E40 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_::_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x140031E92 (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_--_CAggregateTelemet.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140054F90 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEven.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Flush@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140031EF0 (-Flush@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchE.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x1400550A4 (--_GCSLock@@QEAAPEAXI@Z.c)
 */

void *__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  void *result; // rax
  unsigned int v3; // edx
  CSLock *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx

  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  result = (void *)CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Flush((_BYTE *)a1);
  v4 = *(CSLock **)(a1 + 24);
  if ( v4 )
  {
    result = CSLock::`scalar deleting destructor'(v4, v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      result = (void *)(**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
