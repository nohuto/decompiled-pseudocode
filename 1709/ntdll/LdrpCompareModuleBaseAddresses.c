/*
 * XREFs of LdrpCompareModuleBaseAddresses @ 0x1800297E8
 * Callers:
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180029BB0 (LdrpInsertModuleToIndexLockHeld.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCompareModuleBaseAddresses(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 - 152);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
