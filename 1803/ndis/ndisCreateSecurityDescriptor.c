/*
 * XREFs of ndisCreateSecurityDescriptor @ 0x1C00B4A88
 * Callers:
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     ndisBuildDeviceAcl @ 0x1C00B4BE8 (ndisBuildDeviceAcl.c)
 */

__int64 __fastcall ndisCreateSecurityDescriptor(void *a1, PSECURITY_DESCRIPTOR *a2, unsigned int a3)
{
  NTSTATUS ObjectSecurity; // ebx
  ULONG v6; // ebx
  PVOID PoolWithTag; // rax
  PSECURITY_DESCRIPTOR v8; // rsi
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN MemoryAllocated[8]; // [rsp+30h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-48h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-40h] BYREF
  DWORD SecurityInformation; // [rsp+48h] [rbp-38h] BYREF
  _BYTE ModificationDescriptor[40]; // [rsp+50h] [rbp-30h] BYREF

  *a2 = 0LL;
  Dacl = 0LL;
  SecurityDescriptor = 0LL;
  MemoryAllocated[0] = 0;
  SecurityInformation = 4;
  ObjectSecurity = ObGetObjectSecurity(a1, &SecurityDescriptor, MemoryAllocated);
  if ( ObjectSecurity >= 0 && SecurityDescriptor )
  {
    ObjectSecurity = ndisBuildDeviceAcl(&Dacl, a3);
    if ( ObjectSecurity >= 0 )
    {
      RtlCreateSecurityDescriptor(ModificationDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(ModificationDescriptor, 1u, Dacl, 0);
      v6 = RtlLengthSecurityDescriptor(SecurityDescriptor);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6573444Eu);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, SecurityDescriptor, v6);
        *a2 = v8;
        GenericMapping = IoGetFileObjectGenericMapping();
        ObjectSecurity = SeSetSecurityDescriptorInfo(
                           0LL,
                           &SecurityInformation,
                           ModificationDescriptor,
                           a2,
                           NonPagedPoolNx,
                           GenericMapping);
        if ( ObjectSecurity < 0 )
        {
          ExFreePoolWithTag(*a2, 0);
          *a2 = 0LL;
        }
        else
        {
          if ( *a2 != v8 )
            ExFreePoolWithTag(v8, 0);
          ObjectSecurity = 0;
        }
      }
      else
      {
        ObjectSecurity = -1073741670;
      }
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
    if ( Dacl )
      ExFreePoolWithTag(Dacl, 0);
  }
  return (unsigned int)ObjectSecurity;
}
