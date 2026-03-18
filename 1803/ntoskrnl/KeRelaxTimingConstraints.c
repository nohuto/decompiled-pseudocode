/*
 * XREFs of KeRelaxTimingConstraints @ 0x14023F5C4
 * Callers:
 *     KdEnableDebugger @ 0x14023E710 (KdEnableDebugger.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 */

bool __fastcall KeRelaxTimingConstraints(int a1)
{
  bool v1; // di
  char v2; // bl
  __int64 *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rcx
  bool result; // al

  v1 = KeEnableWatchdogTimeout == 0;
  if ( a1 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !KeEnableWatchdogTimeout && (_DWORD)KeNumberProcessors_0 )
    {
      v3 = KiProcessorBlock;
      v4 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v5 = *v3;
        *(_DWORD *)(v5 + 22764) = 0;
        *(_DWORD *)(v5 + 23452) = 0;
        KiResetGlobalDpcWatchdogProfiler(v5);
        ++v3;
        --v4;
      }
      while ( v4 );
    }
  }
  result = v1;
  KeEnableWatchdogTimeout = v2;
  return result;
}
