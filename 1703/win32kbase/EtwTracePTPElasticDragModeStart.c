/*
 * XREFs of EtwTracePTPElasticDragModeStart @ 0x1C00DA100
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C012BA20 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePTPElasticDragModeStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &PTPElasticDragModeStart, &W32kControlGuid);
  return result;
}
