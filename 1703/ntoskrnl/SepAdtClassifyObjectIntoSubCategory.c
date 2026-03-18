/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x1406F462C
 * Callers:
 *     SeAuditHandleCreation @ 0x140458A5C (SeAuditHandleCreation.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14003E0E0 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     SepIsRemovableStorageDevice @ 0x1406FA530 (SepIsRemovableStorageDevice.c)
 */

__int64 __fastcall SepAdtClassifyObjectIntoSubCategory(__int64 a1, const UNICODE_STRING *a2, char a3, char a4)
{
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int16 v9; // r9
  __int64 v10; // r10
  bool v11; // zf

  if ( a1 )
  {
    v6 = (unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6 ^ *(unsigned __int8 *)(a1 - 24)] == CmKeyObjectType )
      return 117LL;
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6 ^ *(unsigned __int8 *)(a1 - 24)] == IoFileObjectType )
    {
      if ( SepAuditingEnabledForSubcategory(128, a3, a4)
        && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v8 + 8)) == 1 )
      {
        return v9;
      }
      return 116LL;
    }
    if ( ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == IoDeviceObjectType
      && SepAuditingEnabledForSubcategory(128, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(v10) == 1 )
    {
      return v9;
    }
    return 118LL;
  }
  if ( !a2 )
    return 118LL;
  if ( !RtlCompareUnicodeString(a2, &SepFileTypeName, 0) )
    return 116LL;
  v11 = RtlCompareUnicodeString(a2, &SepRegistryTypeName, 0) == 0;
  result = 117LL;
  if ( !v11 )
    return 118LL;
  return result;
}
