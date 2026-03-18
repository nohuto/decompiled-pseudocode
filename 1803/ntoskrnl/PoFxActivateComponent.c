/*
 * XREFs of PoFxActivateComponent @ 0x140078070
 * Callers:
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x140181020 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x1408CA0E4 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x1400780EC (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 708) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(
           BugCheckParameter2,
           *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 712) + 8LL * (unsigned int)BugCheckParameter3),
           a3,
           0LL);
}
