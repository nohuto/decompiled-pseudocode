/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x14057EC84
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x14054E500 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _CmGetDeviceSoftwareKey @ 0x14058188C (_CmGetDeviceSoftwareKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PipHardwareConfigActivateService @ 0x1405A4610 (PipHardwareConfigActivateService.c)
 *     PiDqDeleteUserObject @ 0x1406C4078 (PiDqDeleteUserObject.c)
 *     _PnpCtxRegDeleteKey @ 0x14077E334 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14077E748 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140780B78 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140786114 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteKey @ 0x14017F240 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140521DE8 (_RegRtlOpenKeyTransacted.c)
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
