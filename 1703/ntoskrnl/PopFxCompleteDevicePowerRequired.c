/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140068D70
 * Callers:
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140144960 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14014AA04 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopDiagTraceFxDevicePowered @ 0x140068E00 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x14006A308 (PopPluginDevicePower.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // rdx

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
    LOBYTE(v6) = 1;
    return PopPluginDevicePower(BugCheckParameter2, v6, a2);
  }
  return v2;
}
