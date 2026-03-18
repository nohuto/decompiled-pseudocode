/*
 * XREFs of bFToL @ 0x1C00777EC
 * Callers:
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0021040 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00211F0 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     vConvertXformToMatrix @ 0x1C0022E90 (vConvertXformToMatrix.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0039E90 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00445F0 (bCvtPts1.c)
 *     efSin @ 0x1C008C380 (efSin.c)
 *     bCvtPts @ 0x1C0096B14 (bCvtPts.c)
 *     bCvtVts @ 0x1C0096C90 (bCvtVts.c)
 *     ?vScale@ERECTL@@QEAAXVPOINTFL@@@Z @ 0x1C00EAC8C (-vScale@ERECTL@@QEAAXVPOINTFL@@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C00EAD60 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00EFDEC (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFToL(float a1, int *a2, char a3)
{
  unsigned int v4; // r9d
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx

  v4 = 1;
  v5 = (unsigned __int8)(SLODWORD(a1) >> 23) - 118 + 4;
  if ( (a3 & 8) == 0 )
    v5 = (unsigned __int8)(SLODWORD(a1) >> 23) - 118;
  if ( v5 > 40 )
  {
    return 0;
  }
  else
  {
    v6 = LODWORD(a1) & 0x7FFFFF | 0x800000LL;
    if ( v5 < 0 )
      v7 = v6 >> -(char)v5;
    else
      v7 = v6 << v5;
    v8 = v7 + 0x80000000LL;
    if ( (a3 & 1) != 0 )
      v8 = v7;
    v9 = v8 >> 32;
    v10 = -(int)v9;
    if ( a1 >= 0.0 )
      v10 = v9;
    *a2 = v10;
  }
  return v4;
}
