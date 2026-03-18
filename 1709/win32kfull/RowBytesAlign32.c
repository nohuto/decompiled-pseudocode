/*
 * XREFs of RowBytesAlign32 @ 0x1C02BC328
 * Callers:
 *     sbit_GetMetrics @ 0x1C02BE560 (sbit_GetMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RowBytesAlign32(unsigned __int16 a1, unsigned __int16 a2, _WORD *a3)
{
  unsigned int v3; // r9d

  v3 = a2 * a1;
  if ( v3 > 0xFFFF )
    *a3 = -1;
  else
    *a3 = v3;
  if ( v3 <= 0xFFFF )
  {
    if ( (unsigned __int16)(*a3 + 31) >= *a3 )
    {
      *a3 = ((unsigned __int16)(*a3 + 31) >> 3) & 0x1FFC;
      return 0LL;
    }
    *a3 = -1;
  }
  return 6149LL;
}
