/*
 * XREFs of SeExamineGlobalSacl @ 0x14079456C
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x1404C06E0 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140653BD0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406F6470 (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140791310 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     SeExamineSacl @ 0x140790F20 (SeExamineSacl.c)
 *     SepRmGlobalSaclFind @ 0x140794738 (SepRmGlobalSaclFind.c)
 */

void __stdcall SeExamineGlobalSacl(
        PUNICODE_STRING ObjectType,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  PBOOLEAN v7; // rdi
  BOOLEAN v8; // bl
  struct _KTHREAD *CurrentThread; // rax
  ACL *v14; // rcx
  char v15; // al
  BOOLEAN v16[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    v17 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind(&v17, 0LL, ObjectType, 0LL) >= 0 )
    {
      v14 = *(ACL **)(v17 + 24);
      if ( v14 )
      {
        SeExamineSacl(v14, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v16);
        if ( *v7 || (v15 = 0, (_BYTE)GenerateAudit) )
          v15 = 1;
        *v7 = v15;
        if ( GenerateAlarm )
        {
          if ( *GenerateAlarm || v16[0] )
            v8 = 1;
          *GenerateAlarm = v8;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
