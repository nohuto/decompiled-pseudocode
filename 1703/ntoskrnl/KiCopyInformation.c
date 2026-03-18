/*
 * XREFs of KiCopyInformation @ 0x1401FDAD4
 * Callers:
 *     KiInitializeUserApc @ 0x140007918 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 * Callees:
 *     KeCopyExceptionRecord @ 0x14017BC3C (KeCopyExceptionRecord.c)
 */

__int64 __fastcall KiCopyInformation(_OWORD *a1, __int64 a2)
{
  KeCopyExceptionRecord(a1, a2);
  return 1LL;
}
