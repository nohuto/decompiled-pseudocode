/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140653FF0
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x14056AA94 (_CmGetDeviceSoftwareKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1405D3F7C (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     PiDqDeleteUserObject @ 0x14072A78C (PiDqDeleteUserObject.c)
 *     _PnpCtxRegDeleteKey @ 0x1407E6D54 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1407E72C8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1407E7910 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407E7FC8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407E9948 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1407EC114 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1407EC744 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1407F0EF8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407F1384 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwDeleteKey @ 0x1401A8E60 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140506280 (_RegRtlOpenKeyTransacted.c)
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
