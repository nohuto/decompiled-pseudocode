/*
 * XREFs of RegistryReadNameValue @ 0x1C0019EA0
 * Callers:
 *     PropertyGetPinName @ 0x1C00179E0 (PropertyGetPinName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 *     memmove @ 0x1C0008100 (memmove.c)
 */

__int64 __fastcall RegistryReadNameValue(unsigned int a1, void *a2, ULONG *a3, struct _UNICODE_STRING *a4)
{
  __int64 v7; // r10
  WCHAR *v8; // rdx
  NTSTATUS v10; // ebx
  WCHAR v11; // ax
  PWSTR Buffer; // r8
  WCHAR *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  WCHAR *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  signed __int64 v19; // r8
  WCHAR v20; // cx
  unsigned int v21; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v23; // rdi
  unsigned int v24; // eax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char KeyValueInformation[24]; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SourceString[176]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  v7 = 175LL;
  v8 = SourceString;
  v10 = 0;
  do
  {
    if ( v7 == -2147483471 )
      break;
    v11 = *(WCHAR *)((char *)v8
                   + (char *)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\MediaCategories\\"
                   - (char *)SourceString);
    if ( !v11 )
      break;
    *v8++ = v11;
    --v7;
  }
  while ( v7 );
  if ( !v7 )
  {
    --v8;
    v10 = -2147483643;
  }
  *v8 = 0;
  if ( v10 < 0 )
    goto LABEL_22;
  Buffer = a4->Buffer;
  v13 = SourceString;
  v14 = 175LL;
  do
  {
    if ( !*v13 )
      break;
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( !v14 )
  {
    v10 = -1073741811;
LABEL_22:
    RtlFreeUnicodeString(a4);
    return (unsigned int)v10;
  }
  v10 = 0;
  v15 = 175 - v14;
  v16 = &SourceString[175 - v14];
  v17 = 175 - v15;
  if ( 175 == v15 )
    goto LABEL_18;
  v18 = 2147483646LL;
  v19 = (char *)Buffer - (char *)v16;
  do
  {
    if ( !v18 )
      break;
    v20 = *(WCHAR *)((char *)v16 + v19);
    if ( !v20 )
      break;
    *v16 = v20;
    --v18;
    ++v16;
    --v17;
  }
  while ( v17 );
  if ( !v17 )
  {
LABEL_18:
    --v16;
    v10 = -2147483643;
  }
  *v16 = 0;
  if ( v10 < 0 )
    goto LABEL_22;
  RtlFreeUnicodeString(a4);
  RtlInitUnicodeString(a4, SourceString);
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Name");
    v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x10u, a3);
    if ( *a3 < 0xC )
      v10 = -1073741762;
    if ( ((v10 + 0x80000000) & 0x80000000) != 0 || v10 == -2147483643 )
    {
      v21 = *a3 - 12;
      if ( a1 )
      {
        if ( a1 >= v21 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a3, 0x41627845u);
          v23 = PoolWithTag;
          if ( PoolWithTag )
          {
            v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, *a3, a3);
            if ( v10 >= 0 )
            {
              v24 = v23[2];
              if ( v24 && v23[1] == 1 )
              {
                memmove(a2, v23 + 3, v24);
                *a3 = v23[2];
              }
              else
              {
                v10 = -1073741823;
              }
            }
            ExFreePool(v23);
          }
          else
          {
            v10 = -1073741670;
          }
        }
        else
        {
          v10 = -1073741789;
        }
      }
      else
      {
        *a3 = v21;
        v10 = -2147483643;
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v10;
}
