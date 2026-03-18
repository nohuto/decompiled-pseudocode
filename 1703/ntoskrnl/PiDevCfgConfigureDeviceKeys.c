/*
 * XREFs of PiDevCfgConfigureDeviceKeys @ 0x140592E90
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140592C98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140592E04 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PpDevCfgProcessDeviceClass @ 0x14069E850 (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x14014FD64 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PiDevCfgQueryResolveValue @ 0x1401F9854 (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x140593004 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405930D4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140593178 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14059326C (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x140593494 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v10; // rsi
  _DWORD *v11; // rbx
  int inited; // edi
  unsigned int *v14; // rcx
  unsigned int *v15; // rcx
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  int v17; // [rsp+50h] [rbp-41h] BYREF
  const wchar_t *v18; // [rsp+58h] [rbp-39h]
  _BYTE v19[32]; // [rsp+60h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-11h] BYREF

  memset(v19, 0, sizeof(v19));
  v10 = a5;
  KeyHandle = 0LL;
  if ( a5 )
    *a5 = 0;
  v11 = a6;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitResolveContext(a1, a3, v19);
  if ( inited >= 0 )
  {
    inited = PiDevCfgEnumDeviceKeys(
               a1,
               a2,
               (_DWORD)a3,
               a4,
               1,
               (__int64)&PiDevCfgConfigureDeviceKeyCallback,
               (__int64)v19);
    if ( inited >= 0 )
    {
      if ( (a4 & 8) == 0 || (inited = PiDevCfgConfigureDeviceInterfaces(*(_QWORD *)(a2 + 8)), inited >= 0) )
      {
        if ( (a4 & 0x10) == 0 || (inited = PiDevCfgConfigureSoftwareDevices(*(_QWORD *)(a2 + 16), a3), inited >= 0) )
        {
          KeyHandle = 0LL;
          v18 = L"Status";
          v17 = 917516;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = a3;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            if ( v11 && (int)PiDevCfgQueryResolveValue((__int64)v19, KeyHandle, (__int64)L"Reboot", &a5) >= 0 )
            {
              if ( PnpValidateRegistryDword((__int64)a5) && *(unsigned int *)((char *)v14 + v14[2]) )
                *v11 |= 2u;
              ExFreePoolWithTag(v14, 0);
            }
            if ( v10 && (int)PiDevCfgQueryResolveValue((__int64)v19, KeyHandle, (__int64)L"ConfigFlags", &a5) >= 0 )
            {
              if ( PnpValidateRegistryDword((__int64)a5) )
                *v10 |= *(unsigned int *)((char *)v15 + v15[2]);
              ExFreePoolWithTag(v15, 0);
            }
          }
        }
      }
    }
  }
  PiDevCfgFreeResolveContext(v19);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
