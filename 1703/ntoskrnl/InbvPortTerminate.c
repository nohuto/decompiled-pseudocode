/*
 * XREFs of InbvPortTerminate @ 0x14026B130
 * Callers:
 *     HdlspEnableTerminal @ 0x14078E910 (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  Port[2 * a1] = 0LL;
  return 1;
}
