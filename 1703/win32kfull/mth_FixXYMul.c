/*
 * XREFs of mth_FixXYMul @ 0x1C02BD740
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02BAEC8 (fs_FindBitMapSize.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02BF378 (scl_ScaleAdvanceWidth.c)
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     FracMul @ 0x1C02BD2A4 (FracMul.c)
 */

__int64 __fastcall mth_FixXYMul(int *a1, int *a2, int *a3)
{
  int v3; // ebx
  int v5; // ebp
  int fixed; // eax
  int v9; // r10d
  __int64 result; // rax
  int v11; // r10d
  int v12; // ecx
  int v13; // ebx
  int v14; // ebx

  v3 = *a1;
  v5 = *a2;
  FixMul(a3[3], *a2);
  fixed = FixMul(*a3, v3);
  *a1 = fixed + v9;
  FixMul(a3[4], v5);
  result = FixMul(a3[1], v3);
  *a2 = result + v11;
  v12 = a3[2];
  if ( v12 || a3[5] )
  {
    v13 = FracMul(v12, v3);
    result = FracMul(a3[5], v5);
    v14 = a3[8] + result + v13;
    if ( (v14 & 0xFFFEFFFF) != 0 )
    {
      *a1 = CompDiv(v14, (__int64)*a1 << 16);
      result = CompDiv(v14, (__int64)*a2 << 16);
      *a2 = result;
    }
  }
  return result;
}
