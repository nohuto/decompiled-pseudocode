/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x14002EE7C
 * Callers:
 *     MiReturnImageBase @ 0x140513EE8 (MiReturnImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_14036BFE8;
  if ( *(int *)(a1 + 8) >= 1 )
    v2 = qword_14036BFF8;
  return MiZeroCfgSystemWideBitmapWorker(
           v2 + 128,
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 4) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
