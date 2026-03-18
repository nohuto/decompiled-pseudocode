/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x14056AABC
 * Callers:
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140521290 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpGetMappingHiveForString @ 0x1404D3514 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1404D3718 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpIsMasterHive @ 0x1404D3FBC (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpCheckAdminAccess @ 0x14056ADE8 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x14056B1F0 (CmpReparseToVirtualPath.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140668544 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 *a1, char a2, unsigned int a3, int *a4)
{
  int VirtualizationIDFromFullVirtualPath; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v18; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[28]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  VirtualizationIDFromFullVirtualPath = 0;
  if ( *(_WORD *)(*(_QWORD *)(*a1 + 8) + 58LL) || (*(_DWORD *)(*a1 + 48) & 0x10) != 0 )
    return 0LL;
  if ( CmpVEEnabled )
  {
    v9 = *(_QWORD *)(*a1 + 8);
    if ( (*(_WORD *)(v9 + 178) & 0x200) == 0 && !CmpIsMasterHive(v9) && !CmpIsSystemEntity(a4) )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(*a1 + 8));
      if ( CmpIsKeyDeletedForKeyBody(*a1, 0LL) )
      {
        VirtualizationIDFromFullVirtualPath = -1073741444;
      }
      else
      {
        if ( (unsigned __int8)CmpReparseToVirtualPath(*(_QWORD *)(*a1 + 8), v10, &UnicodeString) )
        {
LABEL_14:
          CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
          if ( VirtualizationIDFromFullVirtualPath >= 0 )
          {
            VirtualizationIDFromFullVirtualPath = CmpGetVirtualizationIDFromFullVirtualPath(
                                                    &UnicodeString,
                                                    (unsigned __int16 *)&v18);
            if ( VirtualizationIDFromFullVirtualPath >= 0 )
            {
              VirtualizationIDFromFullVirtualPath = CmpGetMappingHiveForString(&v18, &v17);
              if ( VirtualizationIDFromFullVirtualPath >= 0 )
              {
                LOBYTE(v13) = 1;
                CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, v17, 0LL, v13);
              }
            }
          }
          CmpUnlockRegistry();
          if ( VirtualizationIDFromFullVirtualPath >= 0 )
          {
            v14 = (_QWORD *)*a1;
            memset(v19, 0, sizeof(v19));
            LODWORD(v19[0]) = 8;
            v15 = 576LL;
            v19[9] = v14[7];
            if ( a2 == 1 )
              v15 = 1600LL;
            VirtualizationIDFromFullVirtualPath = ObReferenceObjectByName(
                                                    (__int64)&UnicodeString,
                                                    v15,
                                                    0LL,
                                                    a3,
                                                    (__int64)CmKeyObjectType,
                                                    0,
                                                    (__int64)v19,
                                                    a1);
            if ( VirtualizationIDFromFullVirtualPath < 0 )
              *a1 = (__int64)v14;
            else
              ObfDereferenceObject(v14);
            CmpCleanupParseContext((__int64)v19, 0);
          }
          RtlFreeUnicodeString(&UnicodeString);
          return (unsigned int)VirtualizationIDFromFullVirtualPath;
        }
        v11 = *(_QWORD *)(*a1 + 8);
        if ( (*(_DWORD *)(v11 + 176) & 0x20) == 0 )
        {
          VirtualizationIDFromFullVirtualPath = CmpCheckAdminAccess(
                                                  a3,
                                                  (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v11 + 80) + 32LL));
          if ( VirtualizationIDFromFullVirtualPath >= 0 )
            VirtualizationIDFromFullVirtualPath = -1073741790;
          goto LABEL_14;
        }
        RtlFreeUnicodeString(&UnicodeString);
        VirtualizationIDFromFullVirtualPath = -1073741790;
      }
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry();
    }
  }
  return (unsigned int)VirtualizationIDFromFullVirtualPath;
}
