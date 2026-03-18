/*
 * XREFs of UsbhSshPropagateResume @ 0x1C0006014
 * Callers:
 *     UsbhSshResumePort @ 0x1C00028AC (UsbhSshResumePort.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0005DF0 (UsbhBusIf_ResumeChildHub.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0006128 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019A34 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 */

__int64 __fastcall UsbhSshPropagateResume(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rcx
  int v9; // ebx

  v6 = 0;
  v7 = PdoExt(a3);
  Log(a1, 0x10000, 1400066130, a1, (__int64)a3);
  if ( (*(_DWORD *)(v7 + 1412) & 4) != 0 )
  {
    v6 = UsbhSendSynchronousUsbIoctlRequest(a1, a3, 2232227LL);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PROPAGATE, *(unsigned __int16 *)(v7 + 1420), v6);
    UsbhAcquirePdoStateLock(v8, a2, 26);
    v9 = *(_DWORD *)(PdoExt(a3) + 1124);
    *(_DWORD *)(a2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    if ( (unsigned int)(v9 - 1) <= 2 )
      UsbhSet_Pdo_Dx(a3, (POWER_STATE)1);
  }
  return v6;
}
