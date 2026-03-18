/*
 * XREFs of MiIsStoreProcess @ 0x140073C0C
 * Callers:
 *     MiStoreCheckCandidatePage @ 0x140056BA4 (MiStoreCheckCandidatePage.c)
 *     MiCheckFatalAccessViolation @ 0x140073514 (MiCheckFatalAccessViolation.c)
 *     MiCombineWorkingSet @ 0x14007369C (MiCombineWorkingSet.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiOrderTrimList @ 0x1402152D4 (MiOrderTrimList.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1192) )
  {
    if ( *(_QWORD *)(v1 + 1296) == a1 )
      return 1LL;
  }
  return result;
}
