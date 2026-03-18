/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x14072C0C4
 * Callers:
 *     SepAdtAuditObjectAccessWithContext @ 0x14046BB0C (SepAdtAuditObjectAccessWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x140595FF8 (SeAuditHandleCreation.c)
 *     SeOperationAuditAlarm @ 0x140729F94 (SeOperationAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1400151A0 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     SepIsRemovableStorageDevice @ 0x140731F6C (SepIsRemovableStorageDevice.c)
 */

__int64 __fastcall SepAdtClassifyObjectIntoSubCategory(__int64 a1, const UNICODE_STRING *a2, char a3, char a4)
{
  POBJECT_TYPE *v5; // rax
  __int64 result; // rax
  __int64 v7; // r11
  unsigned __int16 v8; // r9
  __int64 v9; // r11
  bool v10; // zf

  if ( a1 )
  {
    v5 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
    if ( v5 == CmKeyObjectType )
      return 117LL;
    if ( v5 == IoFileObjectType )
    {
      if ( SepAuditingEnabledForSubcategory(128, a3, a4)
        && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v7 + 8)) == 1 )
      {
        return v8;
      }
      return 116LL;
    }
    if ( v5 == (POBJECT_TYPE *)IoDeviceObjectType
      && SepAuditingEnabledForSubcategory(128, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(v9) == 1 )
    {
      return v8;
    }
    return 118LL;
  }
  if ( !a2 )
    return 118LL;
  if ( !RtlCompareUnicodeString(a2, &SepFileTypeName, 0) )
    return 116LL;
  v10 = RtlCompareUnicodeString(a2, &SepRegistryTypeName, 0) == 0;
  result = 117LL;
  if ( !v10 )
    return 118LL;
  return result;
}
