/*
 * XREFs of XilCoreDeviceSlot_SetDeviceContext @ 0x1C00411E0
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00171C0 (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_qdx @ 0x1C0040D58 (WPP_RECORDER_SF_qdx.c)
 */

__int64 __fastcall XilCoreDeviceSlot_SetDeviceContext(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r15
  unsigned int v6; // edi
  void *DeviceContextBufferVA; // r13
  __int64 v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+28h] [rbp-40h]

  v4 = a3;
  v6 = 0;
  DeviceContextBufferVA = (void *)XilUsbDevice_GetDeviceContextBufferVA(a2);
  if ( *(_BYTE *)(a2 + 608) )
  {
    Debug_FreAssertMsg(
      (__int64)"Cannot access device context directly when in secure mode",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      345);
    v8 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 584) + 24LL);
  }
  if ( *(_BYTE *)(a2 + 608) )
  {
    Debug_FreAssertMsg(
      (__int64)"Cannot access device context directly when in secure mode",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      315);
    v9 = 0;
  }
  else
  {
    v9 = *(_DWORD *)(*(_QWORD *)(a2 + 584) + 44LL);
  }
  v10 = a1[7];
  v11 = *(_QWORD *)(a1[3] + 16LL);
  memset(DeviceContextBufferVA, 0, v9);
  if ( *(_QWORD *)(v10 + 8 * v4) || *(_QWORD *)(v11 + 8 * v4) )
  {
    v16 = v4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      0xAu,
      0xCu,
      (__int64)&WPP_24817aee2eb83995db756ab8f8e1954d_Traceguids,
      v16,
      *(_QWORD *)(v10 + 8 * v4));
    return (unsigned int)-1073741790;
  }
  else
  {
    *(_QWORD *)(v10 + 8 * v4) = a2;
    *(_QWORD *)(v11 + 8 * v4) = v8;
    WPP_RECORDER_SF_qdx(*(_QWORD *)(a1[1] + 72LL), 0LL, v12, v13, v15);
  }
  return v6;
}
