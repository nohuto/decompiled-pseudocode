/*
 * XREFs of PsGetPermanentSiloContext @ 0x140103440
 * Callers:
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1405BFDE4 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x1405E6350 (ObInitServerSilo.c)
 *     CmGetRootKeyObjectForSilo @ 0x140694724 (CmGetRootKeyObjectForSilo.c)
 *     VRegEnabledInJob @ 0x1406A3A3C (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406A3C8C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406A3FE4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406A491C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1406A4E34 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_14041B978;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
