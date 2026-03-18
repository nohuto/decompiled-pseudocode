/*
 * XREFs of IoUpdateIrpIoAttributionHandle @ 0x140008DF0
 * Callers:
 *     <none>
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 */

__int64 __fastcall IoUpdateIrpIoAttributionHandle(__int64 a1, __int64 a2)
{
  return IopSetDiskIoAttributionExtension(a1, a2, KeGetCurrentThread(), 1LL);
}
