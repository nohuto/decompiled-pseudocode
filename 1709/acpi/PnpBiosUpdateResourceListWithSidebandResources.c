/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008C458
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C008C280 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008C54C (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C00A4CA4 (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r13d
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  int v11; // edx
  int v12; // ebp
  PVOID PoolWithTag; // rax
  int v14; // ebx
  PVOID v15; // rax
  SIZE_T v16; // [rsp+30h] [rbp-38h] BYREF
  PVOID P[6]; // [rsp+38h] [rbp-30h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v5 = a2;
  LOBYTE(a2) = 1;
  v7 = 0LL;
  v8 = 0LL;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, a2, P);
  if ( DeviceResourceList >= 0 )
  {
    if ( !P[0] )
      return (unsigned int)-1073741772;
    LODWORD(v16) = 0;
    LODWORD(NumberOfBytes) = 0;
    v12 = PnpiAddSidebandResources(v5, (int)P[0], 0, (int)&NumberOfBytes, 0LL, (__int64)&v16);
    if ( v12 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52706341u);
      v14 = v16;
      v8 = PoolWithTag;
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x52706341u);
      v7 = v15;
      if ( v8 && v15 )
      {
        LODWORD(v16) = v14;
        DeviceResourceList = PnpiAddSidebandResources(v5, (int)P[0], (int)v8, (int)&NumberOfBytes, v15, (__int64)&v16);
        if ( DeviceResourceList >= 0 )
        {
          *a3 = v8;
          v8 = 0LL;
          if ( a4 )
          {
            *a4 = v7;
            v7 = 0LL;
          }
        }
      }
      else
      {
        DeviceResourceList = -1073741670;
      }
    }
    else
    {
      if ( v12 != -1073741772 )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          13,
          64,
          (__int64)&WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids,
          v12);
      }
      DeviceResourceList = v12;
      if ( v12 >= 0 )
        DeviceResourceList = -1073741823;
    }
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)DeviceResourceList;
}
