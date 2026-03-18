/*
 * XREFs of CalcSBStuff2 @ 0x1C007736C
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C0076FC0 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     SBCtlSetup @ 0x1C0210678 (SBCtlSetup.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 */

__int64 __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  unsigned int DpiForSystem; // eax
  __int64 v7; // rcx
  int DpiDependentMetric; // eax
  int v9; // r9d
  int v10; // r14d
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // edi
  INT v15; // edi
  int v16; // r9d
  INT v17; // edx
  INT v18; // ecx
  int v19; // ecx
  int v20; // edx
  INT v21; // edx
  INT v22; // edi
  int v23; // eax
  __int64 result; // rax

  if ( a4 )
  {
    a1[4] = a2[1];
    a1[5] = a2[3];
    a1[6] = *a2;
    a1[7] = a2[2];
    DpiForSystem = GetDpiForSystem(a1, a2);
    v7 = 10LL;
  }
  else
  {
    a1[4] = *a2;
    a1[5] = a2[2];
    a1[6] = a2[1];
    a1[7] = a2[3];
    DpiForSystem = GetDpiForSystem(a1, a2);
    v7 = 11LL;
  }
  DpiDependentMetric = GetDpiDependentMetric(v7, DpiForSystem);
  v9 = a1[5];
  v10 = 1;
  v11 = a1[4];
  a1[8] = DpiDependentMetric;
  v12 = a1[8];
  a1[3] = a3[3];
  a1[2] = a3[2];
  v13 = *a3;
  *a1 = *a3;
  v14 = a3[1];
  a1[1] = v14;
  v15 = v14 - v13 + 1;
  if ( (v9 - v11) / 2 < v12 )
    v12 = (v9 - v11) / 2;
  v16 = v9 - v12;
  a1[10] = v16;
  a1[9] = v11 + v12;
  v17 = a3[2];
  if ( v17 && v15 )
  {
    v18 = EngMulDiv(v16 - (v11 + v12), v17, v15);
    if ( a1[8] / 2 > v18 )
      v18 = a1[8] / 2;
    a1[8] = v18;
  }
  v19 = v12 + a1[4];
  v20 = a1[5] - v19;
  a1[15] = v19;
  v21 = v20 - v12 - a1[8];
  a1[14] = v21;
  if ( a3[2] )
    v10 = a3[2];
  v22 = v15 - v10;
  if ( v22 )
    v23 = a1[15] + EngMulDiv(a3[3] - *a3, v21, v22);
  else
    v23 = v19 - 1;
  a1[13] = v23;
  result = (unsigned int)(a1[8] + v23);
  a1[12] = result;
  return result;
}
