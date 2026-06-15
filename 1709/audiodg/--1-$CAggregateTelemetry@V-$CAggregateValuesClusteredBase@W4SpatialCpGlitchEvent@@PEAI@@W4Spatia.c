/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005C194
 * Callers:
 *     _CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0_::CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x14005BF56 (_CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0_--CAggregateT.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005C244 (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     _CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0_::_CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x14005C296 (_CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0_--_CAggregate.c)
 *     ??_E?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14005C3B0 (--_E-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4Spati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Flush@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x1400315D0 (-Flush@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchE.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x140056F24 (--_GCSLock@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx

  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  result = CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Flush((_BYTE *)a1);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 24);
  if ( v3 )
  {
    result = (__int64)CSLock::`scalar deleting destructor'(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v4 )
    {
      result = (**v4)(v4, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
