/*
 * XREFs of Usbh_PCE_psSUSPEND_Action @ 0x1C00098B8
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_psSUSPEND_Action(__int64 a1, __int64 a2, char a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  KIRQL v9; // dl
  __int64 v10; // rcx
  KIRQL v11; // [rsp+58h] [rbp+10h] BYREF

  FdoExt(a1);
  Log(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      47,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  UsbhLockPcqWithTag(a1, a2, 18, (unsigned int)&v11, 0);
  UsbhFlushPortChangeQueue(a1, a2);
  Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v11;
  v10 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v10 + a2 + 1384) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
}
