/*
 * XREFs of mth_FoldPointSizeResolution @ 0x1C02B7630
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B8724 (scl_InitializeScaling.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall mth_FoldPointSizeResolution(int a1, __int16 a2, __int16 a3, int *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  int v7; // eax
  int fixed; // eax
  int v9; // ecx
  int v10; // r10d
  int v11; // eax
  int v12; // ecx
  int v13; // r10d
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // r10d
  int v18; // eax
  int v19; // ecx
  int v20; // r10d
  __int64 result; // rax

  v4 = a2;
  v6 = a1;
  v7 = CompDiv(72, a1 * (__int64)a3);
  fixed = FixMul(a4[1], v7);
  v9 = a4[4];
  a4[1] = fixed;
  v11 = FixMul(v9, v10);
  v12 = a4[7];
  a4[4] = v11;
  a4[7] = FixMul(v12, v13);
  v14 = CompDiv(72, v6 * v4);
  v15 = FixMul(*a4, v14);
  v16 = a4[3];
  *a4 = v15;
  v18 = FixMul(v16, v17);
  v19 = a4[6];
  a4[3] = v18;
  result = FixMul(v19, v20);
  a4[6] = result;
  return result;
}
