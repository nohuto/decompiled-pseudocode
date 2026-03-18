/*
 * XREFs of SepQueryNameString @ 0x1404626BC
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406F2F48 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14056432C (PsGetAllocatedFullProcessImageNameEx.c)
 */

__int64 __fastcall SepQueryNameString(__int64 a1, PVOID *a2)
{
  int NameStringMode; // eax
  int v5; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  NameStringMode = ObQueryNameStringMode(a1, 0, 0, (unsigned int)&NumberOfBytes, 0);
  v5 = NameStringMode;
  if ( NameStringMode == -1073741820 || NameStringMode == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E4F6553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameStringMode(a1, (_DWORD)PoolWithTag, NumberOfBytes, (unsigned int)&NumberOfBytes, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx(a1, a2);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
