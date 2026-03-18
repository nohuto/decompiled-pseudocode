/*
 * XREFs of PnpBiosGetDeviceResourceList @ 0x1C0082F34
 * Callers:
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0077CF0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C007BFE0 (ACPIFilterIrpQueryResourceRequirements.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0083A6C (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0038550 (PnpDeviceBiosResourcesToNtResources.c)
 */

__int64 __fastcall PnpBiosGetDeviceResourceList(ULONG_PTR a1, char a2, _QWORD *a3)
{
  void *v3; // rsi
  int v6; // edi
  __int64 DeviceExtension; // r15
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  void *v12; // [rsp+50h] [rbp-10h] BYREF
  PVOID v13; // [rsp+58h] [rbp-8h] BYREF
  char v14; // [rsp+A8h] [rbp+48h] BYREF
  char v15; // [rsp+B0h] [rbp+50h] BYREF
  PVOID P; // [rsp+B8h] [rbp+58h] BYREF

  v13 = 0LL;
  v3 = 0LL;
  *a3 = 0LL;
  P = 0LL;
  v12 = 0LL;
  v6 = -1073741823;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = ACPIGet(DeviceExtension, 0x5352435Fu, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v13, (__int64)&v14);
  if ( a2 )
    v9 = ACPIGet(DeviceExtension, 0x5352505Fu, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v15);
  else
    v9 = -1073741772;
  if ( v8 >= 0 )
  {
    v6 = -1073741772;
    if ( v9 < 0 )
      goto LABEL_9;
    goto LABEL_6;
  }
  if ( v9 >= 0 )
  {
LABEL_6:
    if ( P )
    {
      v6 = PnpDeviceBiosResourcesToNtResources(DeviceExtension, (__int64)P, 0, (__int64)&v12);
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      v3 = v12;
    }
    if ( v6 >= 0 )
    {
LABEL_12:
      *a3 = v3;
      v3 = 0LL;
      goto LABEL_13;
    }
LABEL_9:
    if ( v8 >= 0 )
    {
      v10 = PnpDeviceBiosResourcesToNtResources(
              DeviceExtension,
              (__int64)v13,
              (*(_DWORD *)(DeviceExtension + 8) >> 25) & 1,
              (__int64)&v12);
      v3 = v12;
      v6 = v10;
    }
    if ( v6 < 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v9 == -1073741772 )
  {
    if ( v8 == -1073741772 )
      return 0;
    v6 = v8;
  }
  else
  {
    v6 = v9;
  }
LABEL_13:
  if ( v8 >= 0 && v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v6;
}
