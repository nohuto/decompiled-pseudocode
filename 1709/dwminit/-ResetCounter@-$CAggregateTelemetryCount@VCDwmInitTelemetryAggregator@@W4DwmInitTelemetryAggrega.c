/*
 * XREFs of ?ResetCounter@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAX_N@Z @ 0x1800038C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001400 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 */

void __fastcall CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::ResetCounter(
        __int64 a1,
        char a2)
{
  CDwmInitTelemetryAggregator *v4; // rcx
  _DWORD *v5; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v4 = *(CDwmInitTelemetryAggregator **)(a1 + 8);
    if ( v4 )
      CDwmInitTelemetryAggregator::LogTelemetry(v4);
    if ( a2 )
    {
      v5 = *(_DWORD **)(a1 + 8);
      if ( v5 )
      {
        v5[2] = 0;
        v5[3] = 0;
        v5[4] = 0;
        v5[5] = 0;
      }
      *(_BYTE *)(a1 + 16) = 0;
    }
  }
  *(_DWORD *)(a1 + 32) = 0;
}
