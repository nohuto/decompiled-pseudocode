/*
 * XREFs of InbvPortEnableFifo @ 0x14026AED8
 * Callers:
 *     HdlspEnableTerminal @ 0x14078E910 (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortEnableFifo(unsigned int a1)
{
  return ((__int64 (__fastcall *)(char *))PortEnableFifo)((char *)&Port + 16 * a1);
}
