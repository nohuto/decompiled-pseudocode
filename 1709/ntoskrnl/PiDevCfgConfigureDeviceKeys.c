/*
 * XREFs of PiDevCfgConfigureDeviceKeys @ 0x140589470
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14059D25C (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1405A4760 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FF670 (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x1405895E4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405896A4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140589748 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14058983C (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x140589A68 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *P, _DWORD *a6)
{
  _DWORD *v10; // rsi
  _DWORD *v11; // rbx
  int inited; // edi
  PVOID v14; // rcx
  PVOID v15; // rcx
  PVOID v16; // rcx
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  int v18; // [rsp+50h] [rbp-41h] BYREF
  const WCHAR *v19; // [rsp+58h] [rbp-39h]
  _BYTE v20[32]; // [rsp+60h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-11h] BYREF

  memset(v20, 0, sizeof(v20));
  v10 = P;
  KeyHandle = 0LL;
  if ( P )
    *P = 0;
  v11 = a6;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitResolveContext(a1, a3, v20);
  if ( inited >= 0 )
  {
    inited = PiDevCfgEnumDeviceKeys(
               a1,
               a2,
               (_DWORD)a3,
               a4,
               1,
               (__int64)&PiDevCfgConfigureDeviceKeyCallback,
               (__int64)v20);
    if ( inited >= 0 )
    {
      if ( (a4 & 8) == 0 || (inited = PiDevCfgConfigureDeviceInterfaces(*(_QWORD *)(a2 + 8), a3, v20), inited >= 0) )
      {
        if ( (a4 & 0x10) == 0 || (inited = PiDevCfgConfigureSoftwareDevices(*(_QWORD *)(a2 + 16), a3), inited >= 0) )
        {
          KeyHandle = 0LL;
          v19 = L"Status";
          v18 = 917516;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = a3;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            if ( v11 )
            {
              if ( (int)PiDevCfgQueryResolveValue((__int64)v20, KeyHandle, (__int64)L"Reboot", &P) >= 0 )
              {
                v14 = P;
                if ( P[1] == 4 && P[3] == 4 && *(_DWORD *)((char *)P + (unsigned int)P[2]) )
                  *v11 |= 2u;
                ExFreePoolWithTag(v14, 0);
              }
              if ( (int)PiDevCfgQueryResolveValue((__int64)v20, KeyHandle, (__int64)L"ClassConfigured", &P) >= 0 )
              {
                v15 = P;
                if ( P[1] == 4 && P[3] == 4 && *(_DWORD *)((char *)P + (unsigned int)P[2]) )
                  *v11 |= 4u;
                ExFreePoolWithTag(v15, 0);
              }
            }
            if ( v10 && (int)PiDevCfgQueryResolveValue((__int64)v20, KeyHandle, (__int64)L"ConfigFlags", &P) >= 0 )
            {
              v16 = P;
              if ( P[1] == 4 && P[3] == 4 )
                *v10 |= *(_DWORD *)((char *)P + (unsigned int)P[2]);
              ExFreePoolWithTag(v16, 0);
            }
          }
        }
      }
    }
  }
  PiDevCfgFreeResolveContext(v20);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
