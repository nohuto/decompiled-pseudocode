/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x14050ACE8
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14050333C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x140508CE0 (_PnpDispatchDeviceInterface.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140586188 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoGetDeviceInterfaceAlias @ 0x1405C1E50 (IoGetDeviceInterfaceAlias.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405F0B64 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1405F19E8 (_CmCreateDeviceInterfaceWorker.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407252D0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14072B8BC (PiDevCfgConfigureDeviceInterface.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140737C88 (PiCMOpenDeviceInterfaceKey.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1407E7910 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407ED8C8 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14050333C (_CmOpenDeviceInterfaceRegKeyWorker.c)
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
  _QWORD v19[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(v19, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  LODWORD(v19[3]) = a5;
  v19[2] = a3;
  BYTE4(v19[3]) = a6;
  v19[4] = a7;
  if ( v11 )
  {
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
        v14 = v19[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenDeviceInterfaceRegKeyWorker(a1, a2, v19[2], SHIDWORD(v19[2]), v19[3], SBYTE4(v19[3]), v19[4], &v19[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v19[0]) = v13;
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
    *a8 = v19[5];
  return (unsigned int)v14;
}
