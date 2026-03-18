/*
 * XREFs of KiCopyInformation @ 0x140203A98
 * Callers:
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x1400DBCA0 (KiInitializeUserApc.c)
 * Callees:
 *     KeCopyExceptionRecord @ 0x14017B3BC (KeCopyExceptionRecord.c)
 */

__int64 __fastcall KiCopyInformation(_OWORD *a1, __int64 a2)
{
  KeCopyExceptionRecord(a1, a2);
  return 1LL;
}
