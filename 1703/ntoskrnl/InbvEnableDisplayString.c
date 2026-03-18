/*
 * XREFs of InbvEnableDisplayString @ 0x1401EE200
 * Callers:
 *     PopShutdownHandler @ 0x14041A5E0 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_14036B898;
  byte_14036B898 = a1;
  return result;
}
