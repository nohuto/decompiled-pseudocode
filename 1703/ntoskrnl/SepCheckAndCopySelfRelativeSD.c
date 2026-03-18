/*
 * XREFs of SepCheckAndCopySelfRelativeSD @ 0x1402474C4
 * Callers:
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140572C00 (RtlAbsoluteToSelfRelativeSD.c)
 *     SepSecurityDescriptorStrictLength @ 0x1406FA5F0 (SepSecurityDescriptorStrictLength.c)
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
