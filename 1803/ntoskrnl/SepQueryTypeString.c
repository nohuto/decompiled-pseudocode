/*
 * XREFs of SepQueryTypeString @ 0x14079020C
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405466C4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14055CD48 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14078ED7C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140791310 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObQueryTypeName @ 0x14075A020 (ObQueryTypeName.c)
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
