/*
 * XREFs of PoFxActivateComponent @ 0x140068EA0
 * Callers:
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1401624F0 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x14082676C (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 628) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(
           BugCheckParameter2,
           *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 632) + 8LL * (unsigned int)BugCheckParameter3),
           a3,
           0LL);
}
