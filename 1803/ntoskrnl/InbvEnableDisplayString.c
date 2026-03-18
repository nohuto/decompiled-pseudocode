/*
 * XREFs of InbvEnableDisplayString @ 0x140230DE0
 * Callers:
 *     PopShutdownHandler @ 0x140487310 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_1403CAD30;
  byte_1403CAD30 = a1;
  return result;
}
