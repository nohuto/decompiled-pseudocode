/*
 * XREFs of KiCopyInformation @ 0x140240F28
 * Callers:
 *     KiInitializeUserApc @ 0x1400C07EC (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 * Callees:
 *     KeCopyExceptionRecord @ 0x1401A5B60 (KeCopyExceptionRecord.c)
 */

__int64 __fastcall KiCopyInformation(_OWORD *a1, __int64 a2)
{
  KeCopyExceptionRecord(a1, a2);
  return 1LL;
}
