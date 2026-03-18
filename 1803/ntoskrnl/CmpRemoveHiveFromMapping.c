/*
 * XREFs of CmpRemoveHiveFromMapping @ 0x1405EEB4C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CmpRemoveHiveFromMapping(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rbx

  ExAcquireFastMutex(&CmpSIDMappingLock);
  v2 = 0;
  if ( CmpSIDToHiveMappingCount )
  {
    v3 = (char *)CmpSIDToHiveMapping + 24;
    while ( 1 )
    {
      v4 = v2 + 1;
      if ( *v3 == a1 )
        break;
      v3 += 4;
      ++v2;
      if ( v4 >= CmpSIDToHiveMappingCount )
        goto LABEL_5;
    }
    --CmpSIDToHiveMappingCount;
    v5 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v5 + 8), 0x65564D43u);
    memmove(
      (char *)CmpSIDToHiveMapping + v5,
      (char *)CmpSIDToHiveMapping + 32 * v4,
      32LL * (CmpSIDToHiveMappingCount - v2));
  }
LABEL_5:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
}
