/*
 * XREFs of PoFxActivateComponent @ 0x1400FD690
 * Callers:
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x140150FF0 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140857ED8 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x1400FD6FC (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
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
