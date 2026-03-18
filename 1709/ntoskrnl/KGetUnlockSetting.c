/*
 * XREFs of KGetUnlockSetting @ 0x14059247C
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x140592400 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KGetUnlockSetting(UNICODE_STRING *a1, UNICODE_STRING *a2, _DWORD *a3)
{
  unsigned int v6; // edi
  NTSTATUS v7; // ebx
  bool v9; // cl
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+17h] BYREF
  int v14; // [rsp+74h] [rbp+1Bh]
  unsigned int v15; // [rsp+78h] [rbp+1Fh]
  __int64 v16; // [rsp+7Ch] [rbp+23h]

  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  v6 = 0;
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  v7 = ZwOpenKey(&KeyHandle, 0x20119u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    v7 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, KeyValueInformation, 0x18u, &ResultLength);
    if ( v7 >= 0 )
    {
      v9 = 1;
      if ( (unsigned int)v16 > 1 )
        v9 = (_DWORD)v16 == 0xFFFF;
      if ( v14 == 4 && v15 >= 4 && v9 )
        *a3 = v16;
      else
        *a3 = 0xFFFF;
    }
    ZwClose(KeyHandle);
  }
  if ( v7 == -1073741772 )
    *a3 = 0xFFFF;
  else
    return (unsigned int)v7;
  return v6;
}
