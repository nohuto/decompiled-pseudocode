/*
 * XREFs of RegistryReadNameValue @ 0x1C001E250
 * Callers:
 *     PropertyGetPinName @ 0x1C001BE50 (PropertyGetPinName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00089A0 (__security_check_cookie.c)
 *     memmove @ 0x1C000A240 (memmove.c)
 */

__int64 __fastcall RegistryReadNameValue(unsigned int a1, void *a2, ULONG *a3, struct _UNICODE_STRING *a4)
{
  WCHAR *v7; // rdx
  __int64 v9; // r9
  WCHAR v10; // ax
  WCHAR *v11; // rax
  NTSTATUS v12; // ebx
  WCHAR *v13; // rcx
  __int64 v14; // rax
  WCHAR *v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // r9
  WCHAR v18; // r8
  unsigned int v19; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v21; // rdi
  unsigned int v22; // eax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SourceString[176]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  v7 = SourceString;
  v9 = 175LL;
  do
  {
    if ( v9 == -2147483471 )
      break;
    v10 = *(WCHAR *)((char *)v7
                   + (char *)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\MediaCategories\\"
                   - (char *)SourceString);
    if ( !v10 )
      break;
    *v7++ = v10;
    --v9;
  }
  while ( v9 );
  v11 = v7 - 1;
  if ( v9 )
    v11 = v7;
  *v11 = 0;
  v12 = v9 == 0 ? 0x80000005 : 0;
  if ( !v9 )
    goto LABEL_21;
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
    v12 = -1073741811;
    goto LABEL_21;
  }
  v12 = 0;
  v15 = &SourceString[175 - v14];
  v16 = 2147483646LL;
  v17 = (char *)a4->Buffer - (char *)v15;
  do
  {
    if ( !v16 )
      break;
    v18 = *(WCHAR *)((char *)v15 + v17);
    if ( !v18 )
      break;
    *v15 = v18;
    --v16;
    ++v15;
    --v14;
  }
  while ( v14 );
  if ( !v14 )
  {
    --v15;
    v12 = -2147483643;
  }
  *v15 = 0;
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeUnicodeString(a4);
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_22;
  }
  RtlFreeUnicodeString(a4);
  RtlInitUnicodeString(a4, SourceString);
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
LABEL_22:
  v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v12 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Name");
    v12 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x10u, a3);
    if ( *a3 < 0xC )
      v12 = -1073741762;
    if ( ((v12 + 0x80000000) & 0x80000000) != 0 || v12 == -2147483643 )
    {
      v19 = *a3 - 12;
      if ( a1 )
      {
        if ( a1 >= v19 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a3, 0x41627845u);
          v21 = PoolWithTag;
          if ( PoolWithTag )
          {
            v12 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, *a3, a3);
            if ( v12 >= 0 )
            {
              v22 = v21[2];
              if ( v22 && v21[1] == 1 )
              {
                memmove(a2, v21 + 3, v22);
                *a3 = v21[2];
              }
              else
              {
                v12 = -1073741823;
              }
            }
            ExFreePool(v21);
          }
          else
          {
            v12 = -1073741670;
          }
        }
        else
        {
          v12 = -1073741789;
        }
      }
      else
      {
        *a3 = v19;
        v12 = -2147483643;
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v12;
}
