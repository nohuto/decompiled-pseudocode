/*
 * XREFs of KiIsSecureProcessFlush @ 0x1400D8F70
 * Callers:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140136CE4 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecurePid;
}
