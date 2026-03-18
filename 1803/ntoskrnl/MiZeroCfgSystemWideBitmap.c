/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x1400C55A0
 * Callers:
 *     MiReturnImageBase @ 0x1405937FC (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_1403CB4A8;
  if ( *(int *)(a1 + 8) >= 1 )
    v2 = qword_1403CB4B8;
  return MiZeroCfgSystemWideBitmapWorker(
           v2 + 128,
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 4) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
