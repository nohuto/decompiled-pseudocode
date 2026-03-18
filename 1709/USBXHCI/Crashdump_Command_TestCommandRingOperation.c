/*
 * XREFs of Crashdump_Command_TestCommandRingOperation @ 0x1C003BB38
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C00396EC (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C003990C (Crashdump_InitializeWithoutControllerReset.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1C003B7F4 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_Command_TestCommandRingOperation(__int64 a1)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_TestCommandRingOperation: begin\n");
  v3[1] = 0x5C0000000000LL;
  v3[0] = 0LL;
  LODWORD(a1) = Crashdump_Command_SendCommand(a1, (__int64)v3, 0LL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_TestCommandRingOperation: end 0x%X\n", a1);
  return (unsigned int)a1;
}
