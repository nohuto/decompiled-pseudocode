/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x140487F20
 * Callers:
 *     IopCreateSecurityCheck @ 0x140129858 (IopCreateSecurityCheck.c)
 *     ObCheckObjectAccess @ 0x140487DB0 (ObCheckObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectAuditAlarm(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        PBOOLEAN GenerateOnClose)
{
  if ( AccessMode )
    SeOpenObjectAuditAlarmWithTransaction(
      ObjectTypeName,
      Object,
      AbsoluteObjectName,
      SecurityDescriptor,
      AccessState,
      ObjectCreated,
      AccessGranted,
      AccessMode,
      0LL,
      GenerateOnClose);
}
