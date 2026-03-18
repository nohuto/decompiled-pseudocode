/*
 * XREFs of ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C0290978
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C0291820 (NtGdiEngGradientFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bValidVertexMeshData(
        struct _TRIVERTEX *a1,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v6; // r10
  __int64 result; // rax
  struct _TRIVERTEX *v8; // r9
  unsigned int *i; // r8
  struct _TRIVERTEX *v10; // rdx
  struct _TRIVERTEX *v11; // rdx
  struct _TRIVERTEX *v12; // rdx
  struct _TRIVERTEX *v13; // rdx
  struct _TRIVERTEX *v14; // rdx

  v6 = (unsigned int *)a2;
  if ( a3 <= 1 )
    return 0LL;
  v8 = &a1[a3 - 1];
  result = 0LL;
  if ( a5 <= 1 )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v13 = &a1[*v6];
        if ( v13 < a1 )
          break;
        if ( v13 > v8 )
          break;
        v14 = &a1[v6[1]];
        if ( v14 < a1 || v14 > v8 )
          break;
        LODWORD(result) = result + 1;
        v6 += 2;
        if ( (unsigned int)result >= a4 )
          return 1LL;
      }
      return 0LL;
    }
  }
  else
  {
    if ( a5 != 2 )
      return result;
    if ( a4 )
    {
      for ( i = (unsigned int *)(a2 + 8); ; i += 3 )
      {
        v10 = &a1[*(i - 2)];
        if ( v10 < a1 )
          break;
        if ( v10 > v8 )
          break;
        v11 = &a1[*(i - 1)];
        if ( v11 < a1 )
          break;
        if ( v11 > v8 )
          break;
        v12 = &a1[*i];
        if ( v12 < a1 || v12 > v8 )
          break;
        LODWORD(result) = result + 1;
        if ( (unsigned int)result >= a4 )
          return 1LL;
      }
      return 0LL;
    }
  }
  return 1LL;
}
