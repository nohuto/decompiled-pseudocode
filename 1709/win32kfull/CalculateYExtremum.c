/*
 * XREFs of CalculateYExtremum @ 0x1C02BEE14
 * Callers:
 *     fsg_CheckOutlineOrientation @ 0x1C02C0028 (fsg_CheckOutlineOrientation.c)
 * Callees:
 *     <none>
 */

int *__fastcall CalculateYExtremum(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int *a10,
        int *a11)
{
  int v12; // ebx
  int v13; // r11d
  int v14; // ecx
  int v15; // r10d
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  int *result; // rax

  if ( a4 )
  {
    v12 = 2 * a2;
    v13 = 2 * a3;
  }
  else
  {
    v12 = a5 + a2;
    v13 = a6 + a3;
  }
  if ( a9 )
  {
    v14 = 2 * a7;
    v15 = 2 * a8;
  }
  else
  {
    v14 = a5 + a7;
    v15 = a6 + a8;
  }
  v16 = 2 * a6;
  if ( v15 + v13 - 4 * a6 )
  {
    v17 = v13 - v16;
    v18 = v15 - v16;
    v19 = (v15 + v13 - 4 * a6) * (__int64)(v15 + v13 - 4 * a6);
    v20 = v17 * v17 * v14 + v18 * (v18 * v12 + v17 * 4 * a5);
    v21 = v17 * v17 * v15 + v18 * (v18 * v13 + v17 * 4 * a6);
    if ( !a1 )
      v21 = v19 + v21 - 1;
    *a11 = v21 / v19;
    if ( v20 < 0 )
      LODWORD(v22) = -(int)((v19 - v20) / v19);
    else
      v22 = (v20 + v19) / v19;
    result = a10;
    *a10 = v22;
  }
  else
  {
    *a10 = 2 * a5;
    result = a11;
    *a11 = v16;
  }
  return result;
}
