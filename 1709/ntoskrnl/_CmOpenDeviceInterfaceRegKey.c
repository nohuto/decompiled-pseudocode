/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x14051C998
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140518C7C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     _PnpDispatchDeviceInterface @ 0x14051C600 (_PnpDispatchDeviceInterface.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1405D78DC (_CmCreateDeviceInterfaceWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405DA954 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1406BF880 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1406C5404 (PiDevCfgConfigureDeviceInterface.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406D085C (PiCMOpenDeviceInterfaceKey.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407831E4 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _QWORD *v19; // [rsp+28h] [rbp-81h]
  _QWORD v20[12]; // [rsp+40h] [rbp-69h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x50uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  LODWORD(v20[3]) = a5;
  v20[2] = a3;
  BYTE4(v20[3]) = a6;
  v20[4] = a7;
  if ( v11 )
  {
    v19 = v20;
    v12 = v11(a1, a2, 3LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_12:
        v14 = v20[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v19) = BYTE4(v20[3]);
  v13 = CmOpenDeviceInterfaceRegKeyWorker(a1, a2, LODWORD(v20[2]), HIDWORD(v20[2]), v20[3], v19, v20[4], &v20[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v20[0]) = v13;
    v16 = v11(a1, a2, 3LL);
    v17 = v16;
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        v18 = v14;
        if ( v17 )
          v18 = -1073741595;
        v14 = v18;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v20[5];
  return (unsigned int)v14;
}
