/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x140125DC4
 * Callers:
 *     MiReturnImageBase @ 0x140499C04 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140388308;
  if ( *(int *)(a1 + 8) >= 1 )
    v2 = qword_140388318;
  return MiZeroCfgSystemWideBitmapWorker(
           (__int64 *)(v2 + 128),
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 4) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
