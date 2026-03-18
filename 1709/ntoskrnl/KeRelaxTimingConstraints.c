/*
 * XREFs of KeRelaxTimingConstraints @ 0x1402024BC
 * Callers:
 *     KdEnableDebugger @ 0x140201630 (KdEnableDebugger.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 */

bool __fastcall KeRelaxTimingConstraints(int a1)
{
  bool v1; // bl
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx

  v1 = KeEnableWatchdogTimeout == 0;
  if ( a1 )
  {
    KeEnableWatchdogTimeout = 0;
  }
  else
  {
    if ( !KeEnableWatchdogTimeout && (_DWORD)KeNumberProcessors_0 )
    {
      v2 = KiProcessorBlock;
      v3 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v4 = *v2;
        *(_DWORD *)(v4 + 22764) = 0;
        *(_DWORD *)(v4 + 23452) = 0;
        KiResetGlobalDpcWatchdogProfiler(v4);
        ++v2;
        --v3;
      }
      while ( v3 );
    }
    KeEnableWatchdogTimeout = 1;
  }
  return v1;
}
