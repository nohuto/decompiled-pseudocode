/*
 * XREFs of InbvPortTerminate @ 0x1402956A0
 * Callers:
 *     HdlspEnableTerminal @ 0x1407CC430 (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  Port[2 * a1] = 0LL;
  return 1;
}
