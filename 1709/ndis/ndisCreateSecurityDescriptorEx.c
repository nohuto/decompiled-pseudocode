/*
 * XREFs of ndisCreateSecurityDescriptorEx @ 0x1C00C96A4
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     ndisBuildDeviceAcl @ 0x1C00C1880 (ndisBuildDeviceAcl.c)
 */

__int64 __fastcall ndisCreateSecurityDescriptorEx(ACL *a1)
{
  __int64 result; // rax
  NTSTATUS v2; // ebx
  PACL Dacl; // [rsp+30h] [rbp+8h] BYREF

  Dacl = a1;
  RtlCreateSecurityDescriptor(&ndisPnpSecurityDescriptor, 1u);
  result = ndisBuildDeviceAcl(&Dacl, 128);
  if ( (int)result >= 0 )
  {
    v2 = RtlSetDaclSecurityDescriptor(&ndisPnpSecurityDescriptor, 1u, Dacl, 0);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(Dacl, 0);
      return (unsigned int)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
