/*
 * XREFs of UsbhPdoUnblockPendedD0IrpWI @ 0x1C0006480
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0003D7C (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 * Callees:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0005004 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0006568 (UsbhPdoSetD0_Finish.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 */

void __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // r9
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx

  Log(a1, 16, 1970291760, (_DWORD)a3, a2);
  v6 = *(_QWORD *)(v5 + 48);
  v7 = PdoExt(v6);
  UsbhPdoSetD0_Finish(a3[9], v6, a3[8]);
  *(_QWORD *)(v7 + 2536) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v8, a3[14]);
  a3[14] = 0LL;
  UsbhEtwLogDevicePowerEvent(v7, a3[8], &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE);
  *(_DWORD *)(a3[8] + 48) = 0;
  IofCompleteRequest((PIRP)a3[8], 0);
  UsbhDecPdoIoCount(v6, a3[8]);
  UsbhReleasePowerContext(a1, (__int64)a3);
}
