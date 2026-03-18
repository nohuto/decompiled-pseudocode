/*
 * XREFs of KyRetireDpcList @ 0x140188230
 * Callers:
 *     KiDispatchInterrupt @ 0x140188000 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x140094770 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140188040LL);
}
