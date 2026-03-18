/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x140730D94
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     SeMaximumAuditMask @ 0x14025DFC0 (SeMaximumAuditMask.c)
 *     SepRmGlobalSaclFind @ 0x140730E4C (SepRmGlobalSaclFind.c)
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
