/*
 * XREFs of PnpBiosGetDeviceResourceList @ 0x1C008C54C
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008C458 (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C008C4D0 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0094760 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0011CA4 (PnpDeviceBiosResourcesToNtResources.c)
 */

__int64 __fastcall PnpBiosGetDeviceResourceList(ULONG_PTR a1, char a2, _QWORD *a3)
{
  void *v3; // rsi
  int v6; // edi
  __int64 DeviceExtension; // r15
  int v8; // r14d
  int v9; // eax
  int v11; // eax
  void *v12; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  char v14; // [rsp+A8h] [rbp+48h] BYREF
  char v15; // [rsp+B0h] [rbp+50h] BYREF
  PVOID v16; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v3 = 0LL;
  *a3 = 0LL;
  v16 = 0LL;
  v12 = 0LL;
  v6 = -1073741823;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = ACPIGet((__int64 *)DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v14);
  if ( a2 )
    v9 = ACPIGet((__int64 *)DeviceExtension, 1397903455, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v16, (__int64)&v15);
  else
    v9 = -1073741772;
  if ( v8 >= 0 )
  {
    v6 = -1073741772;
    if ( v9 < 0 )
      goto LABEL_10;
    goto LABEL_20;
  }
  if ( v9 >= 0 )
  {
LABEL_20:
    if ( v16 )
    {
      v6 = PnpDeviceBiosResourcesToNtResources(DeviceExtension, (__int64)v16, 0, (__int64)&v12);
      ExFreePoolWithTag(v16, 0);
      v16 = 0LL;
      v3 = v12;
    }
    if ( v6 >= 0 )
    {
LABEL_13:
      *a3 = v3;
      v3 = 0LL;
      goto LABEL_14;
    }
LABEL_10:
    if ( v8 >= 0 )
    {
      v11 = PnpDeviceBiosResourcesToNtResources(
              DeviceExtension,
              (__int64)P,
              (*(_DWORD *)(DeviceExtension + 8) >> 25) & 1,
              (__int64)&v12);
      v3 = v12;
      v6 = v11;
    }
    if ( v6 < 0 )
      goto LABEL_14;
    goto LABEL_13;
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
LABEL_14:
  if ( v8 >= 0 && P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v6;
}
