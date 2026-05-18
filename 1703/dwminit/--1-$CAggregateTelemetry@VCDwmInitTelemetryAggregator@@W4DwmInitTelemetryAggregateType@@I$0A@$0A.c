/*
 * XREFs of ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003598
 * Callers:
 *     ??_G?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAPEAXI@Z @ 0x1800038D0 (--_G-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0.c)
 *     ??_E?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAPEAXI@Z @ 0x180003900 (--_E-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$.c)
 *     _dynamic_atexit_destructor_for__gDwmInitTelemetryAggregator__ @ 0x1800076F0 (_dynamic_atexit_destructor_for__gDwmInitTelemetryAggregator__.c)
 * Callees:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001360 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180003EE0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800072F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::~CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>(
        __int64 a1)
{
  bool v1; // zf
  CDwmInitTelemetryAggregator *v3; // rcx
  _DWORD *v4; // rax
  void *v5; // rdi
  void (__fastcall ***v6)(_QWORD, __int64); // rcx

  v1 = *(_BYTE *)(a1 + 16) == 0;
  *(_QWORD *)a1 = &CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::`vftable';
  if ( !v1 )
  {
    v3 = *(CDwmInitTelemetryAggregator **)(a1 + 8);
    if ( v3 )
      CDwmInitTelemetryAggregator::LogTelemetry(v3);
    v4 = *(_DWORD **)(a1 + 8);
    if ( v4 )
    {
      v4[2] = 0;
      v4[3] = 0;
      v4[4] = 0;
      v4[5] = 0;
    }
    *(_BYTE *)(a1 + 16) = 0;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 24));
    operator delete(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v6 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v6 )
    {
      (**v6)(v6, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
}
