/*
 * XREFs of UsbhPdoUnblockPendedD0IrpWI @ 0x1C00016D0
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0003908 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 * Callees:
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0004E6C (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhReleasePowerContext @ 0x1C0004FD4 (UsbhReleasePowerContext.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // r9
  struct _DEVICE_OBJECT *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx

  Log(a1, 16, 1970291760, (_DWORD)a3, a2);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 48);
  v7 = PdoExt(v6);
  v8 = a3[8];
  v9 = v7;
  v10 = *(_QWORD *)(v8 + 184);
  UsbhPdoSetD0_Finish(a3[9], v6, v8);
  *(_QWORD *)(v9 + 2552) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v11, a3[14]);
  a3[14] = 0LL;
  UsbhEtwLogDevicePowerEvent(v9, a3[8], &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE, *(unsigned int *)(v10 + 24), 0);
  *(_DWORD *)(a3[8] + 48) = 0;
  IofCompleteRequest((PIRP)a3[8], 0);
  UsbhDecPdoIoCount((ULONG_PTR)v6, a3[8]);
  return UsbhReleasePowerContext(a1, a3);
}
