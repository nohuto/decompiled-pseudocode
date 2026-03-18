/*
 * XREFs of InbvEnableDisplayString @ 0x1401F38B0
 * Callers:
 *     PopShutdownHandler @ 0x14043A310 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140387808;
  byte_140387808 = a1;
  return result;
}
