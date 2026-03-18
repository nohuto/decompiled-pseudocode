/*
 * XREFs of SeExamineGlobalSacl @ 0x140730C80
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x1404852E4 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405E9290 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x14069357C (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14072D060 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SepRmGlobalSaclFind @ 0x140730E4C (SepRmGlobalSaclFind.c)
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
