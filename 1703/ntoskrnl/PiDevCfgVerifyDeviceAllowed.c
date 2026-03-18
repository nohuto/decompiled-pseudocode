/*
 * XREFs of PiDevCfgVerifyDeviceAllowed @ 0x1405946CC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x14014FD64 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PiDevCfgQueryResolveValue @ 0x1401F9854 (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x140593004 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x140593494 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgVerifyDeviceAllowed(void *a1, void *a2)
{
  int inited; // ebx
  int v5; // edi
  unsigned int *v7; // rcx
  int v8; // [rsp+20h] [rbp-60h] BYREF
  const wchar_t *v9; // [rsp+28h] [rbp-58h]
  HANDLE v10[4]; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF

  inited = 0;
  memset(v10, 0, sizeof(v10));
  v13 = 0LL;
  KeyHandle = 0LL;
  v9 = L"Status";
  v8 = 917516;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  ObjectAttributes.Length = 48;
  v5 = 0;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    inited = PiDevCfgInitResolveContext(a1, a2, v10);
    if ( inited >= 0 && (int)PiDevCfgQueryResolveValue((__int64)v10, KeyHandle, (__int64)L"Blocked", &v13) >= 0 )
    {
      if ( PnpValidateRegistryDword(v13) )
        v5 = *(unsigned int *)((char *)v7 + v7[2]);
      ExFreePoolWithTag(v7, 0);
      if ( v5 )
        inited = -1073740948;
    }
  }
  PiDevCfgFreeResolveContext((__int64)v10);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
