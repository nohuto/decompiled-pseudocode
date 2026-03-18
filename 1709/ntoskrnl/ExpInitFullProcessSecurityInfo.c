/*
 * XREFs of ExpInitFullProcessSecurityInfo @ 0x1407548D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

_BOOL8 __fastcall ExpInitFullProcessSecurityInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS v4; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int Size; // [rsp+80h] [rbp-11h]
  size_t Size_4; // [rsp+84h] [rbp-Dh] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v4 = ZwQueryValueKey(
           KeyHandle,
           &stru_140356570,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x54u,
           &ResultLength);
    if ( v4 >= 0 )
    {
      if ( Size <= 0x44 )
      {
        memmove(&ExpFullProcessInformationSid, &Size_4, Size);
        *a3 = &ExpFullProcessInformationSid;
      }
      else
      {
        v4 = -1073741789;
      }
    }
    ZwClose(KeyHandle);
  }
  return v4 >= 0;
}
