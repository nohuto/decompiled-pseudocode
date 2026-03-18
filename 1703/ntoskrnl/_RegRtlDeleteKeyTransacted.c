/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x1405AA36C
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1404DB004 (_CmAddDeviceToContainerWorker.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404E2AA8 (_CmGetDeviceSoftwareKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     PiDqDeleteUserObject @ 0x1406985F8 (PiDqDeleteUserObject.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     _PnpCtxRegDeleteKey @ 0x140739C44 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14073A060 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14073A61C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14073C458 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDeleteKey @ 0x14017F8A0 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(char *a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = (char *)KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
