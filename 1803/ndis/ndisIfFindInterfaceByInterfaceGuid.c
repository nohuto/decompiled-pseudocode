/*
 * XREFs of ndisIfFindInterfaceByInterfaceGuid @ 0x1C0024848
 * Callers:
 *     ndisIfAliasChange @ 0x1C004232C (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C00424F4 (ndisIfCreateOrUpdateInterface.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C0061E54 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00092E0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

struct _LIST_ENTRY *__fastcall ndisIfFindInterfaceByInterfaceGuid(struct _GUID *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v3; // rdi

  Flink = ndisIfList.Flink;
  v3 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( !(unsigned int)ndisCompareGuid(a1, (const struct _GUID *)((char *)&Flink[-44].Blink + 4)) )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (struct _LIST_ENTRY *)v3;
}
