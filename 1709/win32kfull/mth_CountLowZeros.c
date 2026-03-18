/*
 * XREFs of mth_CountLowZeros @ 0x1C02B74E8
 * Callers:
 *     scl_ComputeScaling @ 0x1C02B83C8 (scl_ComputeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_CountLowZeros(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  while ( (a1 & 1) == 0 )
  {
    a1 >>= 1;
    result = (unsigned int)(result + 1);
  }
  return result;
}
