/*
 * XREFs of PiDevCfgGetDeviceClassConfigFlags @ 0x14059CE14
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
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
