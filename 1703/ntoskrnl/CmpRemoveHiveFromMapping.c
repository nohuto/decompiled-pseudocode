/*
 * XREFs of CmpRemoveHiveFromMapping @ 0x140667944
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
