/*
 * XREFs of UsbhSoftDisconnectPdo @ 0x1C0044E40
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0042DD0 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0006A00 (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0007CD8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0043344 (SET_PDO_HWPNPSTATE.c)
 */

void __fastcall UsbhSoftDisconnectPdo(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v7; // r14
  __int64 PortData; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  _DWORD *v11; // rax
  int v12; // edx

  v3 = *(_QWORD *)(a3 + 16);
  FdoExt(a1);
  v7 = PdoExt(v3);
  Log(a1, 2, 1347638561, 0LL, a3);
  PortData = UsbhGetPortData(a1, *((_WORD *)v7 + 710));
  v9 = PortData;
  if ( PortData )
  {
    UsbhCancelResetTimeout(a1, PortData, 1);
    UsbhSignalSyncDeviceResetPdo(a1, v3, -1073741823);
    UsbhSignalDriverResetEvent(a1, v9);
    UsbhAcquirePdoStateLock(v10, a3, a2);
    Log(a1, 4, 1685219152, v9, v3);
    v11 = PdoExt(v3);
    if ( v11[281] == 3 )
    {
      v12 = 3;
    }
    else
    {
      if ( v11[281] != 4 )
      {
LABEL_7:
        *(_DWORD *)(a3 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        return;
      }
      Log(a1, 4, 1685219123, (__int64)v7, (unsigned int)v7[353]);
      v12 = 4;
    }
    SET_PDO_HWPNPSTATE(v3, v12, a2);
    goto LABEL_7;
  }
}
