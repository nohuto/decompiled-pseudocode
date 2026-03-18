/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140690658
 * Callers:
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpIsMasterHive @ 0x140569B5C (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCheckAdminAccess @ 0x1406913A0 (CmpCheckAdminAccess.c)
 *     CmpGetMappingHiveForString @ 0x140692058 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x14069234C (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpReparseToVirtualPath @ 0x1406924B0 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14069357C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 *a1, char a2, unsigned int a3, int *a4)
{
  int VirtualizationIDFromFullVirtualPath; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v16; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[30]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  VirtualizationIDFromFullVirtualPath = 0;
  if ( *(_WORD *)(*(_QWORD *)(*a1 + 8) + 58LL) || (*(_DWORD *)(*a1 + 48) & 0x10) != 0 )
    return 0LL;
  if ( CmpVEEnabled )
  {
    v9 = *(_QWORD *)(*a1 + 8);
    if ( (*(_DWORD *)(v9 + 176) & 0x2000000) == 0 && !CmpIsMasterHive(v9) && !CmpIsSystemEntity(a4) )
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
            VirtualizationIDFromFullVirtualPath = CmpGetVirtualizationIDFromFullVirtualPath(&UnicodeString, v17);
            if ( VirtualizationIDFromFullVirtualPath >= 0 )
            {
              VirtualizationIDFromFullVirtualPath = CmpGetMappingHiveForString(v17, &v16);
              if ( VirtualizationIDFromFullVirtualPath >= 0 )
                CmpSearchKeyControlBlockTreeEx(
                  (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpSyncKcbCacheForHive,
                  v16,
                  0LL,
                  1);
            }
          }
          CmpUnlockRegistry();
          if ( VirtualizationIDFromFullVirtualPath >= 0 )
          {
            v13 = (_QWORD *)*a1;
            memset(v18, 0, sizeof(v18));
            v18[19] = &v18[18];
            v18[18] = &v18[18];
            memset(&v18[20], 0, 0x50uLL);
            LODWORD(v18[0]) = 8;
            v14 = 1600LL;
            v18[9] = v13[7];
            if ( a2 != 1 )
              v14 = 576LL;
            VirtualizationIDFromFullVirtualPath = ObReferenceObjectByName(
                                                    (__int64)&UnicodeString,
                                                    v14,
                                                    0LL,
                                                    a3,
                                                    (__int64)CmKeyObjectType,
                                                    0,
                                                    (__int64)v18,
                                                    a1);
            if ( VirtualizationIDFromFullVirtualPath < 0 )
              *a1 = (__int64)v13;
            else
              ObfDereferenceObject(v13);
            CmpCleanupParseContext((__int64)v18, 0);
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
