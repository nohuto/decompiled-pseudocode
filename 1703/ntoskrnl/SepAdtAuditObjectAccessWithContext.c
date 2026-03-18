/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x14046C4F0
 * Callers:
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406F2820 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406F2A24 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046C880 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406F462C (SepAdtClassifyObjectIntoSubCategory.c)
 */

__int64 __fastcall SepAdtAuditObjectAccessWithContext(
        __int64 a1,
        const UNICODE_STRING *a2,
        char a3,
        char a4,
        __int64 a5,
        char a6,
        unsigned __int16 *a7)
{
  unsigned int v11; // r10d
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // ax

  *a7 = 118;
  v11 = a3 != 0 ? 3 : 0;
  v12 = v11 | 0x30;
  if ( !a4 )
    v12 = v11;
  result = SepAdtAuditThisEventByCategoryWithContext(2LL, v12, a5);
  if ( (_BYTE)result )
  {
    if ( a1 || a6 )
    {
      LOBYTE(v16) = a4;
      LOBYTE(v15) = a3;
      v17 = SepAdtClassifyObjectIntoSubCategory(a1, a2, v15, v16);
    }
    else if ( a2 && RtlPrefixUnicodeString(&SepSamTypeNamePrefix, a2, 0) )
    {
      v17 = 119;
    }
    else
    {
      v17 = 120;
    }
    LOBYTE(v15) = a4;
    LOBYTE(v14) = a3;
    *a7 = v17;
    return SepAdtAuditThisEventWithContext(v17, v14, v15, a5);
  }
  return result;
}
