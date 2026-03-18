/*
 * XREFs of ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C003EA68
 * Callers:
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetHTSurfInfo(struct _SURFOBJ *a1, struct _HTSURFACEINFO *a2, __int8 a3)
{
  __int64 result; // rax
  __m256i v4; // [rsp+0h] [rbp-30h]

  *(SIZEL *)((char *)&v4.m256i_u64[1] + 4) = a1->sizlBitmap;
  v4.m256i_i32[5] = a1->lDelta;
  v4.m256i_i64[3] = (__int64)a1->pvScan0;
  v4.m256i_i64[0] = (__int64)a1;
  v4.m256i_i8[10] = a3;
  v4.m256i_i8[11] = 4;
  result = 1LL;
  v4.m256i_i16[4] = (a1->fjBitmap & 1) != 0;
  *(__m256i *)a2 = v4;
  *((_QWORD *)a2 + 4) = 0LL;
  return result;
}
