/*
 * XREFs of UsbhSyncResumeDeviceInternal @ 0x1C0044168
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045170 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463C4 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055D20 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0018B68 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0027744 (UsbhAcquirePdoStateLock.c)
 *     UsbhSyncResumePort @ 0x1C00442D4 (UsbhSyncResumePort.c)
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
