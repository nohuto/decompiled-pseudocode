/*
 * XREFs of UsbhSyncResumeDeviceInternal @ 0x1C0044F98
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0047184 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019A34 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     UsbhSyncResumePort @ 0x1C0045104 (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhSyncResumeDeviceInternal(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // ebx

  v6 = PdoExt((__int64)a3);
  v7 = UsbhLatchPdo(a1, *((_WORD *)v6 + 710), 0LL, 0x70534D52u);
  Log(a1, 8, 1920167280, *((unsigned __int16 *)v6 + 710), v7);
  v8 = FdoExt(a1);
  if ( v7 && a3 == (struct _DEVICE_OBJECT *)v7 && (v8[640] & 0x10) == 0 )
  {
    UsbhAcquirePdoStateLock(v9, a2, 15);
    if ( PdoExt((__int64)a3)[281] == 3 )
    {
      *(_DWORD *)(a2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
      v10 = UsbhSyncResumePort(a1);
    }
    else
    {
      *(_DWORD *)(a2 + 136) = 0;
      v10 = -1073741810;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    }
  }
  else
  {
    v10 = -1073741810;
  }
  if ( v7 )
    UsbhUnlatchPdo(a1, v7, 0LL, 0x70534D52u);
  if ( v10 >= 0 )
    UsbhSet_Pdo_Dx(a3, (POWER_STATE)1);
  return (unsigned int)v10;
}
