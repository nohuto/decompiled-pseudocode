/*
 * XREFs of scl_ComputeScaling @ 0x1C02BE5D4
 * Callers:
 *     scl_InitializeChildScaling @ 0x1C02BE890 (scl_InitializeChildScaling.c)
 *     scl_InitializeScaling @ 0x1C02BE930 (scl_InitializeScaling.c)
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     mth_CountLowZeros @ 0x1C02BD6E0 (mth_CountLowZeros.c)
 */

__int64 __fastcall scl_ComputeScaling(_DWORD *a1, int a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v4 = a3;
  v5 = a2;
  v6 = mth_CountLowZeros(a3 | (unsigned int)a2) - 1;
  if ( v6 > 0 )
  {
    v5 >>= v6;
    v4 >>= v6;
  }
  if ( v5 >= 0x2000000 )
    v4 >>= 6;
  else
    v5 <<= 6;
  *a1 = CompDiv(v4, (__int64)v5 << 16);
  if ( v5 > 0x7FFF )
    return 3LL;
  if ( ((v4 - 1) & v4) != 0 || !v4 )
    v7 = -1;
  else
    v7 = mth_CountLowZeros(v4);
  a1[2] = v5;
  a1[1] = v4;
  if ( v7 < 0 )
    return 2LL;
  a1[3] = v7;
  return 1LL;
}
