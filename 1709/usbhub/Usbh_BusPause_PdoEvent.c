/*
 * XREFs of Usbh_BusPause_PdoEvent @ 0x1C004544C
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0027D3C (UsbhCancelEnumeration.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0006A00 (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0007CD8 (UsbhSignalSyncDeviceResetPdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0043344 (SET_PDO_HWPNPSTATE.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0043CF0 (UsbhFlushQueuedDriverReset.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPause_PdoEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx

  UsbhFlushQueuedDriverReset(a1, a3);
  UsbhAcquirePdoStateLock(v8, a4, 10);
  Log(a1, 2, 1716736630, 0LL, a4);
  v9 = (unsigned int)PdoExt(a2)[281];
  if ( (_DWORD)v9 == 1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        1u,
        0x45u,
        (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
        a2);
    Log(a1, 4, 1685283663, a2, a4);
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else if ( (_DWORD)v9 == 2 || (int)v9 > 2 && (int)v9 <= 4 )
  {
    SET_PDO_HWPNPSTATE(a2, v9, 10);
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
    UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741823);
    UsbhSignalDriverResetEvent(a1, a3);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
  }
}
