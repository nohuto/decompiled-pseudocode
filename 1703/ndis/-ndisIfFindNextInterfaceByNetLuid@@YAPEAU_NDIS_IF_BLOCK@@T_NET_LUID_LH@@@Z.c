/*
 * XREFs of ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0041184
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIfFindNextInterfaceByNetLuid(union _NET_LUID_LH a1)
{
  _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx

  Flink = ndisIfList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( Flink[5].Flink > (_LIST_ENTRY *)a1.Value )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY *)v2;
}
