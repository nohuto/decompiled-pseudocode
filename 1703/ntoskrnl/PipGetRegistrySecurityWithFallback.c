/*
 * XREFs of PipGetRegistrySecurityWithFallback @ 0x140453108
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404BFE50 (RtlValidRelativeSecurityDescriptor.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E09F0 (_CmGetInstallerClassRegProp.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 */

__int64 __fastcall PipGetRegistrySecurityWithFallback(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  bool v7; // di
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  int v10; // esi
  int InstallerClassRegProp; // eax
  __int64 v13; // r9
  __int64 v14; // r9
  int v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+30h] BYREF

  v15 = 0;
  v16 = 0LL;
  LODWORD(NumberOfBytes) = 128;
  v7 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E657050u);
  if ( !PoolWithTag )
    return 0LL;
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a2, (__int64)&v15, (__int64)PoolWithTag, (__int64)&NumberOfBytes, 0);
  if ( DeviceRegProp == -1073741789 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E657050u);
    if ( !PoolWithTag )
      return 0LL;
    DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a2, (__int64)&v15, (__int64)PoolWithTag, (__int64)&NumberOfBytes, 0);
  }
  if ( DeviceRegProp >= 0
    && v15 == 3
    && RtlValidRelativeSecurityDescriptor(PoolWithTag, NumberOfBytes, 0)
    && (LOBYTE(v14) = 1, (int)SeCaptureSecurityDescriptor(PoolWithTag, 0LL, 1LL, v14) >= 0) )
  {
    v7 = 1;
  }
  else
  {
    v10 = a5;
    if ( a5 )
    {
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                PiPnpRtlCtx,
                                a4,
                                a5,
                                24,
                                (__int64)&v15,
                                (__int64)PoolWithTag,
                                (__int64)&NumberOfBytes);
      if ( InstallerClassRegProp == -1073741789 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E657050u);
        if ( !PoolWithTag )
          return 0LL;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  PiPnpRtlCtx,
                                  a4,
                                  v10,
                                  24,
                                  (__int64)&v15,
                                  (__int64)PoolWithTag,
                                  (__int64)&NumberOfBytes);
      }
      if ( InstallerClassRegProp >= 0 && v15 == 3 )
      {
        if ( RtlValidRelativeSecurityDescriptor(PoolWithTag, NumberOfBytes, 0) )
        {
          LOBYTE(v13) = 1;
          v7 = (int)SeCaptureSecurityDescriptor(PoolWithTag, 0LL, 1LL, v13) >= 0;
        }
      }
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v7 )
    return 0LL;
  return v16;
}
