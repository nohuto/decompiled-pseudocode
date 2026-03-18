/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x1404DE560
 * Callers:
 *     PiDeviceRegistration @ 0x1404D9C6C (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E09F0 (_CmGetInstallerClassRegProp.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404E2590 (_CmOpenInstallerClassRegKey.c)
 *     PiForEachDriverQueryRoutine @ 0x14059C8E8 (PiForEachDriverQueryRoutine.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rdi
  __int64 result; // rax
  int DeviceRegProp; // ebx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  char *v11; // rsi
  char v12; // cl
  int v13; // r9d
  int InstallerClassRegProp; // eax
  int v15; // r9d
  int v16; // eax
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-69h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+44h] [rbp-65h] BYREF
  int v19; // [rsp+48h] [rbp-61h] BYREF
  void *v20; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v22; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v24[80]; // [rsp+80h] [rbp-29h] BYREF

  Handle = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  PoolWithTag = 0LL;
  result = PnpUnicodeStringToWstr(&v20, 0LL, a1);
  if ( (int)result >= 0 )
  {
    DeviceRegProp = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v20, 0x10u, 0, 131097, 0, (__int64)&v22, 0LL);
    if ( DeviceRegProp >= 0 )
    {
      v19 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)v20,
                        (__int64)v22,
                        9,
                        (__int64)&NumberOfBytes_4,
                        (__int64)v24,
                        (__int64)&v19,
                        0);
      if ( DeviceRegProp >= 0 && NumberOfBytes_4 == 1 && v19 )
        DeviceRegProp = CmOpenInstallerClassRegKey(
                          PiPnpRtlCtx,
                          (unsigned int)v24,
                          v8,
                          v9,
                          131097,
                          0,
                          (__int64)&Handle,
                          0LL);
      v23[2] = a3;
      v23[1] = PiProcessDriverInstance;
      v19 = 170;
      v23[0] = a1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xAAuLL, 0x20207050u);
      if ( PoolWithTag )
      {
        v10 = 0;
        v11 = (char *)&unk_14029CA70;
        while ( 1 )
        {
          v12 = v11[4];
          if ( !v12 || Handle )
          {
            v13 = *(_DWORD *)v11;
            NumberOfBytes = v19;
            if ( v12 )
              InstallerClassRegProp = CmGetInstallerClassRegProp(
                                        PiPnpRtlCtx,
                                        (unsigned int)v24,
                                        (_DWORD)Handle,
                                        v13,
                                        (__int64)&NumberOfBytes_4,
                                        (__int64)PoolWithTag,
                                        (__int64)&NumberOfBytes);
            else
              InstallerClassRegProp = CmGetDeviceRegProp(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (__int64)v20,
                                        (__int64)v22,
                                        v13,
                                        (__int64)&NumberOfBytes_4,
                                        (__int64)PoolWithTag,
                                        (__int64)&NumberOfBytes,
                                        0);
            DeviceRegProp = InstallerClassRegProp;
            if ( InstallerClassRegProp == -1073741789 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              v19 = NumberOfBytes;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x20207050u);
              if ( !PoolWithTag )
                break;
              v15 = *(_DWORD *)v11;
              if ( v11[4] )
                v16 = CmGetInstallerClassRegProp(
                        PiPnpRtlCtx,
                        (unsigned int)v24,
                        (_DWORD)Handle,
                        v15,
                        (__int64)&NumberOfBytes_4,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes);
              else
                v16 = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)v20,
                        (__int64)v22,
                        v15,
                        (__int64)&NumberOfBytes_4,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes,
                        0);
              DeviceRegProp = v16;
            }
            if ( DeviceRegProp == -1073741275 )
            {
              DeviceRegProp = 0;
            }
            else
            {
              if ( DeviceRegProp < 0 )
                goto LABEL_16;
              DeviceRegProp = PiForEachDriverQueryRoutine(NumberOfBytes_4, PoolWithTag, NumberOfBytes, v23);
              if ( DeviceRegProp < 0 )
                goto LABEL_16;
            }
          }
          ++v10;
          v11 += 8;
          if ( v10 >= 5 )
            goto LABEL_16;
        }
      }
      DeviceRegProp = -1073741670;
    }
LABEL_16:
    if ( v20 )
      PnpUnicodeStringToWstrFree(v20, (__int64)a1);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( Handle )
      ZwClose(Handle);
    if ( v22 )
      ZwClose(v22);
    return (unsigned int)DeviceRegProp;
  }
  return result;
}
