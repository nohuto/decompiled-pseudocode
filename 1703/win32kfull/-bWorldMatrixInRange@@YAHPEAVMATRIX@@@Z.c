/*
 * XREFs of ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C007D9EC
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C0074D20 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 */

__int64 __fastcall bWorldMatrixInRange(struct MATRIX *a1)
{
  unsigned int v1; // r9d
  unsigned int v3; // edx
  __int64 v4; // rcx
  float *v5; // r8
  EFLOAT *v6; // r10
  __int64 v7; // r8
  unsigned int v8; // edx
  float v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  if ( *((float *)a1 + 1) == 0.0 && *((float *)a1 + 2) == 0.0 )
  {
    if ( *(float *)a1 != 0.0 && *((float *)a1 + 3) != 0.0 )
      return v1;
    return 0;
  }
  if ( (unsigned int)EFLOAT::bIsZero(a1) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v4 + 12)) )
  {
    if ( (unsigned int)EFLOAT::bIsZero(v6) || (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v7 + 8)) )
      return v3;
  }
  else
  {
    v9 = (float)(v5[3] * *v5) - (float)(*(float *)v6 * v5[2]);
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v9) )
      return v8;
  }
  return v1;
}
