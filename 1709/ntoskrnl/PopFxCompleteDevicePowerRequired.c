/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x1400FD900
 * Callers:
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140122E10 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140131A64 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopPluginDevicePower @ 0x14001AE88 (PopPluginDevicePower.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400FD990 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL, 0LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL, 1LL);
    return PopPluginDevicePower(BugCheckParameter2, 1, a2);
  }
  return v2;
}
