/*
 * XREFs of ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x18002A170
 * Callers:
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x18002A0B0 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampClientTypeReceivesCallbacks(int a1)
{
  return a1 >= 0 && (a1 <= 2 || a1 > 4 && a1 == 5);
}
