/*
 * XREFs of Usbh_OvercurrentDerefHubBusy @ 0x1C003E72C
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E000 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E0A0 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E170 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E200 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E460 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E5D0 (UsbhQueueOvercurrentReset.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 */

LONG __fastcall Usbh_OvercurrentDerefHubBusy(__int64 a1, __int64 a2, char a3)
{
  struct _KEVENT *v3; // rsi
  __int64 v7; // rdx

  v3 = (struct _KEVENT *)(a2 + 2888);
  KeWaitForSingleObject((PVOID)(a2 + 2888), Executive, 0, 0, 0LL);
  if ( a3 == 1 )
    --*(_DWORD *)(a2 + 2912);
  else
    *(_BYTE *)(a2 + 2916) = 0;
  if ( !*(_DWORD *)(a2 + 2912) && !*(_BYTE *)(a2 + 2916) )
  {
    UsbhDecHubBusy(a1, v7, *(_QWORD **)(a2 + 2880));
    *(_QWORD *)(a2 + 2880) = 0LL;
  }
  return KeSetEvent(v3, 0, 0);
}
