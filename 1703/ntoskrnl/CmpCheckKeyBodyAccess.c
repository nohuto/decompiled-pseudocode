/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x14056C688
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x1404D4178 (CmpVEPerformOpenAccessCheck.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406671C0 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     SeOpenObjectAuditAlarm @ 0x1404F6170 (SeOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404FCEA0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     SeLockSubjectContext @ 0x1405086C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        NTSTATUS *a5)
{
  NTSTATUS v9; // esi
  void *v10; // rsi
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v12; // r14
  ACCESS_MASK v13; // eax
  UNICODE_STRING *v14; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v15; // rcx
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-1h] BYREF
  NTSTATUS AccessStatus; // [rsp+5Ch] [rbp+3h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp+7h] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp+Fh]
  PPRIVILEGE_SET v21[5]; // [rsp+70h] [rbp+17h] BYREF

  memset(v21, 0, 0x20uLL);
  WORD1(v21[0]) = -1;
  if ( CmpIsKeyDeletedForKeyBody((__int64)Object, ObjectCreated) )
  {
    v9 = -1073741444;
    goto LABEL_13;
  }
  AccessStatus = CmpStartKcbStackForTopLayerKcb((__int64)v21, Object[1]);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
  {
LABEL_13:
    v12 = 0;
    goto LABEL_10;
  }
  SubjectContext = &AccessState->SubjectSecurityContext;
  v10 = (void *)(CmpGetSecurityCacheEntryForKcbStack((__int64)v21, ObjectCreated) + 32);
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  GrantedAccess = 0;
  Privileges = 0LL;
  v12 = SeAccessCheck(
          v10,
          &AccessState->SubjectSecurityContext,
          1u,
          RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    MiDeleteSubsection(Privileges);
  }
  if ( v12 )
  {
    v13 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v13 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v14 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( ObjectCreated )
    SeOpenObjectAuditAlarmWithTransaction(
      v14,
      Object,
      0LL,
      v10,
      AccessState,
      0,
      v12,
      AccessMode,
      (GUID *)(ObjectCreated + 88),
      &AccessState->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v14, Object, 0LL, v10, AccessState, 0, v12, AccessMode, &AccessState->GenerateOnClose);
  v15 = SubjectContext;
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(v15);
  v9 = AccessStatus;
LABEL_10:
  if ( v21[3] )
    MiDeleteSubsection(v21[3]);
  *a5 = v9;
  return v12;
}
