/*
 * XREFs of IopDevObjApplyPostCreationSettings @ 0x1C00C6E0C
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00C6CD0 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C00C6EDC (SeUtilSecurityInfoFromSecurityDescriptor.c)
 */

NTSTATUS __fastcall IopDevObjApplyPostCreationSettings(PVOID Object, __int64 a2)
{
  NTSTATUS result; // eax
  int v5; // edx
  ACCESS_MASK v6; // r9d
  NTSTATUS v7; // ebx
  SECURITY_INFORMATION SecurityInformation; // [rsp+60h] [rbp+18h]
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(_DWORD *)a2 & 2) == 0 )
    return 0;
  result = SeUtilSecurityInfoFromSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
  if ( result >= 0 )
  {
    v5 = ((SecurityInformation & 3) != 0 ? 0x80000 : 0) | 0x40000;
    if ( (SecurityInformation & 4) == 0 )
      v5 = (SecurityInformation & 3) != 0 ? 0x80000 : 0;
    v6 = v5 | 0x1000000;
    if ( (SecurityInformation & 8) == 0 )
      v6 = v5;
    result = ObOpenObjectByPointer(Object, 0x200u, 0LL, v6, IoDeviceObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v7 = ZwSetSecurityObject(Handle, SecurityInformation, *(PSECURITY_DESCRIPTOR *)(a2 + 8));
      ZwClose(Handle);
      return v7;
    }
  }
  return result;
}
