/*
 * XREFs of ObNormalizeHandleValue @ 0x140759094
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14078D694 (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14078E650 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14078E854 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14078FA84 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x14003EC88 (ObpIsKernelHandle.c)
 */

unsigned __int64 __fastcall ObNormalizeHandleValue(unsigned __int64 a1)
{
  __int64 v1; // rcx

  if ( ObpIsKernelHandle(a1, 0) )
    v1 ^= 0xFFFFFFFF80000000uLL;
  return v1 & 0xFFFFFFFFFFFFFFFCuLL;
}
