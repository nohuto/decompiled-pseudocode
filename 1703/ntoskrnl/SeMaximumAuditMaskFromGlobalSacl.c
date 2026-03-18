/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x1406F9340
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SeMaximumAuditMask @ 0x14024687C (SeMaximumAuditMask.c)
 *     SepRmGlobalSaclFind @ 0x1406F93F8 (SepRmGlobalSaclFind.c)
 */

void __stdcall SeMaximumAuditMaskFromGlobalSacl(
        PUNICODE_STRING ObjectTypeName,
        ACCESS_MASK GrantedAccess,
        PACCESS_TOKEN Token,
        PACCESS_MASK AuditMask)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( ObjectTypeName && ObjectTypeName->Buffer )
  {
    v9[0] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind(v9, 0LL, ObjectTypeName, 0LL) >= 0 )
    {
      v10 = 0;
      SeMaximumAuditMask(*(_QWORD *)(v9[0] + 24LL), GrantedAccess, (__int64)Token, &v10);
      *AuditMask |= v10;
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
