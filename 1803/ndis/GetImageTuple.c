/*
 * XREFs of GetImageTuple @ 0x1C007EA00
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C007EA74 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImageTuple(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 result; // rax
  __int16 v5; // cx
  int v6; // ecx

  v3 = 0;
  if ( !a1 )
    return 0LL;
  v5 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v5 == 267 || v5 == 523 )
  {
    v3 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
    v6 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v6 = 0;
  }
  *a2 = v6;
  result = 1LL;
  *a3 = v3;
  return result;
}
