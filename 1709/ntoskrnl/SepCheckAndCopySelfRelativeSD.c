/*
 * XREFs of SepCheckAndCopySelfRelativeSD @ 0x14025EBF4
 * Callers:
 *     SeOperationAuditAlarm @ 0x140729F94 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14057BC40 (RtlAbsoluteToSelfRelativeSD.c)
 *     SepSecurityDescriptorStrictLength @ 0x14073202C (SepSecurityDescriptorStrictLength.c)
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
