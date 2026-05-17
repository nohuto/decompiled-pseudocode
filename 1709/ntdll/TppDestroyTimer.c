/*
 * XREFs of TppDestroyTimer @ 0x18000C5A8
 * Callers:
 *     TppFreeWait @ 0x18000B2C0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18000BC70 (TppTimerpFree.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
