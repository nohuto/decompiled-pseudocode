/*
 * XREFs of ObNormalizeHandleValue @ 0x1406C11C4
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1406F1884 (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406F2820 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406F2A24 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406F3C50 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x14008BBC0 (ObpIsKernelHandle.c)
 */

unsigned __int64 __fastcall ObNormalizeHandleValue(unsigned __int64 a1)
{
  __int64 v1; // rcx

  if ( ObpIsKernelHandle(a1, 0) )
    v1 ^= 0xFFFFFFFF80000000uLL;
  return v1 & 0xFFFFFFFFFFFFFFFCuLL;
}
