/*
 * XREFs of InbvPortEnableFifo @ 0x140295344
 * Callers:
 *     HdlspEnableTerminal @ 0x1407CC430 (HdlspEnableTerminal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvPortEnableFifo(unsigned int a1)
{
  return ((__int64 (__fastcall *)(char *))PortEnableFifo)((char *)&Port + 16 * a1);
}
