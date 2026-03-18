/*
 * XREFs of ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C0040A90
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0040AE8 (-CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 */

void __fastcall CitpBitmapUpdateForTimeRange(struct _CIT_BITMAP *a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v7; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // edx

  v7 = *((_QWORD *)a1 + 1);
  if ( v7 )
  {
    v8 = 8 * v7;
    v9 = (a2 - a4) / a5;
    v10 = (a3 - a4) / a5;
    v11 = v8 - 1;
    if ( v10 < v8 )
      v11 = v10;
    v12 = v11;
    if ( v9 <= v11 )
      v12 = v9;
    CitpBitmapUpdateBits(a1, v12, v11);
  }
}
