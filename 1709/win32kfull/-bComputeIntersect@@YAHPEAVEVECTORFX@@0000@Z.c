/*
 * XREFs of ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C00E7B5C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00E5590 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

_BOOL8 __fastcall bComputeIntersect(
        struct EVECTORFX *a1,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  _DWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  struct EVECTORFX *v9; // rcx
  int v10; // edx
  int v11; // r9d
  _BOOL8 result; // rax
  float v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch] BYREF

  v13 = (float)((float)*(int *)a4 * (float)*((int *)a2 + 1)) + (float)((float)*(int *)a2 * (float)-*((_DWORD *)a4 + 1));
  result = 0;
  if ( !EFLOAT::bIsZero((EFLOAT *)&v13) )
  {
    if ( (unsigned int)bFToL((unsigned int)(*v6 - *(_DWORD *)a1), &v13, 6LL) )
    {
      if ( (unsigned int)bFToL(v7, &v14, v8) )
      {
        if ( (unsigned int)(LODWORD(v13) + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v14 + 0x3FFFFFFF) <= 0x7FFFFFFD )
        {
          v9 = a5;
          v10 = LODWORD(v13) + *(_DWORD *)a1;
          v11 = v14 + *((_DWORD *)a1 + 1);
          *(_DWORD *)a5 = v10;
          *((_DWORD *)v9 + 1) = v11;
          if ( (unsigned int)(v10 + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v11 + 0x3FFFFFFF) <= 0x7FFFFFFD )
            return 1;
        }
      }
    }
  }
  return result;
}
