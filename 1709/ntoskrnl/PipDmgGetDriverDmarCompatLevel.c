/*
 * XREFs of PipDmgGetDriverDmarCompatLevel @ 0x14058C7DC
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x14058C704 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x14051A2F0 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 */

__int64 __fastcall PipDmgGetDriverDmarCompatLevel(UNICODE_STRING *a1)
{
  void *v1; // rbx
  unsigned int v2; // edi
  NTSTATUS v3; // eax
  HANDLE v4; // rsi
  NTSTATUS RegistryValue; // eax
  int v7; // edx
  int v8; // edx
  int v9; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v10; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF
  _DWORD *v13; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = (HANDLE)-1LL;
  v1 = 0LL;
  v2 = 0;
  Handle = 0LL;
  v13 = 0LL;
  v3 = PipOpenServiceEnumKeys(a1, 0x20019u, &Handle, 0LL, 0);
  v4 = Handle;
  if ( v3 >= 0 )
  {
    KeyHandle = 0LL;
    v10 = L"Parameters";
    v9 = 1441812;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RegistryValue = IopGetRegistryValue(KeyHandle, L"DmaRemappingCompatible", 0, &v13);
      v1 = v13;
      if ( RegistryValue >= 0 && v13[1] == 4 && v13[3] == 4 )
      {
        v7 = *(_DWORD *)((char *)v13 + (unsigned int)v13[2]);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              v2 = 3;
          }
          else
          {
            v2 = 2;
          }
        }
        else
        {
          v2 = 1;
        }
      }
    }
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v2;
}
