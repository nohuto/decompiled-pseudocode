/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x1404D7D40
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14078E650 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14078E854 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140791310 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1404D5B10 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140790464 (SepAdtClassifyObjectIntoSubCategory.c)
 */

char __fastcall SepAdtAuditObjectAccessWithContext(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        char a6,
        unsigned __int16 *a7)
{
  int v11; // edx
  char result; // al
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 v15; // ax

  *a7 = 118;
  v11 = (a3 != 0 ? 3 : 0) | 0x30;
  if ( !a4 )
    v11 = a3 != 0 ? 3 : 0;
  result = SepAdtAuditThisEventByCategoryWithContext(2u, v11, a5);
  if ( result )
  {
    if ( a1 || a6 )
    {
      LOBYTE(v14) = a4;
      LOBYTE(v13) = a3;
      v15 = SepAdtClassifyObjectIntoSubCategory(a1, a2, v13, v14);
    }
    else if ( a2 && RtlPrefixUnicodeString(&SepSamTypeNamePrefix, a2, 0) )
    {
      v15 = 119;
    }
    else
    {
      v15 = 120;
    }
    *a7 = v15;
    return SepAdtAuditThisEventWithContext(v15, a3, a4, a5);
  }
  return result;
}
