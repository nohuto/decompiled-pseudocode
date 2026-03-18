/*
 * XREFs of SepQueryTypeString @ 0x1406F43D8
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406F2F48 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObQueryTypeName @ 0x1406C21D0 (ObQueryTypeName.c)
 */

__int64 __fastcall SepQueryTypeString(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v6[0] = 0LL;
  v6[1] = 0LL;
  result = ObQueryTypeName(a1, (__int64)v6, 0, &NumberOfBytes);
  if ( (_DWORD)result == -1073741820 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E546553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      result = ObQueryTypeName(a1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes);
      if ( (int)result < 0 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        return 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
