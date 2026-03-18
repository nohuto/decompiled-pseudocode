/*
 * XREFs of PoGetProcessorPerformanceClass @ 0x1402333DC
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x1404189B0 (KiConfigureHeteroProcessorsTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall PoGetProcessorPerformanceClass(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *(_QWORD *)(a1 + 24304);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 206);
  return result;
}
