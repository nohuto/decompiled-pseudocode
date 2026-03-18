/*
 * XREFs of EtwTracePTPElasticDragModeStop @ 0x1C00E0CC0
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C012B0F0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePTPElasticDragModeStop(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0(a1, &PTPElasticDragModeStop, &W32kControlGuid);
  return result;
}
