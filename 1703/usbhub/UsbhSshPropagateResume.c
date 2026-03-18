/*
 * XREFs of UsbhSshPropagateResume @ 0x1C0001418
 * Callers:
 *     UsbhSshResumePort @ 0x1C0002B00 (UsbhSshResumePort.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C00067F0 (UsbhBusIf_ResumeChildHub.c)
 * Callees:
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C000152C (UsbhSendSynchronousUsbIoctlRequest.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0018B68 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0027744 (UsbhAcquirePdoStateLock.c)
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
    UsbhAcquirePdoStateLock(v8, a2, 26LL);
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
