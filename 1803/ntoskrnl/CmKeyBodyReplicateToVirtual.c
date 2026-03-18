/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1406F4248
 * Callers:
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KCBNeedsVirtualImage @ 0x1400BCF48 (KCBNeedsVirtualImage.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140489AB4 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x140544AA0 (SeDeleteAccessState.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCheckAdminAccess @ 0x1406F4BB0 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1406F5694 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406F6470 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  _QWORD *v8; // r14
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int AccessStateFromSubjectContext; // ebx
  int v14; // eax
  __int64 v15; // rdx
  char v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18; // [rsp+41h] [rbp-BFh]
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v21; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp-98h]
  _QWORD v23[38]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[48]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v25[5]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v26[28]; // [rsp+270h] [rbp+170h] BYREF

  v18 = a2;
  v22 = a1;
  v7 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v23, 0, 0x128uLL);
  v23[19] = &v23[18];
  v23[18] = &v23[18];
  memset(&v23[27], 0, 0x50uLL);
  v19 = 0LL;
  CmpAttachToRegistryProcess((__int64)v24);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v9 = v8[1];
    CmpLockKcbExclusive(v9);
    if ( !KCBNeedsVirtualImage() )
    {
LABEL_27:
      AccessStateFromSubjectContext = -1073741790;
      goto LABEL_28;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck((__int64)v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
    if ( (unsigned __int8)CmpReparseToVirtualPath(v9, v10, a4, &DestinationString) )
    {
      CmpUnlockKcb(v9, v10, v11, v12);
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v9 + 176) & 0x20) != 0 )
      goto LABEL_27;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(a3, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v9 + 80) + 32LL));
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
    if ( !v17 )
      goto LABEL_27;
    LOBYTE(v11) = v7;
    v14 = CmpReplicateKeyToVirtual(v9, a4, v11, &v21);
    AccessStateFromSubjectContext = v14;
    if ( v14 != -1073741739 )
      break;
    CmpUnlockKcb(v9, v10, v11, v12);
    CmpUnlockRegistry();
    v7 = 1;
  }
  if ( v14 < 0 )
    goto LABEL_28;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(v9 + 80) + 32LL, a4, &v17);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_28;
  if ( v17 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v9, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v9, v10, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
LABEL_28:
    CmpUnlockKcb(v9, v10, v11, v12);
    CmpUnlockRegistry();
    goto LABEL_29;
  }
  CmpUnlockKcb(v9, v10, v11, v12);
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpSyncKcbCacheForHive,
    v21,
    0LL,
    1);
LABEL_21:
  CmpUnlockRegistry();
  LODWORD(v23[0]) = 8;
  v23[9] = v8[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (int *)v25,
                                    v26,
                                    a3,
                                    (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v15 = 1600LL;
    if ( v18 != 1 )
      v15 = 576LL;
    AccessStateFromSubjectContext = ObReferenceObjectByName(
                                      (__int64)&DestinationString,
                                      v15,
                                      (__int64 *)v25,
                                      a3,
                                      (__int64)CmKeyObjectType,
                                      0,
                                      (__int64)v23,
                                      &v19);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v22 = v19;
      ObfDereferenceObject(v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v25);
  }
LABEL_29:
  CmpCleanupParseContext((__int64)v23, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  KiUnstackDetachProcess((__int64)v24, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
