/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x140790464
 * Callers:
 *     SepAdtAuditObjectAccessWithContext @ 0x1404D7D40 (SepAdtAuditObjectAccessWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x140577208 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140062400 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     SepIsRemovableStorageDevice @ 0x14079586C (SepIsRemovableStorageDevice.c)
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
