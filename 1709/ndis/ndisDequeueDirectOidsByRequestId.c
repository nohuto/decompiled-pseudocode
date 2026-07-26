/*
 * XREFs of ndisDequeueDirectOidsByRequestId @ 0x1C0070090
 * Callers:
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006E314 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisDequeueDirectOidsByRequestId(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 *result; // rax
  __int64 v6; // rcx
  __int64 **v7; // rdx
  __int64 **v8; // rdx

  v3 = a1 + 584;
  result = *(__int64 **)(a1 + 584);
  if ( result != (__int64 *)(a1 + 584) )
  {
    do
    {
      v6 = *result;
      if ( *(result - 7) == a2 )
      {
        if ( *(__int64 **)(v6 + 8) != result || (v7 = (__int64 **)result[1], *v7 != result) )
          __fastfail(3u);
        *v7 = (__int64 *)v6;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = *(__int64 ***)(a3 + 8);
        if ( *v8 != (__int64 *)a3 )
          __fastfail(3u);
        *result = a3;
        result[1] = (__int64)v8;
        *v8 = result;
        *(_QWORD *)(a3 + 8) = result;
      }
      result = (__int64 *)v6;
    }
    while ( v6 != v3 );
  }
  return result;
}
