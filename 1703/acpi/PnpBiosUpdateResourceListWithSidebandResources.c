/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008C0D8
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C008BDF0 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008CC0C (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C00A204C (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r13d
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  int v11; // edx
  int v12; // ebp
  unsigned int v13; // ebx
  PVOID PoolWithTag; // rax
  int v15; // ebp
  PVOID v16; // rax
  SIZE_T v17; // [rsp+30h] [rbp-38h] BYREF
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
    LODWORD(v17) = 0;
    LODWORD(NumberOfBytes) = 0;
    v12 = PnpiAddSidebandResources(v5, (int)P[0], 0, (int)&NumberOfBytes, 0LL, (__int64)&v17);
    if ( v12 == -1073741789 )
    {
      v13 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52706341u);
      v15 = v17;
      v8 = PoolWithTag;
      v16 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x52706341u);
      v7 = v16;
      if ( v8 && v16 )
      {
        memset(v8, 0, v13);
        LODWORD(v17) = v15;
        DeviceResourceList = PnpiAddSidebandResources(v5, (int)P[0], (int)v8, (int)&NumberOfBytes, v7, (__int64)&v17);
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
          (__int64)&WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids,
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
