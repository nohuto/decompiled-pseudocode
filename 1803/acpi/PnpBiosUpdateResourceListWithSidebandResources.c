/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0083A6C
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C007B640 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0082F34 (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C0083E18 (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(ULONG_PTR a1, int a2, _QWORD *a3, _QWORD *a4)
{
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  int v10; // edx
  int v11; // ebp
  unsigned int v12; // ebx
  PVOID PoolWithTag; // rax
  int v14; // ebp
  PVOID v15; // rax
  SIZE_T v17; // [rsp+30h] [rbp-38h] BYREF
  PVOID P[6]; // [rsp+38h] [rbp-30h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1, P);
  if ( DeviceResourceList >= 0 )
  {
    if ( !P[0] )
      return (unsigned int)-1073741772;
    LODWORD(v17) = 0;
    LODWORD(NumberOfBytes) = 0;
    v11 = PnpiAddSidebandResources(a2, (int)P[0], 0, (int)&NumberOfBytes, 0LL, (__int64)&v17);
    if ( v11 == -1073741789 )
    {
      v12 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52706341u);
      v14 = v17;
      v8 = PoolWithTag;
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x52706341u);
      v7 = v15;
      if ( v8 && v15 )
      {
        memset(v8, 0, v12);
        LODWORD(v17) = v14;
        DeviceResourceList = PnpiAddSidebandResources(a2, (int)P[0], (int)v8, (int)&NumberOfBytes, v7, (__int64)&v17);
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
      if ( v11 != -1073741772 )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          13,
          64,
          (__int64)&WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids,
          v11);
      }
      DeviceResourceList = v11;
      if ( v11 >= 0 )
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
