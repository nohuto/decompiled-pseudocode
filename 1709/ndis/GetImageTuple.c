/*
 * XREFs of GetImageTuple @ 0x1C002249C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0022104 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImageTuple(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  __int16 v4; // ax

  if ( !a1 )
    return 0LL;
  v3 = 0x1C0000000LL + MEMORY[0x1C000003C];
  v4 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v4 == 267 || v4 == 523 )
  {
    *a2 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    *a3 = *(_DWORD *)(v3 + 80);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  return 1LL;
}
