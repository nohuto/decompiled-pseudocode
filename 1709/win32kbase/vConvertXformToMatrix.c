/*
 * XREFs of vConvertXformToMatrix @ 0x1C009E2D0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0054A60 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0054AA0 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0070F2C (bFToL.c)
 */

_BOOL8 __fastcall vConvertXformToMatrix(float *a1, _DWORD *a2)
{
  float *v2; // rdi
  float v4; // xmm0_4
  char v5; // r8
  bool v6; // zf
  _BOOL8 result; // rax

  v2 = (float *)(a2 + 5);
  *a2 = *(_DWORD *)a1;
  a2[1] = *((_DWORD *)a1 + 1);
  a2[2] = *((_DWORD *)a1 + 2);
  a2[3] = *((_DWORD *)a1 + 3);
  v4 = a1[4];
  *((float *)a2 + 4) = v4;
  a2[5] = *((_DWORD *)a1 + 5);
  if ( !(unsigned int)bFToL(v4, a2 + 6, 6) )
    a2[6] = 0;
  if ( !(unsigned int)bFToL(*v2, a2 + 7, v5) )
    a2[7] = 0;
  v6 = *((float *)a2 + 4) == *v2;
  a2[8] = 32;
  if ( v6 && EFLOAT::bIsZero((EFLOAT *)v2) )
    a2[8] = 96;
  result = EFLOAT::bIsZero((EFLOAT *)(a2 + 1));
  if ( result )
  {
    result = EFLOAT::bIsZero((EFLOAT *)(a2 + 2));
    if ( result )
    {
      a2[8] |= 1u;
      result = EFLOAT::bIs1((EFLOAT *)a2);
      if ( result )
      {
        result = EFLOAT::bIs1((EFLOAT *)(a2 + 3));
        if ( result )
          a2[8] |= 2u;
      }
    }
  }
  return result;
}
