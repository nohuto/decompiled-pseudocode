/*
 * XREFs of Usbh_PCE_Close_Action @ 0x1C004170C
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhHubDereferenceProcessChangeWorkItem @ 0x1C00400A0 (UsbhHubDereferenceProcessChangeWorkItem.c)
 *     UsbhPCE_Close @ 0x1C0040538 (UsbhPCE_Close.c)
 */

void __fastcall Usbh_PCE_Close_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r8d
  __int64 v13; // rax
  KIRQL v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // [rsp+28h] [rbp-30h]
  KIRQL v20; // [rsp+68h] [rbp+10h] BYREF

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x23u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v19,
      a3);
  }
  v8 = UsbhLockPcqWithTag(a1, a2, 22, &v20, 0);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 140));
  v9 = v8;
  Log(a1, 512, 842166320, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v11 == 1 || v11 == 6 || v11 == 15 )
  {
    Log(a1, 512, 842166321, v10, *(unsigned __int16 *)(a2 + 4));
    v15 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 20;
    *(_DWORD *)(v15 + a2 + 1384) = 20;
    UsbhFlushPortChangeQueue(a1, a2, v16, v17);
    UsbhUnlockPcqWithTag(a1, a2, v20);
    UsbhHubDereferenceProcessChangeWorkItem(v18, a2);
    KeWaitForSingleObject((PVOID)(a2 + 2416), Executive, 0, 0, 0LL);
  }
  else if ( (unsigned int)(v11 - 16) > 1 )
  {
    v13 = *(unsigned int *)(a2 + 2400);
    v14 = v20;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag(a1, a2, v14);
  }
  else
  {
    UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
    UsbhUnlockPcqWithTag(a1, a2, v20);
    Log(a1, 512, 842166322, v9, *(unsigned __int16 *)(a2 + 4));
    UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 472), 660000, v12, 7u, a2);
    UsbhPCE_Close(a1, a2, a3);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 140));
}
