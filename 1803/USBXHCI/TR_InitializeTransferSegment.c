/*
 * XREFs of TR_InitializeTransferSegment @ 0x1C0020D68
 * Callers:
 *     TR_InitializeTransferRing @ 0x1C0020CF4 (TR_InitializeTransferRing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall TR_InitializeTransferSegment(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // [rsp+28h] [rbp-50h]
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v2 + 441) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2420);
    v2 = *(_QWORD *)(a1 + 40);
  }
  memset(v7, 0, sizeof(v7));
  v7[3] = *(_QWORD *)(a1 + 288);
  v7[5] = *(_QWORD *)(a2 + 24);
  LODWORD(v7[4]) = 41;
  if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(v2 + 112), (unsigned int)v7, 48, (unsigned int)&v6, 4) >= 0
    && v6 < 0 )
  {
    v5 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x1Du,
      (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids,
      v5);
    Debug_FreAssertMsg(
      (__int64)"TransferRingInitializeSegment Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2445);
  }
}
