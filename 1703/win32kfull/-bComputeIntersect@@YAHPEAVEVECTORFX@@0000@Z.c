/*
 * XREFs of ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C0121C30
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C011FB48 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

_BOOL8 __fastcall bComputeIntersect(
        struct EVECTORFX *a1,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  float v6; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  _DWORD *v10; // r8
  float v11; // xmm5_4
  char v12; // r8
  float v13; // xmm4_4
  struct EVECTORFX *v14; // rcx
  int v15; // edx
  int v16; // r9d
  _BOOL8 result; // rax
  float v18; // [rsp+40h] [rbp+8h] BYREF
  int v19; // [rsp+44h] [rbp+Ch] BYREF

  v6 = (float)*(int *)a4;
  v7 = (float)-*((_DWORD *)a4 + 1);
  v8 = (float)*((int *)a2 + 1);
  v9 = (float)(v6 * v8) + (float)((float)*(int *)a2 * v7);
  v18 = v9;
  result = 0;
  if ( !EFLOAT::bIsZero((EFLOAT *)&v18) )
  {
    if ( (unsigned int)bFToL(
                         v11
                       * (float)((float)((float)((float)(v10[1] - *((_DWORD *)a1 + 1)) * v6)
                                       + (float)((float)(*v10 - *(_DWORD *)a1) * v7))
                               / v9),
                         (int *)&v18,
                         6) )
    {
      if ( (unsigned int)bFToL(v8 * v13, &v19, v12) )
      {
        if ( (unsigned int)(LODWORD(v18) + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v19 + 0x3FFFFFFF) <= 0x7FFFFFFD )
        {
          v14 = a5;
          v15 = LODWORD(v18) + *(_DWORD *)a1;
          v16 = v19 + *((_DWORD *)a1 + 1);
          *(_DWORD *)a5 = v15;
          *((_DWORD *)v14 + 1) = v16;
          if ( (unsigned int)(v15 + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v16 + 0x3FFFFFFF) <= 0x7FFFFFFD )
            return 1;
        }
      }
    }
  }
  return result;
}
