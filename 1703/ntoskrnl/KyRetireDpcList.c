/*
 * XREFs of KyRetireDpcList @ 0x140188780
 * Callers:
 *     KiDispatchInterrupt @ 0x140188550 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1400F18D0 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140188590LL);
}
