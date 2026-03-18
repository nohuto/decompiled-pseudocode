/*
 * XREFs of SepCheckAndCopySelfRelativeSD @ 0x1402A0694
 * Callers:
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1405E1160 (RtlAbsoluteToSelfRelativeSD.c)
 *     SepSecurityDescriptorStrictLength @ 0x14079592C (SepSecurityDescriptorStrictLength.c)
 */

__int64 __fastcall SepCheckAndCopySelfRelativeSD(__int16 *a1, PVOID *a2, ULONG *a3, _BYTE *a4)
{
  NTSTATUS v4; // ebx
  PVOID PoolWithTag; // rax
  void *v9; // rcx
  PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  AbsoluteSecurityDescriptor = a1;
  v4 = 0;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  if ( a1 )
  {
    if ( a1[1] < 0 )
    {
      *a3 = SepSecurityDescriptorStrictLength();
      *a2 = v9;
    }
    else
    {
      v4 = RtlAbsoluteToSelfRelativeSD(&AbsoluteSecurityDescriptor, 0LL, a3);
      if ( v4 == -1073741789 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a3, 0x70416553u);
        *a2 = PoolWithTag;
        if ( PoolWithTag )
        {
          v4 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, PoolWithTag, a3);
          if ( v4 >= 0 )
          {
            *a4 = 1;
          }
          else
          {
            ExFreePoolWithTag(*a2, 0);
            *a2 = 0LL;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v4;
}
