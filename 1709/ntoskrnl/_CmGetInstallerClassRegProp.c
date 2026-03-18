/*
 * XREFs of _CmGetInstallerClassRegProp @ 0x14051D640
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140450944 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14051B03C (PnpCallDriverQueryServiceHelper.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14051B940 (PiPnpRtlServiceFilterCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 *     PiCMGetRegistryProperty @ 0x140526810 (PiCMGetRegistryProperty.c)
 *     PpForEachDeviceInstanceDriver @ 0x140555688 (PpForEachDeviceInstanceDriver.c)
 *     PipGetRegistryDwordWithFallback @ 0x140576B28 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140576C08 (PipGetRegistrySecurityWithFallback.c)
 *     _CmServiceFilterCallback @ 0x1407828C0 (_CmServiceFilterCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14051D0E8 (_CmGetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmGetInstallerClassRegProp(__int64 a1, __int64 a2, void *a3, int a4, void *a5, void *a6, void *a7)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, void **); // r12
  int v11; // eax
  unsigned int InstallerClassRegPropWorker; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  void *v19[12]; // [rsp+50h] [rbp-71h] BYREF

  LODWORD(v19[0]) = 0;
  memset(&v19[1], 0, 0x50uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, void **))(a1 + 328);
  LODWORD(v19[7]) = 0;
  LODWORD(v19[3]) = a4;
  v19[2] = a3;
  v19[5] = a6;
  v19[6] = a7;
  v19[4] = a5;
  if ( v10 )
  {
    v11 = v10(a1, a2, 2LL, 9LL, 1, v19);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v19[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  InstallerClassRegPropWorker = CmGetInstallerClassRegPropWorker(
                                  a1,
                                  a2,
                                  v19[2],
                                  (int)v19[3],
                                  (_DWORD *)v19[4],
                                  (__int64)v19[5],
                                  (unsigned int *)v19[6],
                                  (unsigned int)v19[7]);
  v13 = InstallerClassRegPropWorker;
  if ( !v10 )
    return v13;
  LODWORD(v19[0]) = InstallerClassRegPropWorker;
  v14 = v10(a1, a2, 2LL, 9LL, 2, v19);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v19[0]);
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
