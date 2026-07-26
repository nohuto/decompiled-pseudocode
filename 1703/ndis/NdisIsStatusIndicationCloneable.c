/*
 * XREFs of NdisIsStatusIndicationCloneable @ 0x1C0059AA0
 * Callers:
 *     NdisFIndicateStatus @ 0x1C0020AA0 (NdisFIndicateStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall NdisIsStatusIndicationCloneable(int a1)
{
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  return bsearch(
           &Key,
           &ndisCloneableStatusIndications,
           0x8DuLL,
           4uLL,
           (int (__cdecl *)(const void *, const void *))ndisCompareStatusCodes) != 0LL;
}
