/*
 * XREFs of ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x180034080
 * Callers:
 *     ?Clear@?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x180033F70 (-Clear@-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 * Callees:
 *     ?Clear@?$CAggregateValuesClusteredCounter@W4SarmErrorEvent@@$02@@UEAAXXZ @ 0x18002F680 (-Clear@-$CAggregateValuesClusteredCounter@W4SarmErrorEvent@@$02@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::Clear(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64); // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL);
    if ( v3 == CAggregateValuesClusteredCounter<enum SarmErrorEvent,3>::Clear )
      CAggregateValuesClusteredCounter<enum SarmErrorEvent,3>::Clear(v2);
    else
      v3(v2);
  }
  *(_BYTE *)(a1 + 16) = 0;
}
