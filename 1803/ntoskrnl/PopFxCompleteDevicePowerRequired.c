/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140077A30
 * Callers:
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140165D00 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140184744 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopDiagTraceFxDevicePowered @ 0x140077AC0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x140078CD8 (PopPluginDevicePower.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
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
