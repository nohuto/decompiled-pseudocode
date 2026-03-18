/*
 * XREFs of CmpGetMappingHiveForString @ 0x140692058
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x140692028 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x14069216C (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x140581BD0 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(__m128i *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  char *v6; // rsi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  _QWORD *v9; // r12
  char *v10; // rcx

  v4 = 0;
  v5 = CmpHashUnicodeComponent(a1);
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < CmpSIDToHiveMappingCount
    && (v6 = (char *)CmpSIDToHiveMapping + 32 * CmSIDMappingCacheHit, *((_DWORD *)v6 + 4) == v5)
    && *(_WORD *)v6 == a1->m128i_i16[0]
    && !(unsigned int)CmpCompareUnicodeString((__int64)v6, (__int64)a1, 0) )
  {
    *a2 = *((_QWORD *)v6 + 3);
  }
  else
  {
    v7 = CmpSIDToHiveMappingCount;
    v8 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      while ( 1 )
      {
        v9 = CmpSIDToHiveMapping;
        v10 = (char *)CmpSIDToHiveMapping + 32 * v8;
        if ( *((_DWORD *)v10 + 4) == v5
          && *(_WORD *)v10 == a1->m128i_i16[0]
          && !(unsigned int)CmpCompareUnicodeString((__int64)v10, (__int64)a1, 0) )
        {
          break;
        }
        if ( ++v8 >= v7 )
          goto LABEL_12;
      }
      CmSIDMappingCacheHit = v8;
      *a2 = v9[4 * v8 + 3];
    }
    else
    {
LABEL_12:
      v4 = -1073741275;
    }
  }
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}
