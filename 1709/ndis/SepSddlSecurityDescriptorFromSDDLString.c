/*
 * XREFs of SepSddlSecurityDescriptorFromSDDLString @ 0x1C00C7010
 * Callers:
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00C6FAC (SeSddlSecurityDescriptorFromSDDL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     SepSddlDaclFromSDDLString @ 0x1C00FC65C (SepSddlDaclFromSDDLString.c)
 */

__int64 __fastcall SepSddlSecurityDescriptorFromSDDLString(__int64 a1, ULONG a2, __int64 a3)
{
  __int64 (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64); // rax
  __int64 v6; // rdx
  __int64 result; // rax
  void *v8; // rdi
  NTSTATUS v9; // ebx
  PVOID PoolWithTag; // rax
  PACL Dacl; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v14; // [rsp+4Ah] [rbp-26h]
  ULONG BufferLength; // [rsp+98h] [rbp+28h] BYREF
  __int16 v16; // [rsp+A8h] [rbp+38h] BYREF

  BufferLength = a2;
  RtlInitUnicodeString(&DestinationString, L"SeConvertStringSecurityDescriptorToSecurityDescriptor");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, __int64))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
  {
    Dacl = 0LL;
    v8 = 0LL;
    *(_QWORD *)a3 = 0LL;
    v9 = SepSddlDaclFromSDDLString(a1, v6, &v16, &Dacl);
    if ( v9 >= 0 )
    {
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
      v14 |= v16;
      BufferLength = 0;
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x64536553u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, &BufferLength);
        if ( v9 >= 0 )
        {
          ExFreePoolWithTag(Dacl, 0);
          *(_QWORD *)a3 = v8;
          return (unsigned int)v9;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    if ( Dacl )
      ExFreePoolWithTag(Dacl, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
  result = SystemRoutineAddress(a1, 1LL, a3);
  if ( (int)result >= 0 )
    *(_WORD *)(*(_QWORD *)a3 + 2LL) |= 8u;
  return result;
}
