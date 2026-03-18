/*
 * XREFs of PiDevCfgGetDeviceClassConfigFlags @ 0x1405E7E04
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730D6C (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgGetDeviceClassConfigFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0;
  v8 = 1;
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       2u,
                       a2,
                       0LL,
                       (__int64)&DEVPKEY_DeviceClass_ConfigFilters,
                       (__int64)&v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789
    || (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       2u,
                       a2,
                       0LL,
                       (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                       (__int64)&v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789 )
  {
    *a3 |= 0x80000u;
  }
  return 0LL;
}
