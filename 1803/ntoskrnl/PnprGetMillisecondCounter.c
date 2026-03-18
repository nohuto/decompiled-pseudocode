/*
 * XREFs of PnprGetMillisecondCounter @ 0x140482DFC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14023CE20 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14023D4E8 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x1404837F0 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140483D08 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1404842A0 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x14048431C (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  __int128 v2; // rtt
  LONGLONG v3; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v2 / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = (unsigned int)(v3 + dword_1403E9BF8 - dword_1403E9BFC);
  dword_1403E9BF8 = result;
  dword_1403E9BFC = v3;
  return result;
}
