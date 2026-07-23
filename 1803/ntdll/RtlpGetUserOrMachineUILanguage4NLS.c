/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0
 * Callers:
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     sub_1800F29FC @ 0x1800F29FC (sub_1800F29FC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned __int64 *a3, __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  HANDLE CurrentUserKey; // [rsp+40h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+C8h] [rbp+7Fh] BYREF

  CurrentUserKey = 0LL;
  KeyHandle = 0LL;
  LODWORD(v16) = 0;
  v11 = 7;
  v7 = sub_18006F938(0x2000000u, 0LL, (__int64)a3, a4, &CurrentUserKey);
  if ( v7 < 0 )
    goto LABEL_21;
  KeyHandle = 0LL;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    ObjectAttributes.RootDirectory = CurrentUserKey;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v7 = sub_18006F7EC(KeyHandle, &DestinationString, &v11, 0LL, (ULONG *)&v16);
      if ( v7 >= 0 )
        goto LABEL_10;
    }
    if ( v7 == -2147483643 )
      goto LABEL_10;
    ZwClose(KeyHandle);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v7 = sub_18006F7EC(KeyHandle, &DestinationString, &v11, 0LL, (ULONG *)&v16);
LABEL_10:
  if ( v7 != -1073741772 && (_DWORD)v16 )
  {
    if ( v7 != -2147483643 )
    {
LABEL_20:
      v7 = -1073741772;
      goto LABEL_21;
    }
    v8 = (unsigned int)(v16 + 1);
    v9 = (unsigned int)v8 >> 1;
    if ( !a2 )
    {
      v7 = 0;
LABEL_15:
      *a3 = v9;
      goto LABEL_21;
    }
    if ( *a3 < v8 >> 1 )
    {
      v7 = -1073741789;
      goto LABEL_15;
    }
    v7 = sub_18006F7EC(KeyHandle, &DestinationString, &v11, a2, (ULONG *)&v16);
    if ( v7 >= 0 )
    {
      if ( v11 == 7 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( CurrentUserKey )
  {
    sub_18006F918((char *)CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v7;
}
