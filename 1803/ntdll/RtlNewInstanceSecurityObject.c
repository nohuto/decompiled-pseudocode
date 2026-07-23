/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x1800D1FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlNewInstanceSecurityObject(
        BOOLEAN ParentDescriptorChanged,
        BOOLEAN CreatorDescriptorChanged,
        PLUID OldClientTokenModifiedId,
        PLUID NewClientTokenModifiedId,
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE TokenHandle,
        PGENERIC_MAPPING GenericMapping)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+50h] [rbp-78h] BYREF
  __int64 v16; // [rsp+58h] [rbp-70h]
  _QWORD v17[7]; // [rsp+60h] [rbp-68h] BYREF

  v16 = (__int64)GenericMapping;
  result = ZwQueryInformationToken(TokenHandle, 0xAu, v17, 0x38u, &ReturnLength);
  if ( result >= 0 )
  {
    *NewClientTokenModifiedId = (_LUID)v17[6];
    if ( NewClientTokenModifiedId->LowPart != OldClientTokenModifiedId->LowPart
      || NewClientTokenModifiedId->HighPart != OldClientTokenModifiedId->HighPart
      || ParentDescriptorChanged
      || CreatorDescriptorChanged )
    {
      return sub_18002ED3C(
               (__int64)ParentDescriptor,
               CreatorDescriptor,
               NewDescriptor,
               0LL,
               0,
               IsDirectoryObject,
               0,
               TokenHandle,
               (GENERIC_MAPPING *)v16,
               0LL);
    }
    else
    {
      *NewDescriptor = 0LL;
      return 0;
    }
  }
  return result;
}
