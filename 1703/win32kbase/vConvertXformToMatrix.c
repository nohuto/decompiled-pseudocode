/*
 * XREFs of vConvertXformToMatrix @ 0x1C0022E90
 * Callers:
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0021908 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0021948 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00777EC (bFToL.c)
 */

_BOOL8 __fastcall vConvertXformToMatrix(float *a1, float *a2)
{
  EFLOAT *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // zf
  _BOOL8 result; // rax

  v2 = (EFLOAT *)(a2 + 5);
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  a2[4] = a1[4];
  a2[5] = a1[5];
  if ( !(unsigned int)bFToL(a1, a2 + 6, 6LL) )
    a2[6] = 0.0;
  if ( !(unsigned int)bFToL(v4, a2 + 7, v5) )
    a2[7] = 0.0;
  v6 = a2[4] == *(float *)v2;
  *((_DWORD *)a2 + 8) = 32;
  if ( v6 && EFLOAT::bIsZero(v2) )
    *((_DWORD *)a2 + 8) = 96;
  result = EFLOAT::bIsZero((EFLOAT *)(a2 + 1));
  if ( result )
  {
    result = EFLOAT::bIsZero((EFLOAT *)(a2 + 2));
    if ( result )
    {
      *((_DWORD *)a2 + 8) |= 1u;
      result = EFLOAT::bIs1((EFLOAT *)a2);
      if ( result )
      {
        result = EFLOAT::bIs1((EFLOAT *)(a2 + 3));
        if ( result )
          *((_DWORD *)a2 + 8) |= 2u;
      }
    }
  }
  return result;
}
