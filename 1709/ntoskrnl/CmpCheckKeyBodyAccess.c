/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x140692F64
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x140569CE0 (CmpVEPerformOpenAccessCheck.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406916E0 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C (CmpGetSecurityCacheEntryForKcbStack.c)
 *     SeOpenObjectAuditAlarm @ 0x140487F20 (SeOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeLockSubjectContext @ 0x1404A6DD0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1404B2450 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x14056D5D0 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS *a5)
{
  NTSTATUS v9; // esi
  BOOLEAN v10; // r14
  void *v11; // rsi
  ACCESS_MASK RemainingDesiredAccess; // r9d
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
  if ( CmpIsKeyDeletedForKeyBody((__int64)Object, a2) )
  {
    v9 = -1073741444;
LABEL_3:
    v10 = 0;
    goto LABEL_13;
  }
  AccessStatus = CmpStartKcbStackForTopLayerKcb((__int64)v21, Object[1]);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
    goto LABEL_3;
  SubjectContext = &a3->SubjectSecurityContext;
  v11 = (void *)(CmpGetSecurityCacheEntryForKcbStack((__int64)v21, a2) + 32);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  RemainingDesiredAccess = a3->RemainingDesiredAccess;
  GrantedAccess = 0;
  Privileges = 0LL;
  v10 = SeAccessCheck(
          v11,
          &a3->SubjectSecurityContext,
          1u,
          RemainingDesiredAccess,
          a3->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          a4,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    MiDeleteSubsection(Privileges);
  }
  if ( v10 )
  {
    v13 = GrantedAccess;
    a3->PreviouslyGrantedAccess |= GrantedAccess;
    a3->RemainingDesiredAccess &= ~(v13 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v14 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( a2 )
    SeOpenObjectAuditAlarmWithTransaction(
      v14,
      Object,
      0LL,
      v11,
      a3,
      0,
      v10,
      a4,
      (GUID *)(a2 + 88),
      &a3->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v14, Object, 0LL, v11, a3, 0, v10, a4, &a3->GenerateOnClose);
  v15 = SubjectContext;
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(v15);
  v9 = AccessStatus;
LABEL_13:
  if ( v21[3] )
    MiDeleteSubsection(v21[3]);
  *a5 = v9;
  return v10;
}
