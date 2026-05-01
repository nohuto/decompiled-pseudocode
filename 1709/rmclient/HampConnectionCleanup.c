/*
 * XREFs of HampConnectionCleanup @ 0x180001624
 * Callers:
 *     HampConnectionDestroy @ 0x18000169C (HampConnectionDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall HampConnectionCleanup(__int64 a1)
{
  int v1; // edx
  int v2; // edx

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_DWORD *)(a1 + 112);
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        if ( v2 == 1 )
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010AE0, 1u, 0LL, a1);
      }
      else
      {
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010A50, 1u, 0LL, a1);
      }
    }
    else
    {
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109C0, 1u, 0LL, a1);
    }
  }
}
