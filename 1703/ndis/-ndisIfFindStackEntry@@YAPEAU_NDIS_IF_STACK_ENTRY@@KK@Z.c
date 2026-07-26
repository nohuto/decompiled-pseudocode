/*
 * XREFs of ?ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z @ 0x1C001CECC
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C001CD40 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00435C0 (NdisIfDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_STACK_ENTRY *__fastcall ndisIfFindStackEntry(int a1, int a2)
{
  PVOID *v2; // rax
  __int64 v3; // r8

  v2 = (PVOID *)ndisIfStackEntryList;
  v3 = 0LL;
  while ( v2 != &ndisIfStackEntryList )
  {
    if ( *((_DWORD *)v2 + 4) == a1 && *((_DWORD *)v2 + 5) == a2 )
      return (struct _NDIS_IF_STACK_ENTRY *)v2;
    v2 = (PVOID *)*v2;
  }
  return (struct _NDIS_IF_STACK_ENTRY *)v3;
}
