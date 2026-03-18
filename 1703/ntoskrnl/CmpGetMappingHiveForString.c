/*
 * XREFs of CmpGetMappingHiveForString @ 0x1404D3514
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x1404D36E8 (CmpGetCmHiveFromVirtualPath.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmpGetVirtualStoreRoot @ 0x1406678D4 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x1404D3620 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(__m128i *a1, _QWORD *a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  unsigned int v6; // ebp
  _QWORD *v7; // r15
  char *v8; // rdi
  unsigned int v10; // edi
  char *v11; // rcx

  v4 = 0;
  v5 = CmpHashUnicodeComponent(a1);
  ExAcquireFastMutex(&CmpSIDMappingLock);
  v6 = CmpSIDToHiveMappingCount;
  v7 = CmpSIDToHiveMapping;
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < CmpSIDToHiveMappingCount
    && (v8 = (char *)CmpSIDToHiveMapping + 32 * CmSIDMappingCacheHit, *((_DWORD *)v8 + 4) == v5)
    && *(_WORD *)v8 == a1->m128i_i16[0]
    && !(unsigned int)CmpCompareUnicodeString(v8, a1, 0LL) )
  {
    *a2 = *((_QWORD *)v8 + 3);
  }
  else
  {
    v10 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v11 = (char *)&v7[4 * v10];
        if ( *((_DWORD *)v11 + 4) == v5
          && *(_WORD *)v11 == a1->m128i_i16[0]
          && !(unsigned int)CmpCompareUnicodeString(v11, a1, 0LL) )
        {
          break;
        }
        if ( ++v10 >= v6 )
          goto LABEL_14;
      }
      CmSIDMappingCacheHit = v10;
      *a2 = v7[4 * v10 + 3];
    }
    else
    {
LABEL_14:
      v4 = -1073741275;
    }
  }
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}
