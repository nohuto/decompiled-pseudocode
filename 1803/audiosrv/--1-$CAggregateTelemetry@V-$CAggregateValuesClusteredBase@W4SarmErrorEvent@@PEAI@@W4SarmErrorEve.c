/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1800F59E0
 * Callers:
 *     _CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_::CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x18006B223 (_CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_--CAggregateTelemet.c)
 *     ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1800F5A60 (--1-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??_E?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x1800F5AF0 (--_E-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEv.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Flush@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x1800F5D60 (-Flush@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErro.c)
 */

void __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::`vftable';
  LOBYTE(a2) = 1;
  CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::Flush(
    a1,
    a2);
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 24));
    operator delete(v3, (const struct std::nothrow_t *)0x28);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
}
