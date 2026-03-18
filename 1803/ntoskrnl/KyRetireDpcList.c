/*
 * XREFs of KyRetireDpcList @ 0x1401B1E60
 * Callers:
 *     KiDispatchInterrupt @ 0x1401B1C20 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1401B1C60LL);
}
