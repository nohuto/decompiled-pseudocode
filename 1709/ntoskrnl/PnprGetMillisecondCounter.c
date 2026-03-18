/*
 * XREFs of PnprGetMillisecondCounter @ 0x14042C26C
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x140200040 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1402006D0 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x14042CC58 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x14042D168 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x14042D700 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x14042D77C (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  __int128 v2; // rtt
  LONGLONG v3; // r8
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v2 / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = (unsigned int)(v3 - dword_1403A36BC + dword_1403A36C0);
  dword_1403A36C0 = result;
  dword_1403A36BC = v3;
  return result;
}
