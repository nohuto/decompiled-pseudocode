/*
 * XREFs of HampConnectionCleanup @ 0x18000D350
 * Callers:
 *     HampConnectionDestroy @ 0x18000D468 (HampConnectionDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall HampConnectionCleanup(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_DWORD *)(a1 + 112);
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              if ( v5 == 1 )
                NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010970, 1u, 0LL, a1);
            }
            else
            {
              NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B48, 1u, 0LL, a1);
            }
          }
          else
          {
            NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109A0, 1u, 0LL, a1);
          }
        }
        else
        {
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108A8, 1u, 0LL, a1);
        }
      }
      else
      {
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B18, 1u, 0LL, a1);
      }
    }
    else
    {
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010878, 1u, 0LL, a1);
    }
  }
}
