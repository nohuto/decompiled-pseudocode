/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140017F1C
 * Callers:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140017EDC (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x140021A30 (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_::_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x140021A54 (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_--_CAggregateTelemet.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140056E40 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEven.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x140056F24 (--_GCSLock@@QEAAPEAXI@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140057110 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

void **__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  bool v2; // zf
  void **result; // rax
  CSLock *v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rcx

  v2 = *(_BYTE *)(a1 + 16) == 0;
  result = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  if ( !v2 )
  {
    LOBYTE(a2) = 1;
    result = (void **)CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
                        a1,
                        a2);
  }
  v5 = *(CSLock **)(a1 + 24);
  if ( v5 )
  {
    result = (void **)CSLock::`scalar deleting destructor'(v5, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v6 )
    {
      result = (void **)(**v6)(v6, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
