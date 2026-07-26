/*
 * XREFs of ndisGrabOidCancellationList @ 0x1C00453EC
 * Callers:
 *     ndisCancelOidRequestOnFilter @ 0x1C004431C (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00444B0 (ndisCancelOidRequestOnMiniport.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisGrabOidCancellationList(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 *result; // rax
  __int64 v6; // r8
  __int64 **v7; // r9
  __int64 **v8; // r9

  a2[1] = (__int64)a2;
  *a2 = (__int64)a2;
  result = *(__int64 **)a1;
  if ( *(_QWORD *)a1 != a1 )
  {
    if ( a4 )
    {
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *(_QWORD *)(a1 + 8) = a1;
      *(_QWORD *)a1 = a1;
      *(_QWORD *)(*a2 + 8) = a2;
      result = (__int64 *)a2[1];
      *result = (__int64)a2;
    }
    else
    {
      do
      {
        v6 = *result;
        if ( *(result - 7) == a3 )
        {
          if ( *(__int64 **)(v6 + 8) != result || (v7 = (__int64 **)result[1], *v7 != result) )
            __fastfail(3u);
          *v7 = (__int64 *)v6;
          *(_QWORD *)(v6 + 8) = v7;
          v8 = (__int64 **)a2[1];
          if ( *v8 != a2 )
            __fastfail(3u);
          *result = (__int64)a2;
          result[1] = (__int64)v8;
          *v8 = result;
          a2[1] = (__int64)result;
        }
        result = (__int64 *)v6;
      }
      while ( v6 != a1 );
    }
  }
  return result;
}
