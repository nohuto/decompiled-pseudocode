/*
 * XREFs of CmpRemoveHiveFromMapping @ 0x140692404
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CmpRemoveHiveFromMapping(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx

  ExAcquireFastMutex(&CmpSIDMappingLock);
  v2 = 0;
  if ( CmpSIDToHiveMappingCount )
  {
    v3 = (char *)CmpSIDToHiveMapping + 24;
    while ( *v3 != a1 )
    {
      ++v2;
      v3 += 4;
      if ( v2 >= CmpSIDToHiveMappingCount )
        goto LABEL_7;
    }
    --CmpSIDToHiveMappingCount;
    v4 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v4 + 8), 0x65564D43u);
    memmove(
      (char *)CmpSIDToHiveMapping + v4,
      (char *)CmpSIDToHiveMapping + 32 * v2 + 32,
      32LL * (CmpSIDToHiveMappingCount - v2));
  }
LABEL_7:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
}
