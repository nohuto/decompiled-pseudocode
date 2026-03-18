/*
 * XREFs of KiPassiveIsrWatchdog @ 0x1402051B0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

void __fastcall __noreturn KiPassiveIsrWatchdog(__int64 a1, __int64 a2)
{
  KeSetEvent((PRKEVENT)a2, 0, 0);
  DbgPrintEx(0x65u, 0, "\nPassive-level ISR watchdog timeout! Interrupt: %p\n", *(const void **)(a2 + 24));
  __debugbreak();
}
