/*
 * XREFs of PnprGetMillisecondCounter @ 0x14041723C
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1401FA300 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1401FA9BC (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x140417C24 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140418140 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1404186F0 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x14041876C (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
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
    result = (unsigned int)(v3 - dword_14038811C + dword_140388120);
  dword_140388120 = result;
  dword_14038811C = v3;
  return result;
}
